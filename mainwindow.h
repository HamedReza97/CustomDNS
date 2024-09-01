#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    QStringList fetchCurrentDnsServers();
    QString getProviderForCurrentServers(const QStringList &currentServers, const QHash<QString, QStringList> &knownServers);
    void clearDnsServersForInterface();
    void getNetworkServiceNames();
    void updateDnsServers(const QString dns);

private slots:
    void on_btnAddDns_pressed();

    void on_btnClearDns_pressed();

    void on_edtDns_textChanged(const QString &arg1);

    void on_btnAddList_pressed();

    void on_cbDns_currentTextChanged(const QString &arg1);

private:
    Ui::MainWindow *ui;
    QStringList dnsServers;

    QHash<QString, QStringList> servers = {
        {"Google", {"8.8.8.8", "8.8.4.4"}},
        {"Cloudflare", {"1.1.1.1", "1.0.0.1"}},
        {"OpenDNS", {"208.67.222.222", "208.67.220.220"}},
        {"Quad9", {"9.9.9.9", "149.112.112.112"}},
        {"Comodo Secure", {"8.26.56.26", "8.20.247.20"}},
        {"Shecan", {"185.51.200.2", "178.22.122.100"}}
    };
};
#endif // MAINWINDOW_H
