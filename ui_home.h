/********************************************************************************
** Form generated from reading UI file 'home.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOME_H
#define UI_HOME_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_home
{
public:
    QPushButton *PersMngBtn_HomeUI;
    QPushButton *DistrSchemeBtn_HomeUI;
    QPushButton *TrainProcBtn_HomeUI;
    QPushButton *PerfMngBtn_HomeUI;
    QPushButton *DevMngBtn_HomeUI;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QWidget *home)
    {
        if (home->objectName().isEmpty())
            home->setObjectName(QStringLiteral("home"));
        home->resize(800, 500);
        home->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        PersMngBtn_HomeUI = new QPushButton(home);
        PersMngBtn_HomeUI->setObjectName(QStringLiteral("PersMngBtn_HomeUI"));
        PersMngBtn_HomeUI->setGeometry(QRect(234, 195, 80, 100));
        PersMngBtn_HomeUI->setMaximumSize(QSize(80, 100));
        PersMngBtn_HomeUI->setStyleSheet(QString::fromUtf8("border-image: url(:/pic/\344\272\272\345\221\230\347\256\241\347\220\206-a.png);"));
        DistrSchemeBtn_HomeUI = new QPushButton(home);
        DistrSchemeBtn_HomeUI->setObjectName(QStringLiteral("DistrSchemeBtn_HomeUI"));
        DistrSchemeBtn_HomeUI->setGeometry(QRect(354, 195, 80, 100));
        DistrSchemeBtn_HomeUI->setMaximumSize(QSize(80, 100));
        DistrSchemeBtn_HomeUI->setStyleSheet(QString::fromUtf8("border-image: url(:/pic/\350\256\255\347\273\203\346\226\271\346\241\210-a.png);"));
        TrainProcBtn_HomeUI = new QPushButton(home);
        TrainProcBtn_HomeUI->setObjectName(QStringLiteral("TrainProcBtn_HomeUI"));
        TrainProcBtn_HomeUI->setGeometry(QRect(474, 195, 80, 100));
        TrainProcBtn_HomeUI->setMaximumSize(QSize(80, 100));
        TrainProcBtn_HomeUI->setStyleSheet(QString::fromUtf8("border-image: url(:/pic/\350\256\255\347\273\203\350\277\233\347\250\213-a.png);"));
        PerfMngBtn_HomeUI = new QPushButton(home);
        PerfMngBtn_HomeUI->setObjectName(QStringLiteral("PerfMngBtn_HomeUI"));
        PerfMngBtn_HomeUI->setGeometry(QRect(594, 195, 80, 100));
        PerfMngBtn_HomeUI->setMaximumSize(QSize(80, 100));
        PerfMngBtn_HomeUI->setStyleSheet(QString::fromUtf8("border-image: url(:/pic/\346\210\220\347\273\251\347\256\241\347\220\206-a.png);"));
        DevMngBtn_HomeUI = new QPushButton(home);
        DevMngBtn_HomeUI->setObjectName(QStringLiteral("DevMngBtn_HomeUI"));
        DevMngBtn_HomeUI->setGeometry(QRect(114, 195, 80, 100));
        DevMngBtn_HomeUI->setMinimumSize(QSize(0, 0));
        DevMngBtn_HomeUI->setMaximumSize(QSize(80, 100));
        DevMngBtn_HomeUI->setStyleSheet(QString::fromUtf8("border-image: url(:/pic/\350\256\276\345\244\207\347\256\241\347\220\206-a.png);"));
        label = new QLabel(home);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 800, 20));
        label->setStyleSheet(QString::fromUtf8("border-image: url(:/pic/\351\241\266\351\203\250-\345\210\207\350\247\222.png);\n"
"color: rgb(255, 255, 255);\n"
"border:none"));
        label->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(home);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(0, 490, 800, 15));
        label_2->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:0.67, y1:0.516727, x2:0, y2:0.545455, stop:0 rgba(0, 85, 0, 255), stop:1 rgba(255, 255, 255, 255));"));

        retranslateUi(home);

        QMetaObject::connectSlotsByName(home);
    } // setupUi

    void retranslateUi(QWidget *home)
    {
        home->setWindowTitle(QApplication::translate("home", "Form", Q_NULLPTR));
        PersMngBtn_HomeUI->setText(QString());
        DistrSchemeBtn_HomeUI->setText(QString());
        TrainProcBtn_HomeUI->setText(QString());
        PerfMngBtn_HomeUI->setText(QString());
        DevMngBtn_HomeUI->setText(QString());
        label->setText(QApplication::translate("home", "\344\270\273\351\241\265\351\235\242", Q_NULLPTR));
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class home: public Ui_home {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOME_H
