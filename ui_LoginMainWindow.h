/********************************************************************************
** Form generated from reading UI file 'LoginMainWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINMAINWINDOW_H
#define UI_LOGINMAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginMainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label_10;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *PassWdLab_LogInUI;
    QLineEdit *PassWdLineEdit_LogInUI;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *UsrNameLab_LogInUI;
    QLineEdit *UsrNameLineEdit_LogInUI;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *LoginBtn_LogInUI;
    QPushButton *ExitBtn_LogInUI;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *LoginMainWindow)
    {
        if (LoginMainWindow->objectName().isEmpty())
            LoginMainWindow->setObjectName(QStringLiteral("LoginMainWindow"));
        LoginMainWindow->resize(800, 500);
        LoginMainWindow->setStyleSheet(QString::fromUtf8("background-image: url(:/pic/\345\260\204\345\207\273\350\256\255\347\273\203\347\201\253.png);"));
        centralwidget = new QWidget(LoginMainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        label_10 = new QLabel(centralwidget);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(0, 0, 531, 81));
        label_10->setStyleSheet(QString::fromUtf8("border-image: url(:/pic/\351\241\266\351\203\250-\345\210\207\350\247\222.png);\n"
"font: 30pt \"\345\215\216\345\205\211\345\244\247\351\273\221_CNKI\";\n"
"color: rgb(255, 255, 255);\n"
"border:none"));
        label_10->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        horizontalLayoutWidget_2 = new QWidget(centralwidget);
        horizontalLayoutWidget_2->setObjectName(QStringLiteral("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(170, 370, 160, 41));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        PassWdLab_LogInUI = new QLabel(horizontalLayoutWidget_2);
        PassWdLab_LogInUI->setObjectName(QStringLiteral("PassWdLab_LogInUI"));
        PassWdLab_LogInUI->setMaximumSize(QSize(50, 30));

        horizontalLayout_2->addWidget(PassWdLab_LogInUI);

        PassWdLineEdit_LogInUI = new QLineEdit(horizontalLayoutWidget_2);
        PassWdLineEdit_LogInUI->setObjectName(QStringLiteral("PassWdLineEdit_LogInUI"));
        PassWdLineEdit_LogInUI->setMaximumSize(QSize(100, 30));

        horizontalLayout_2->addWidget(PassWdLineEdit_LogInUI);

        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(170, 320, 160, 41));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        UsrNameLab_LogInUI = new QLabel(horizontalLayoutWidget);
        UsrNameLab_LogInUI->setObjectName(QStringLiteral("UsrNameLab_LogInUI"));
        UsrNameLab_LogInUI->setMaximumSize(QSize(50, 30));

        horizontalLayout->addWidget(UsrNameLab_LogInUI);

        UsrNameLineEdit_LogInUI = new QLineEdit(horizontalLayoutWidget);
        UsrNameLineEdit_LogInUI->setObjectName(QStringLiteral("UsrNameLineEdit_LogInUI"));
        UsrNameLineEdit_LogInUI->setMaximumSize(QSize(100, 30));

        horizontalLayout->addWidget(UsrNameLineEdit_LogInUI);

        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(170, 430, 161, 41));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        LoginBtn_LogInUI = new QPushButton(layoutWidget);
        LoginBtn_LogInUI->setObjectName(QStringLiteral("LoginBtn_LogInUI"));
        LoginBtn_LogInUI->setMaximumSize(QSize(70, 30));
        LoginBtn_LogInUI->setStyleSheet(QLatin1String("background-color: rgb(0, 85, 0);\n"
"color: rgb(255, 255, 255);\n"
"border:none\n"
""));

        horizontalLayout_3->addWidget(LoginBtn_LogInUI);

        ExitBtn_LogInUI = new QPushButton(layoutWidget);
        ExitBtn_LogInUI->setObjectName(QStringLiteral("ExitBtn_LogInUI"));
        ExitBtn_LogInUI->setMaximumSize(QSize(70, 30));
        ExitBtn_LogInUI->setStyleSheet(QLatin1String("background-color: rgb(0, 85, 0);\n"
"color: rgb(255, 255, 255);\n"
"border:none\n"
""));

        horizontalLayout_3->addWidget(ExitBtn_LogInUI);

        LoginMainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(LoginMainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 23));
        LoginMainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(LoginMainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        LoginMainWindow->setStatusBar(statusbar);

        retranslateUi(LoginMainWindow);

        QMetaObject::connectSlotsByName(LoginMainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *LoginMainWindow)
    {
        LoginMainWindow->setWindowTitle(QApplication::translate("LoginMainWindow", "MainWindow", Q_NULLPTR));
        label_10->setText(QApplication::translate("LoginMainWindow", "   \345\260\204\345\207\273\350\256\255\347\273\203\347\256\241\347\220\206\347\263\273\347\273\237", Q_NULLPTR));
        PassWdLab_LogInUI->setText(QApplication::translate("LoginMainWindow", "\345\257\206\347\240\201:", Q_NULLPTR));
        UsrNameLab_LogInUI->setText(QApplication::translate("LoginMainWindow", "\347\224\250\346\210\267\345\220\215:", Q_NULLPTR));
        LoginBtn_LogInUI->setText(QApplication::translate("LoginMainWindow", "\347\231\273\345\275\225", Q_NULLPTR));
        ExitBtn_LogInUI->setText(QApplication::translate("LoginMainWindow", "\351\200\200\345\207\272", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class LoginMainWindow: public Ui_LoginMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINMAINWINDOW_H
