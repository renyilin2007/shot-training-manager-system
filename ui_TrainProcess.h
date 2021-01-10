/********************************************************************************
** Form generated from reading UI file 'TrainProcess.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRAINPROCESS_H
#define UI_TRAINPROCESS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TrainProcess
{
public:
    QFrame *frame;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QPushButton *pushButton_3;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QPushButton *pushButton_4;
    QLabel *label_9;
    QLabel *label_10;
    QPushButton *pushButton_5;

    void setupUi(QWidget *TrainProcess)
    {
        if (TrainProcess->objectName().isEmpty())
            TrainProcess->setObjectName(QStringLiteral("TrainProcess"));
        TrainProcess->resize(800, 500);
        TrainProcess->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        frame = new QFrame(TrainProcess);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(100, 130, 571, 181));
        frame->setStyleSheet(QStringLiteral("background-color: rgb(226, 226, 226);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        layoutWidget = new QWidget(frame);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(30, 30, 131, 25));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label);

        pushButton_3 = new QPushButton(layoutWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setMaximumSize(QSize(100, 80));
        pushButton_3->setStyleSheet(QLatin1String("background-color: rgb(0, 85, 0);\n"
"color: rgb(255, 255, 255);\n"
"border:none\n"
""));

        horizontalLayout->addWidget(pushButton_3);

        layoutWidget1 = new QWidget(frame);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(30, 60, 131, 25));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label_2);

        pushButton_4 = new QPushButton(layoutWidget1);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setMaximumSize(QSize(100, 80));
        pushButton_4->setStyleSheet(QLatin1String("background-color: rgb(0, 85, 0);\n"
"color: rgb(255, 255, 255);\n"
"border:none\n"
""));

        horizontalLayout_2->addWidget(pushButton_4);

        label_9 = new QLabel(TrainProcess);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(0, 490, 800, 15));
        label_9->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:0.67, y1:0.516727, x2:0, y2:0.545455, stop:0 rgba(0, 85, 0, 255), stop:1 rgba(255, 255, 255, 255));"));
        label_10 = new QLabel(TrainProcess);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(0, 0, 800, 20));
        label_10->setStyleSheet(QString::fromUtf8("border-image: url(:/pic/\351\241\266\351\203\250-\345\210\207\350\247\222.png);\n"
"color: rgb(255, 255, 255);\n"
"border:none"));
        label_10->setAlignment(Qt::AlignCenter);
        pushButton_5 = new QPushButton(TrainProcess);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(0, 0, 20, 20));
        pushButton_5->setStyleSheet(QString::fromUtf8("border-image: url(:/pic/\345\267\246\347\256\255\345\244\2642.png);\n"
"background-color:transparent"));

        retranslateUi(TrainProcess);

        QMetaObject::connectSlotsByName(TrainProcess);
    } // setupUi

    void retranslateUi(QWidget *TrainProcess)
    {
        TrainProcess->setWindowTitle(QApplication::translate("TrainProcess", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("TrainProcess", "\346\226\271\346\241\2101", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("TrainProcess", "\345\274\200\345\247\213\350\256\255\347\273\203", Q_NULLPTR));
        label_2->setText(QApplication::translate("TrainProcess", "\346\226\271\346\241\2102", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("TrainProcess", "\345\274\200\345\247\213\350\256\255\347\273\203", Q_NULLPTR));
        label_9->setText(QString());
        label_10->setText(QApplication::translate("TrainProcess", "\350\256\255\347\273\203\350\277\233\347\250\213", Q_NULLPTR));
        pushButton_5->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class TrainProcess: public Ui_TrainProcess {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRAINPROCESS_H
