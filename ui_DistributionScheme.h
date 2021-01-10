/********************************************************************************
** Form generated from reading UI file 'DistributionScheme.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DISTRIBUTIONSCHEME_H
#define UI_DISTRIBUTIONSCHEME_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DistributionScheme
{
public:
    QPushButton *SelectTarBtn_DistruScheUI;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QComboBox *comboBox_2;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QComboBox *comboBox_3;
    QWidget *layoutWidget_3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QComboBox *comboBox_4;
    QPushButton *GenScheBtn_DistruScheUI;
    QWidget *layoutWidget_4;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QComboBox *comboBox_5;
    QWidget *layoutWidget_5;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_6;
    QComboBox *comboBox_6;
    QWidget *layoutWidget_6;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_7;
    QComboBox *comboBox_7;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *comboBox;
    QFrame *line;
    QFrame *line_2;
    QLabel *label_9;
    QLabel *label_10;
    QPushButton *pushButton_5;
    QFrame *line_3;
    QPushButton *CheckScheBtn_DistruScheUI;

    void setupUi(QWidget *DistributionScheme)
    {
        if (DistributionScheme->objectName().isEmpty())
            DistributionScheme->setObjectName(QStringLiteral("DistributionScheme"));
        DistributionScheme->resize(800, 500);
        DistributionScheme->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        SelectTarBtn_DistruScheUI = new QPushButton(DistributionScheme);
        SelectTarBtn_DistruScheUI->setObjectName(QStringLiteral("SelectTarBtn_DistruScheUI"));
        SelectTarBtn_DistruScheUI->setGeometry(QRect(310, 80, 75, 23));
        SelectTarBtn_DistruScheUI->setStyleSheet(QLatin1String("background-color: rgb(0, 85, 0);\n"
"color: rgb(255, 255, 255);\n"
"border:none\n"
""));
        layoutWidget = new QWidget(DistributionScheme);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(310, 110, 131, 22));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        comboBox_2 = new QComboBox(layoutWidget);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));

        horizontalLayout_2->addWidget(comboBox_2);

        layoutWidget_2 = new QWidget(DistributionScheme);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(310, 140, 131, 22));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget_2);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_3->addWidget(label_3);

        comboBox_3 = new QComboBox(layoutWidget_2);
        comboBox_3->setObjectName(QStringLiteral("comboBox_3"));

        horizontalLayout_3->addWidget(comboBox_3);

        layoutWidget_3 = new QWidget(DistributionScheme);
        layoutWidget_3->setObjectName(QStringLiteral("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(310, 170, 149, 22));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget_3);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget_3);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_4->addWidget(label_4);

        comboBox_4 = new QComboBox(layoutWidget_3);
        comboBox_4->setObjectName(QStringLiteral("comboBox_4"));

        horizontalLayout_4->addWidget(comboBox_4);

        GenScheBtn_DistruScheUI = new QPushButton(DistributionScheme);
        GenScheBtn_DistruScheUI->setObjectName(QStringLiteral("GenScheBtn_DistruScheUI"));
        GenScheBtn_DistruScheUI->setGeometry(QRect(310, 290, 71, 41));
        GenScheBtn_DistruScheUI->setStyleSheet(QLatin1String("background-color: rgb(0, 85, 0);\n"
"color: rgb(255, 255, 255);\n"
"border:none\n"
""));
        layoutWidget_4 = new QWidget(DistributionScheme);
        layoutWidget_4->setObjectName(QStringLiteral("layoutWidget_4"));
        layoutWidget_4->setGeometry(QRect(490, 110, 131, 22));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget_4);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(layoutWidget_4);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_5->addWidget(label_5);

        comboBox_5 = new QComboBox(layoutWidget_4);
        comboBox_5->setObjectName(QStringLiteral("comboBox_5"));

        horizontalLayout_5->addWidget(comboBox_5);

        layoutWidget_5 = new QWidget(DistributionScheme);
        layoutWidget_5->setObjectName(QStringLiteral("layoutWidget_5"));
        layoutWidget_5->setGeometry(QRect(490, 140, 131, 22));
        horizontalLayout_6 = new QHBoxLayout(layoutWidget_5);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(layoutWidget_5);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_6->addWidget(label_6);

        comboBox_6 = new QComboBox(layoutWidget_5);
        comboBox_6->setObjectName(QStringLiteral("comboBox_6"));

        horizontalLayout_6->addWidget(comboBox_6);

        layoutWidget_6 = new QWidget(DistributionScheme);
        layoutWidget_6->setObjectName(QStringLiteral("layoutWidget_6"));
        layoutWidget_6->setGeometry(QRect(490, 170, 149, 22));
        horizontalLayout_7 = new QHBoxLayout(layoutWidget_6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(layoutWidget_6);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout_7->addWidget(label_7);

        comboBox_7 = new QComboBox(layoutWidget_6);
        comboBox_7->setObjectName(QStringLiteral("comboBox_7"));

        horizontalLayout_7->addWidget(comboBox_7);

        layoutWidget1 = new QWidget(DistributionScheme);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(90, 80, 131, 22));
        horizontalLayout = new QHBoxLayout(layoutWidget1);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget1);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        comboBox = new QComboBox(layoutWidget1);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        horizontalLayout->addWidget(comboBox);

        line = new QFrame(DistributionScheme);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(90, 60, 581, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        line_2 = new QFrame(DistributionScheme);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(90, 410, 581, 16));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        label_9 = new QLabel(DistributionScheme);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(0, 490, 800, 15));
        label_9->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:0.67, y1:0.516727, x2:0, y2:0.545455, stop:0 rgba(0, 85, 0, 255), stop:1 rgba(255, 255, 255, 255));"));
        label_10 = new QLabel(DistributionScheme);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(0, 0, 800, 20));
        label_10->setStyleSheet(QString::fromUtf8("border-image: url(:/pic/\351\241\266\351\203\250-\345\210\207\350\247\222.png);\n"
"color: rgb(255, 255, 255);\n"
"border:none"));
        label_10->setAlignment(Qt::AlignCenter);
        pushButton_5 = new QPushButton(DistributionScheme);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(0, 0, 20, 20));
        pushButton_5->setStyleSheet(QString::fromUtf8("border-image: url(:/pic/\345\267\246\347\256\255\345\244\2642.png);\n"
"background-color:transparent"));
        line_3 = new QFrame(DistributionScheme);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setGeometry(QRect(90, 210, 581, 16));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        CheckScheBtn_DistruScheUI = new QPushButton(DistributionScheme);
        CheckScheBtn_DistruScheUI->setObjectName(QStringLiteral("CheckScheBtn_DistruScheUI"));
        CheckScheBtn_DistruScheUI->setGeometry(QRect(390, 290, 71, 41));
        CheckScheBtn_DistruScheUI->setStyleSheet(QLatin1String("background-color: rgb(0, 85, 0);\n"
"color: rgb(255, 255, 255);\n"
"border:none\n"
""));

        retranslateUi(DistributionScheme);

        QMetaObject::connectSlotsByName(DistributionScheme);
    } // setupUi

    void retranslateUi(QWidget *DistributionScheme)
    {
        DistributionScheme->setWindowTitle(QApplication::translate("DistributionScheme", "Form", Q_NULLPTR));
        SelectTarBtn_DistruScheUI->setText(QApplication::translate("DistributionScheme", "\351\200\211\346\213\251\351\235\266\346\234\272", Q_NULLPTR));
        label_2->setText(QApplication::translate("DistributionScheme", "\350\256\276\347\275\256\351\235\266\345\236\213", Q_NULLPTR));
        label_3->setText(QApplication::translate("DistributionScheme", "\350\256\276\347\275\256\345\212\250\344\275\234", Q_NULLPTR));
        label_4->setText(QApplication::translate("DistributionScheme", "\350\256\276\347\275\256\350\257\204\345\256\232\346\240\207\345\207\206", Q_NULLPTR));
        GenScheBtn_DistruScheUI->setText(QApplication::translate("DistributionScheme", "\347\224\237\346\210\220\346\226\271\346\241\210", Q_NULLPTR));
        label_5->setText(QApplication::translate("DistributionScheme", "\345\260\204\345\207\273\350\267\235\347\246\273", Q_NULLPTR));
        label_6->setText(QApplication::translate("DistributionScheme", "\346\236\252\346\242\260\347\261\273\345\236\213", Q_NULLPTR));
        label_7->setText(QApplication::translate("DistributionScheme", "\351\200\211\346\213\251\344\272\272\345\221\230\347\273\204\345\210\253", Q_NULLPTR));
        label->setText(QApplication::translate("DistributionScheme", "\347\247\221\347\233\256\351\200\211\346\213\251", Q_NULLPTR));
        label_9->setText(QString());
        label_10->setText(QApplication::translate("DistributionScheme", "\350\256\255\347\273\203\346\226\271\346\241\210", Q_NULLPTR));
        pushButton_5->setText(QString());
        CheckScheBtn_DistruScheUI->setText(QApplication::translate("DistributionScheme", "\346\237\245\347\234\213\346\226\271\346\241\210", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class DistributionScheme: public Ui_DistributionScheme {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DISTRIBUTIONSCHEME_H
