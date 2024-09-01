#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QProcess>
#include <QDebug>
#include <QShortcut>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->cbDns->addItem("Custom");
    ui->cbDns->blockSignals(true);
    for (auto it = servers.begin(); it != servers.end(); ++it) {
        QString category = it.key();
        ui->cbDns->addItem(category);
    }
    ui->cbDns->blockSignals(false);
    QStringList currentServers = fetchCurrentDnsServers();
    QString provider = getProviderForCurrentServers(currentServers, servers);
    ui->cbDns->setCurrentText(provider);

    ui->lstDns->setEditTriggers(QAbstractItemView::DoubleClicked | QAbstractItemView::SelectedClicked);

    for (int i = 0; i < ui->lstDns->count(); ++i) {
        ui->lstDns->item(i)->setFlags(ui->lstDns->item(i)->flags() | Qt::ItemIsEditable);
    }

    QShortcut *delShortcut = new QShortcut(QKeySequence(Qt::Key_Backspace), ui->lstDns);

    connect(delShortcut, &QShortcut::activated, [this]() {
        QListWidgetItem *item = ui->lstDns->currentItem();
        if (item) {
            delete ui->lstDns->takeItem(ui->lstDns->row(item));
        }
    });
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btnAddDns_pressed()
{
    if(ui->lstDns->count() >= 1){
        if(ui->lstDns->count() == 1){
            clearDnsServersForInterface();
            updateDnsServers(ui->lstDns->item(0)->text());
        }
        else if(ui->lstDns->count() > 1){
            dnsServers.clear();
            for(int i = 0; i < ui->lstDns->count(); i++){
                dnsServers << ui->lstDns->item(i)->text();
            }
            QString dns = QStringLiteral("{%1}").arg(dnsServers.join(","));
            clearDnsServersForInterface();
            updateDnsServers(dns);
        }
    }
}

QStringList MainWindow::fetchCurrentDnsServers()
{
    QString command = "/usr/sbin/scutil";
    QStringList arguments;
    arguments << "--dns";

    QProcess process;
    process.setEnvironment(QStringList() << "PATH=/usr/sbin:/usr/bin:/bin:/sbin");
    process.start(command, arguments);

    if (!process.waitForStarted()) {
        qWarning() << "Failed to start scutil process. Error:" << process.errorString();
        return QStringList();
    }

    if (!process.waitForFinished()) {
        qWarning() << "Failed to finish scutil process. Error:" << process.errorString();
        return QStringList();
    }

    QByteArray output = process.readAllStandardOutput();
    QString outputString = QString::fromUtf8(output);

    QStringList dnsServers;
    QSet<QString> uniqueDnsServers;

    QStringList lines = outputString.split('\n');
    bool isDnsSection = false;

    for (const QString &line : lines) {
        if (line.startsWith("resolver #")) {
            isDnsSection = true;
        } else if (isDnsSection && line.trimmed().startsWith("nameserver")) {
            QStringList parts = line.split(' ');
            if (parts.size() > 1) {
                QString dnsServer = parts.last();
                if (!uniqueDnsServers.contains(dnsServer)) {
                    uniqueDnsServers.insert(dnsServer);
                    dnsServers << dnsServer;
                }
            }
        } else if (line.trimmed().isEmpty()) {
            isDnsSection = false;
        }
    }

    return dnsServers;
}

QString MainWindow::getProviderForCurrentServers(const QStringList &currentServers, const QHash<QString, QStringList> &knownServers)
{
    QHash<QString, QString> serverToProvider;

    for (auto it = knownServers.begin(); it != knownServers.end(); ++it) {
        QString providerName = it.key();
        QStringList knownDnsServers = it.value();

        for (const QString &dnsServer : knownDnsServers) {
            serverToProvider[dnsServer] = providerName;
        }
    }

    QList<QString> providers;
    for (const QString &currentServer : currentServers) {
        if (serverToProvider.contains(currentServer)) {
            providers.append(serverToProvider[currentServer]);
        }
    }
    if (providers.count() == 2) {
        return *providers.begin();
    } else {
        return "Custom";
    }
}

void MainWindow::clearDnsServersForInterface()
{
    QProcess *process = new QProcess(this);
    process->setEnvironment(QStringList() << "PATH=/usr/sbin:/usr/bin:/bin:/sbin");

    QString script = QString(
                         "osascript -e 'do shell script \"networksetup -setdnsservers \\\"Wi-Fi\\\" empty\"'"
                         );

    process->start("bash", QStringList() << "-c" << script);

    if (!process->waitForStarted()) {
        qWarning() << "Failed to start process:" << process->errorString();
        process->deleteLater();
        return;
    }

    if (!process->waitForFinished()) {
        qWarning() << "Failed to finish process:" << process->errorString();
    }
    ui->statusbar->showMessage("DNS Removed Successfully",3000);
    process->deleteLater();
}

void MainWindow::on_btnClearDns_pressed()
{
    clearDnsServersForInterface();
}

void MainWindow::updateDnsServers(const QString dns)
{
    QProcess *process = new QProcess(this);
    process->setEnvironment(QStringList() << "PATH=/usr/sbin:/usr/bin:/bin:/sbin");
    QString script = QString(
                         "osascript -e 'do shell script \"networksetup -setdnsservers \\\"Wi-Fi\\\" %1\"'"
                         ).arg(dns);

    process->start("bash", QStringList() << "-c" << script);

    if (!process->waitForStarted()) {
        qWarning() << "Failed to start process:" << process->errorString();
        process->deleteLater();
        return;
    }

    if (!process->waitForFinished()) {
        qWarning() << "Failed to finish process:" << process->errorString();
    }

    ui->statusbar->showMessage("DNS Changed Successfully",3000);
    process->deleteLater();
}

void MainWindow::on_edtDns_textChanged(const QString &arg1)
{
    ui->cbDns->blockSignals(true);
    ui->cbDns->setCurrentText("Custom");
    ui->cbDns->blockSignals(false);
}


void MainWindow::on_btnAddList_pressed()
{
    if(!ui->edtDns->text().isEmpty()){
        ui->lstDns->addItem(ui->edtDns->text());
        ui->edtDns->clear();
    }
}


void MainWindow::on_cbDns_currentTextChanged(const QString &arg1)
{
    if(arg1 != "Custom"){
        ui->lstDns->clear();
        ui->lstDns->addItems(servers[arg1]);
    }
}

