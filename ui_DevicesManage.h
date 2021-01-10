/********************************************************************************
** Form generated from reading UI file 'DevicesManage.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEVICESMANAGE_H
#define UI_DEVICESMANAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DevicesManage
{
public:
    QPushButton *SearchTarBtn_DevMngUI;
    QPushButton *SetTarBtn_DevMngUI;
    QPushButton *GetTarPlaceEnvBtn_DevMngUI;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *comboBox;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QFrame *frame;
    QPushButton *pushButton;
    QPushButton *pushButton_4;
    QLabel *label_5;
    QLabel *label_7;
    QLabel *label_3;
    QPushButton *pushButton_7;
    QLabel *label_6;
    QPushButton *pushButton_5;
    QPushButton *HideTarBtn_DevMngUI;
    QPushButton *PauseTarBtn_DevMngUI;
    QPushButton *StartTarBtn_DevMngUI;
    QPushButton *DisplayTarBtn_DevMngUI;
    QFrame *line_2;
    QFrame *line_3;
    QLabel *label_9;
    QLabel *label_10;
    QPushButton *BackBtn_DevMngUI;

    void setupUi(QWidget *DevicesManage)
    {
        if (DevicesManage->objectName().isEmpty())
            DevicesManage->setObjectName(QStringLiteral("DevicesManage"));
        DevicesManage->resize(800, 500);
        DevicesManage->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        SearchTarBtn_DevMngUI = new QPushButton(DevicesManage);
        SearchTarBtn_DevMngUI->setObjectName(QStringLiteral("SearchTarBtn_DevMngUI"));
        SearchTarBtn_DevMngUI->setGeometry(QRect(90, 170, 80, 25));
        SearchTarBtn_DevMngUI->setStyleSheet(QLatin1String("background-color: rgb(0, 85, 0);\n"
"color: rgb(255, 255, 255);\n"
"border:none\n"
""));
        SetTarBtn_DevMngUI = new QPushButton(DevicesManage);
        SetTarBtn_DevMngUI->setObjectName(QStringLiteral("SetTarBtn_DevMngUI"));
        SetTarBtn_DevMngUI->setGeometry(QRect(190, 170, 80, 25));
        SetTarBtn_DevMngUI->setStyleSheet(QLatin1String("background-color: rgb(0, 85, 0);\n"
"color: rgb(255, 255, 255);\n"
"border:none\n"
""));
        GetTarPlaceEnvBtn_DevMngUI = new QPushButton(DevicesManage);
        GetTarPlaceEnvBtn_DevMngUI->setObjectName(QStringLiteral("GetTarPlaceEnvBtn_DevMngUI"));
        GetTarPlaceEnvBtn_DevMngUI->setGeometry(QRect(290, 170, 80, 25));
        GetTarPlaceEnvBtn_DevMngUI->setStyleSheet(QLatin1String("background-color: rgb(0, 85, 0);\n"
"color: rgb(255, 255, 255);\n"
"border:none\n"
""));
        layoutWidget = new QWidget(DevicesManage);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(110, 80, 125, 22));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        comboBox = new QComboBox(layoutWidget);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        horizontalLayout->addWidget(comboBox);

        layoutWidget1 = new QWidget(DevicesManage);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(110, 110, 201, 22));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        lineEdit = new QLineEdit(layoutWidget1);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout_2->addWidget(lineEdit);

        frame = new QFrame(DevicesManage);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(90, 210, 471, 231));
        frame->setStyleSheet(QStringLiteral("background-color: rgb(226, 226, 226);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        pushButton = new QPushButton(frame);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(20, 30, 40, 40));
        pushButton->setStyleSheet(QString::fromUtf8("border-image: url(:/pic/\351\235\266\345\255\220\345\233\276\346\240\207.png);"));
        pushButton_4 = new QPushButton(frame);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(89, 29, 40, 40));
        pushButton_4->setStyleSheet(QString::fromUtf8("border-image: url(:/pic/\351\235\266\345\255\220\345\233\276\346\240\207.png);"));
        label_5 = new QLabel(frame);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(98, 68, 31, 21));
        label_5->setAlignment(Qt::AlignCenter);
        label_7 = new QLabel(frame);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(238, 68, 31, 21));
        label_7->setAlignment(Qt::AlignCenter);
        label_3 = new QLabel(frame);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(29, 69, 31, 21));
        label_3->setAlignment(Qt::AlignCenter);
        pushButton_7 = new QPushButton(frame);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(229, 29, 40, 40));
        pushButton_7->setStyleSheet(QString::fromUtf8("border-image: url(:/pic/\351\235\266\345\255\220\345\233\276\346\240\207.png);"));
        label_6 = new QLabel(frame);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(168, 68, 31, 21));
        label_6->setAlignment(Qt::AlignCenter);
        pushButton_5 = new QPushButton(frame);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(159, 29, 40, 40));
        pushButton_5->setStyleSheet(QString::fromUtf8("border-image: url(:/pic/\351\235\266\345\255\220\345\233\276\346\240\207.png);"));
        HideTarBtn_DevMngUI = new QPushButton(DevicesManage);
        HideTarBtn_DevMngUI->setObjectName(QStringLiteral("HideTarBtn_DevMngUI"));
        HideTarBtn_DevMngUI->setGeometry(QRect(580, 350, 75, 23));
        HideTarBtn_DevMngUI->setStyleSheet(QLatin1String("background-color: rgb(0, 85, 0);\n"
"color: rgb(255, 255, 255);\n"
"border:none\n"
""));
        PauseTarBtn_DevMngUI = new QPushButton(DevicesManage);
        PauseTarBtn_DevMngUI->setObjectName(QStringLiteral("PauseTarBtn_DevMngUI"));
        PauseTarBtn_DevMngUI->setGeometry(QRect(580, 380, 75, 23));
        PauseTarBtn_DevMngUI->setStyleSheet(QLatin1String("background-color: rgb(0, 85, 0);\n"
"color: rgb(255, 255, 255);\n"
"border:none\n"
""));
        StartTarBtn_DevMngUI = new QPushButton(DevicesManage);
        StartTarBtn_DevMngUI->setObjectName(QStringLiteral("StartTarBtn_DevMngUI"));
        StartTarBtn_DevMngUI->setGeometry(QRect(580, 410, 75, 23));
        StartTarBtn_DevMngUI->setStyleSheet(QLatin1String("background-color: rgb(0, 85, 0);\n"
"color: rgb(255, 255, 255);\n"
"border:none\n"
""));
        DisplayTarBtn_DevMngUI = new QPushButton(DevicesManage);
        DisplayTarBtn_DevMngUI->setObjectName(QStringLiteral("DisplayTarBtn_DevMngUI"));
        DisplayTarBtn_DevMngUI->setGeometry(QRect(580, 320, 75, 23));
        DisplayTarBtn_DevMngUI->setStyleSheet(QLatin1String("background-color: rgb(0, 85, 0);\n"
"color: rgb(255, 255, 255);\n"
"border:none\n"
""));
        line_2 = new QFrame(DevicesManage);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(90, 60, 471, 16));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        line_3 = new QFrame(DevicesManage);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setGeometry(QRect(90, 130, 471, 16));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        label_9 = new QLabel(DevicesManage);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(0, 490, 800, 15));
        label_9->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:0.67, y1:0.516727, x2:0, y2:0.545455, stop:0 rgba(0, 85, 0, 255), stop:1 rgba(255, 255, 255, 255));"));
        label_10 = new QLabel(DevicesManage);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(0, 0, 800, 20));
        label_10->setStyleSheet(QString::fromUtf8("border-image: url(:/pic/\351\241\266\351\203\250-\345\210\207\350\247\222.png);\n"
"color: rgb(255, 255, 255);\n"
"border:none"));
        label_10->setAlignment(Qt::AlignCenter);
        BackBtn_DevMngUI = new QPushButton(DevicesManage);
        BackBtn_DevMngUI->setObjectName(QStringLiteral("BackBtn_DevMngUI"));
        BackBtn_DevMngUI->setGeometry(QRect(0, 0, 20, 20));
        BackBtn_DevMngUI->setStyleSheet(QString::fromUtf8("border-image: url(:/pic/\345\267\246\347\256\255\345\244\2642.png);\n"
"background-color:transparent"));

        retranslateUi(DevicesManage);

        QMetaObject::connectSlotsByName(DevicesManage);
    } // setupUi

    void retranslateUi(QWidget *DevicesManage)
    {
        DevicesManage->setWindowTitle(QApplication::translate("DevicesManage", "Form", Q_NULLPTR));
        SearchTarBtn_DevMngUI->setText(QApplication::translate("DevicesManage", "\346\237\245\350\257\242\351\235\266\346\234\272", Q_NULLPTR));
        SetTarBtn_DevMngUI->setText(QApplication::translate("DevicesManage", "\350\256\276\347\275\256\351\235\266\346\234\272", Q_NULLPTR));
        GetTarPlaceEnvBtn_DevMngUI->setText(QApplication::translate("DevicesManage", "\351\235\266\345\234\272\347\216\257\345\242\203", Q_NULLPTR));
        label->setText(QApplication::translate("DevicesManage", "\351\200\211\346\213\251\344\270\262\345\217\243", Q_NULLPTR));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("DevicesManage", "COM1", Q_NULLPTR)
        );
        label_2->setText(QApplication::translate("DevicesManage", "\350\256\276\347\275\256\347\275\221\345\217\243IP", Q_NULLPTR));
        lineEdit->setText(QApplication::translate("DevicesManage", "    .     .     .", Q_NULLPTR));
        pushButton->setText(QString());
        pushButton_4->setText(QString());
        label_5->setText(QApplication::translate("DevicesManage", "\351\235\266\346\234\2722", Q_NULLPTR));
        label_7->setText(QApplication::translate("DevicesManage", "\351\235\266\346\234\2724", Q_NULLPTR));
        label_3->setText(QApplication::translate("DevicesManage", "\351\235\266\346\234\2721", Q_NULLPTR));
        pushButton_7->setText(QString());
        label_6->setText(QApplication::translate("DevicesManage", "\351\235\266\346\234\2723", Q_NULLPTR));
        pushButton_5->setText(QString());
        HideTarBtn_DevMngUI->setText(QApplication::translate("DevicesManage", "\351\235\266\346\234\272\351\232\220\350\227\217", Q_NULLPTR));
        PauseTarBtn_DevMngUI->setText(QApplication::translate("DevicesManage", "\351\235\266\346\234\272\346\232\202\345\201\234", Q_NULLPTR));
        StartTarBtn_DevMngUI->setText(QApplication::translate("DevicesManage", "\351\235\266\346\234\272\345\274\200\345\247\213", Q_NULLPTR));
        DisplayTarBtn_DevMngUI->setText(QApplication::translate("DevicesManage", "\351\235\266\346\234\272\346\230\276\347\244\272", Q_NULLPTR));
        label_9->setText(QString());
        label_10->setText(QApplication::translate("DevicesManage", "\350\256\276\345\244\207\347\256\241\347\220\206", Q_NULLPTR));
        BackBtn_DevMngUI->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class DevicesManage: public Ui_DevicesManage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEVICESMANAGE_H
