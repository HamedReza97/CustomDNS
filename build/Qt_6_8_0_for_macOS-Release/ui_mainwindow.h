/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QSpacerItem *verticalSpacer;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QLineEdit *edtDns;
    QPushButton *btnAddList;
    QListWidget *lstDns;
    QLabel *label_3;
    QComboBox *cbDns;
    QSpacerItem *verticalSpacer_2;
    QPushButton *btnAddDns;
    QPushButton *btnClearDns;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(446, 689);
        MainWindow->setMinimumSize(QSize(446, 689));
        MainWindow->setMaximumSize(QSize(446, 689));
        QPalette palette;
        QLinearGradient gradient(0, 1, 0, 0);
        gradient.setSpread(QGradient::PadSpread);
        gradient.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient.setColorAt(0, QColor(10, 10, 10, 255));
        gradient.setColorAt(1, QColor(20, 20, 25, 255));
        QBrush brush(gradient);
        palette.setBrush(QPalette::Active, QPalette::Button, brush);
        QLinearGradient gradient1(0, 1, 0, 0);
        gradient1.setSpread(QGradient::PadSpread);
        gradient1.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient1.setColorAt(0, QColor(10, 10, 10, 255));
        gradient1.setColorAt(1, QColor(20, 20, 25, 255));
        QBrush brush1(gradient1);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        QLinearGradient gradient2(0, 1, 0, 0);
        gradient2.setSpread(QGradient::PadSpread);
        gradient2.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient2.setColorAt(0, QColor(10, 10, 10, 255));
        gradient2.setColorAt(1, QColor(20, 20, 25, 255));
        QBrush brush2(gradient2);
        palette.setBrush(QPalette::Active, QPalette::Window, brush2);
        QLinearGradient gradient3(0, 1, 0, 0);
        gradient3.setSpread(QGradient::PadSpread);
        gradient3.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient3.setColorAt(0, QColor(10, 10, 10, 255));
        gradient3.setColorAt(1, QColor(20, 20, 25, 255));
        QBrush brush3(gradient3);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush3);
        QLinearGradient gradient4(0, 1, 0, 0);
        gradient4.setSpread(QGradient::PadSpread);
        gradient4.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient4.setColorAt(0, QColor(10, 10, 10, 255));
        gradient4.setColorAt(1, QColor(20, 20, 25, 255));
        QBrush brush4(gradient4);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush4);
        QLinearGradient gradient5(0, 1, 0, 0);
        gradient5.setSpread(QGradient::PadSpread);
        gradient5.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient5.setColorAt(0, QColor(10, 10, 10, 255));
        gradient5.setColorAt(1, QColor(20, 20, 25, 255));
        QBrush brush5(gradient5);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush5);
        QLinearGradient gradient6(0, 1, 0, 0);
        gradient6.setSpread(QGradient::PadSpread);
        gradient6.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient6.setColorAt(0, QColor(10, 10, 10, 255));
        gradient6.setColorAt(1, QColor(20, 20, 25, 255));
        QBrush brush6(gradient6);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush6);
        QLinearGradient gradient7(0, 1, 0, 0);
        gradient7.setSpread(QGradient::PadSpread);
        gradient7.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient7.setColorAt(0, QColor(10, 10, 10, 255));
        gradient7.setColorAt(1, QColor(20, 20, 25, 255));
        QBrush brush7(gradient7);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush7);
        QLinearGradient gradient8(0, 1, 0, 0);
        gradient8.setSpread(QGradient::PadSpread);
        gradient8.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient8.setColorAt(0, QColor(10, 10, 10, 255));
        gradient8.setColorAt(1, QColor(20, 20, 25, 255));
        QBrush brush8(gradient8);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush8);
        MainWindow->setPalette(palette);
        MainWindow->setStyleSheet(QString::fromUtf8("QWidget{\n"
"background: solid qlineargradient(spread:pad, x1:0, y1:1, x2:0, y2:0, stop:0 rgba(10, 10, 10, 255), stop:1 rgba(20, 20, 25, 255));\n"
"border: none;\n"
"border-radius: 15px;\n"
"}\n"
"\n"
"QScrollArea{\n"
"border: 1px solid transparent;\n"
"border-radius: 20px;\n"
"}\n"
"QPushButton {\n"
"background-color: rgba(255,255,255,10);\n"
"color: #ffffff;\n"
"border: 1px solid transparent;\n"
"border-radius: 12px;\n"
"padding: 10px 20px 10px 20px;\n"
"}\n"
"QPushButton:hover {\n"
"background-color: rgba(255,255,255,20);\n"
"}\n"
"QPushButton:pressed {\n"
"background-color: rgba(255,255,255,10);\n"
"}\n"
"QPushButton:disabled {\n"
"background-color: #222222;\n"
"color: #666666;\n"
"}\n"
"QPushButton:focus {\n"
"outline: none;\n"
"border: 1px solid #0066FF;\n"
"}\n"
"QListView {\n"
"background-color: rgba(255,255,255,10);\n"
"border: 1px solid transparent;\n"
"border-radius: 15px;\n"
"padding: 5px;\n"
"}\n"
"QListView::item {\n"
"border: none;\n"
"padding: 5px;\n"
"margin: 5px;\n"
"color: #ffffff;\n"
"}\n"
""
                        "QListView::item:selected {\n"
"background-color: #0066FF;\n"
"border: 1px solid transparent;\n"
"border-radius: 5px;\n"
"color: #ffffff;\n"
"}\n"
"QListView::item:selected:focus {\n"
"border: 1px solid #0066FF;\n"
"}\n"
"QListView::item:hover {\n"
"background-color: rgba(0,102,255,20);\n"
"border: 1px solid transparent;\n"
"border-radius: 5px;\n"
"color: #0066FF;\n"
"}\n"
"QListView::item:disabled {\n"
"color: #666666;\n"
"background-color: #222222;\n"
"}\n"
"QLineEdit {\n"
"background-color: rgba(255,255,255,10);\n"
"border: 1px solid transparent;\n"
"border-radius: 10px;\n"
"padding: 8px;\n"
"color: #ffffff;\n"
"}\n"
"QLineEdit:focus {\n"
"border: 1px solid #0066FF;\n"
"}\n"
"QLineEdit::placeholder {\n"
"color: #666666;\n"
"}\n"
"QLineEdit:disabled {\n"
"background-color: #222222;\n"
"color: #666666;\n"
"border: 1px solid transparent;\n"
"}\n"
"QProgressBar {\n"
"border: 1px solid transparent;\n"
"height: 12px;\n"
"border-radius: 6px;\n"
"background-color: rgba(255,255,255,10);\n"
"text-align: center;\n"
"}\n"
""
                        "QProgressBar::chunk {\n"
"background-color: #00DC72;\n"
"border: 1px solid transparent;\n"
"border-radius: 6px;\n"
"}\n"
"QProgressBar::indicator {\n"
"border: 1px solid transparent;\n"
"border-radius: 5px;\n"
"}\n"
"QProgressBar:disabled {\n"
"border: 1px solid transparent;\n"
"background-color: #222222;\n"
"}\n"
"QProgressBar:focus {\n"
"border: 1px solid transparent;\n"
"}\n"
"QCheckBox {\n"
"background-color: transparent;\n"
"color: #ffffff;\n"
"border: 1px solid transparent;\n"
"border-radius: 5px;\n"
"}\n"
"QCheckBox::indicator {\n"
"width: 18px;\n"
"height: 18px;\n"
"margin-left: 5px;\n"
"}\n"
"QRadioButton {\n"
"color: #ffffff;\n"
"border: none;\n"
"}\n"
"QRadioButton::indicator {\n"
"width: 15px;\n"
"height: 15px;\n"
"margin-left: 5px;\n"
"}\n"
"QTabWidget::pane {\n"
"border: 1px solid transparent;\n"
"border-radius: 20px;\n"
"background-color: rgba(255,255,255,10);\n"
"}\n"
"QTabBar::tab {\n"
"color: white;\n"
"border: 1px solid transparent;\n"
"border-bottom-color: rgba(255,255,255,10);\n"
"border-t"
                        "op-left-radius: 15px;\n"
"min-width: 80px;\n"
"border-top-right-radius: 15px;\n"
"padding: 6px;\n"
"margin-right: 2px;\n"
"}\n"
"QTabBar::tab:selected {\n"
"background-color: rgba(255,255,255,10);\n"
"border-bottom: 2px solid #00DC72;\n"
"color: white;\n"
"}\n"
"QTabBar::tab:!selected {\n"
"background-color: rgba(255,255,255,20);\n"
"color: #dddddd;\n"
"}\n"
"QTabBar::tab:hover {\n"
"background-color: rgba(255,255,255,20);\n"
"}\n"
"QTabBar::tab:pressed {\n"
"background-color: rgba(255,255,255,10);\n"
"}\n"
"QTabBar::tab:disabled {\n"
"background-color: rgba(255,255,255,30);\n"
"color: #666666;\n"
"}\n"
"QComboBox {\n"
"background-color: rgba(255,255,255,10);\n"
"border: 1px solid transparent;\n"
"border-radius: 10px;\n"
"padding: 8px;\n"
"color: #ffffff;\n"
"}\n"
"QComboBox:hover {\n"
"background-color: rgba(255,255,255,20);\n"
"}\n"
"QComboBox:disabled {\n"
"background-color: rgba(255,255,255,30);\n"
"color: #666666;\n"
"}\n"
"QComboBox:pressed {\n"
"background-color: rgba(255,255,255,10);\n"
"}\n"
"QComboBo"
                        "x QAbstractItemView {\n"
"background: solid transparent;\n"
"border: 1px solid transparent;\n"
"border-radius: 5px;\n"
"}\n"
"QComboBox::item {\n"
"padding:5px 0px 5px 0px;\n"
"max-height: 18px;\n"
"}\n"
"QComboBox::item:selected {\n"
"background: solid #0066FF;\n"
"border: 1px solid transparent;\n"
"border-radius: 5px;\n"
"}\n"
"QGroupBox {\n"
"background-color: rgba(255,255,255,10);\n"
"border: 1px solid transparent;\n"
"border-radius: 15px;\n"
"padding: 10px;\n"
"margin: 20px;\n"
"}\n"
"QGroupBox::title {\n"
"margin-top: -20px;\n"
"subcontrol-position: top;\n"
"padding: 3px 15px 5px 15px;\n"
"color: #ffffff;\n"
"background-color: #222222;\n"
"border: 1px solid transparent;\n"
"border-radius: 10px;\n"
"}\n"
"\n"
"QTableWidget {\n"
"background-color: rgba(255,255,255,10);\n"
"gridline-color: rgba(255,255,255,30);\n"
"border: 1px solid transparent;\n"
"border-radius: 15px;\n"
"}\n"
"\n"
"QTableWidget QHeaderView{\n"
"background-color:  transparent;\n"
"}\n"
"\n"
"QHeaderView::section::horizontal {\n"
"backgrou"
                        "nd-color:  transparent;\n"
"color: #ffffff;\n"
"padding: 4px;\n"
"}\n"
"\n"
"QHeaderView::section::vertical {\n"
"background-color:  transparent;\n"
"color: #ffffff;\n"
"padding: 4px;\n"
"}\n"
"\n"
"QTableCornerButton::section {\n"
"background-color: transparent;\n"
"}\n"
"\n"
"QTableWidget::item {\n"
"background-color: rgba(255,255,255,10);\n"
"padding: 7px;\n"
"border: 1px solid transparent;\n"
"}\n"
"\n"
"QTableWidget::item:alternate {\n"
"background-color: rgba(255,255,255,30);\n"
"}\n"
"\n"
"QTableWidget::item:selected {\n"
"border-bottom: 2px solid #00DC72;\n"
"color: white;\n"
"}\n"
"\n"
"QTableWidget::item:hover {\n"
"background-color: rgba(255,255,255,20);\n"
"color: white;\n"
"}\n"
"\n"
"QScrollBar:vertical {\n"
"background-color: transparent;\n"
"width: 10px;\n"
"}\n"
"\n"
"QScrollBar::handle:vertical {\n"
"background-color: rgba(255,255,255,30);\n"
"border: 1px solid transparent;\n"
"border-radius: 5px;\n"
"min-height: 20px;\n"
"}\n"
"\n"
"QScrollBar::add-line:vertical, QScrollBar::sub-line:vertica"
                        "l {\n"
"background-color: transparent;\n"
"}\n"
"\n"
"QScrollBar:horizontal {\n"
"background-color: transparent;\n"
"width: 10px;\n"
"}\n"
"\n"
"QScrollBar::handle:horizontal {\n"
"background-color: rgba(255,255,255,30);\n"
"border: 1px solid transparent;\n"
"border-radius: 5px;\n"
"min-height: 20px;\n"
"}\n"
"\n"
"QScrollBar::add-line:horizontal, QScrollBar::sub-line:horizontal {\n"
"background-color: transparent;\n"
"}\n"
"\n"
"QLabel{\n"
"background-color: transparent;\n"
"}"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(40, 40, 361, 561));
        QFont font;
        font.setFamilies({QString::fromUtf8("Vazir")});
        font.setPointSize(14);
        font.setBold(false);
        layoutWidget->setFont(font);
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(15);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Vazir")});
        font1.setPointSize(24);
        font1.setBold(false);
        label_2->setFont(font1);
        label_2->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout->addWidget(label_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        label = new QLabel(layoutWidget);
        label->setObjectName("label");
        label->setFont(font);

        verticalLayout->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        edtDns = new QLineEdit(layoutWidget);
        edtDns->setObjectName("edtDns");
        edtDns->setFont(font);
        edtDns->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout->addWidget(edtDns);

        btnAddList = new QPushButton(layoutWidget);
        btnAddList->setObjectName("btnAddList");
        btnAddList->setFont(font);
        btnAddList->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout->addWidget(btnAddList);


        verticalLayout->addLayout(horizontalLayout);

        lstDns = new QListWidget(layoutWidget);
        lstDns->setObjectName("lstDns");
        lstDns->setFont(font);
        lstDns->setStyleSheet(QString::fromUtf8(""));
        lstDns->setEditTriggers(QAbstractItemView::EditTrigger::AnyKeyPressed|QAbstractItemView::EditTrigger::DoubleClicked|QAbstractItemView::EditTrigger::EditKeyPressed);

        verticalLayout->addWidget(lstDns);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName("label_3");
        label_3->setFont(font);

        verticalLayout->addWidget(label_3);

        cbDns = new QComboBox(layoutWidget);
        cbDns->setObjectName("cbDns");
        cbDns->setFont(font);
        cbDns->setStyleSheet(QString::fromUtf8(""));

        verticalLayout->addWidget(cbDns);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        btnAddDns = new QPushButton(layoutWidget);
        btnAddDns->setObjectName("btnAddDns");
        btnAddDns->setFont(font);
        btnAddDns->setStyleSheet(QString::fromUtf8(""));

        verticalLayout->addWidget(btnAddDns);

        btnClearDns = new QPushButton(layoutWidget);
        btnClearDns->setObjectName("btnClearDns");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(btnClearDns->sizePolicy().hasHeightForWidth());
        btnClearDns->setSizePolicy(sizePolicy);
        btnClearDns->setFont(font);
        btnClearDns->setStyleSheet(QString::fromUtf8(""));

        verticalLayout->addWidget(btnClearDns);

        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        statusbar->setStyleSheet(QString::fromUtf8(""));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);
        QObject::connect(edtDns, &QLineEdit::returnPressed, btnAddList, qOverload<>(&QPushButton::click));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Custom DNS for MacOS", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Enter DNS", nullptr));
        btnAddList->setText(QCoreApplication::translate("MainWindow", "Add", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Select DNS", nullptr));
        btnAddDns->setText(QCoreApplication::translate("MainWindow", "Set DNS", nullptr));
        btnClearDns->setText(QCoreApplication::translate("MainWindow", "Clear DNS", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
