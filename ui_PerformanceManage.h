/********************************************************************************
** Form generated from reading UI file 'PerformanceManage.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PERFORMANCEMANAGE_H
#define UI_PERFORMANCEMANAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PerformanceManage
{
public:
    QPushButton *ExportDataBtn_PerforMngUI;
    QPushButton *QueryBtn_PerforMngUI;
    QTableWidget *tableWidget_2;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_6;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *lineEdit_3;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout_7;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_5;
    QLineEdit *lineEdit_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLineEdit *lineEdit_4;
    QLabel *label_9;
    QLabel *label_10;
    QPushButton *pushButton_5;

    void setupUi(QWidget *PerformanceManage)
    {
        if (PerformanceManage->objectName().isEmpty())
            PerformanceManage->setObjectName(QStringLiteral("PerformanceManage"));
        PerformanceManage->resize(800, 500);
        PerformanceManage->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        ExportDataBtn_PerforMngUI = new QPushButton(PerformanceManage);
        ExportDataBtn_PerforMngUI->setObjectName(QStringLiteral("ExportDataBtn_PerforMngUI"));
        ExportDataBtn_PerforMngUI->setGeometry(QRect(370, 440, 75, 23));
        ExportDataBtn_PerforMngUI->setStyleSheet(QLatin1String("background-color: rgb(0, 85, 0);\n"
"color: rgb(255, 255, 255);\n"
"border:none\n"
""));
        QueryBtn_PerforMngUI = new QPushButton(PerformanceManage);
        QueryBtn_PerforMngUI->setObjectName(QStringLiteral("QueryBtn_PerforMngUI"));
        QueryBtn_PerforMngUI->setGeometry(QRect(600, 110, 75, 23));
        QueryBtn_PerforMngUI->setStyleSheet(QLatin1String("background-color: rgb(0, 85, 0);\n"
"color: rgb(255, 255, 255);\n"
"border:none\n"
""));
        tableWidget_2 = new QTableWidget(PerformanceManage);
        if (tableWidget_2->columnCount() < 12)
            tableWidget_2->setColumnCount(12);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(7, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(8, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(9, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(10, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(11, __qtablewidgetitem11);
        if (tableWidget_2->rowCount() < 11)
            tableWidget_2->setRowCount(11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tableWidget_2->setVerticalHeaderItem(0, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        tableWidget_2->setVerticalHeaderItem(1, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        tableWidget_2->setVerticalHeaderItem(2, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        tableWidget_2->setVerticalHeaderItem(3, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        tableWidget_2->setVerticalHeaderItem(4, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        tableWidget_2->setVerticalHeaderItem(5, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        tableWidget_2->setVerticalHeaderItem(6, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        tableWidget_2->setVerticalHeaderItem(7, __qtablewidgetitem19);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        tableWidget_2->setVerticalHeaderItem(8, __qtablewidgetitem20);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        tableWidget_2->setVerticalHeaderItem(9, __qtablewidgetitem21);
        QTableWidgetItem *__qtablewidgetitem22 = new QTableWidgetItem();
        tableWidget_2->setVerticalHeaderItem(10, __qtablewidgetitem22);
        QTableWidgetItem *__qtablewidgetitem23 = new QTableWidgetItem();
        tableWidget_2->setItem(0, 0, __qtablewidgetitem23);
        QTableWidgetItem *__qtablewidgetitem24 = new QTableWidgetItem();
        tableWidget_2->setItem(0, 1, __qtablewidgetitem24);
        QTableWidgetItem *__qtablewidgetitem25 = new QTableWidgetItem();
        tableWidget_2->setItem(0, 2, __qtablewidgetitem25);
        QTableWidgetItem *__qtablewidgetitem26 = new QTableWidgetItem();
        tableWidget_2->setItem(0, 3, __qtablewidgetitem26);
        QTableWidgetItem *__qtablewidgetitem27 = new QTableWidgetItem();
        tableWidget_2->setItem(0, 4, __qtablewidgetitem27);
        QTableWidgetItem *__qtablewidgetitem28 = new QTableWidgetItem();
        tableWidget_2->setItem(0, 5, __qtablewidgetitem28);
        QTableWidgetItem *__qtablewidgetitem29 = new QTableWidgetItem();
        tableWidget_2->setItem(0, 6, __qtablewidgetitem29);
        QTableWidgetItem *__qtablewidgetitem30 = new QTableWidgetItem();
        tableWidget_2->setItem(0, 7, __qtablewidgetitem30);
        QTableWidgetItem *__qtablewidgetitem31 = new QTableWidgetItem();
        tableWidget_2->setItem(0, 8, __qtablewidgetitem31);
        QTableWidgetItem *__qtablewidgetitem32 = new QTableWidgetItem();
        tableWidget_2->setItem(1, 0, __qtablewidgetitem32);
        QTableWidgetItem *__qtablewidgetitem33 = new QTableWidgetItem();
        tableWidget_2->setItem(1, 1, __qtablewidgetitem33);
        QTableWidgetItem *__qtablewidgetitem34 = new QTableWidgetItem();
        tableWidget_2->setItem(1, 2, __qtablewidgetitem34);
        QTableWidgetItem *__qtablewidgetitem35 = new QTableWidgetItem();
        tableWidget_2->setItem(1, 3, __qtablewidgetitem35);
        QTableWidgetItem *__qtablewidgetitem36 = new QTableWidgetItem();
        tableWidget_2->setItem(1, 4, __qtablewidgetitem36);
        QTableWidgetItem *__qtablewidgetitem37 = new QTableWidgetItem();
        tableWidget_2->setItem(1, 5, __qtablewidgetitem37);
        QTableWidgetItem *__qtablewidgetitem38 = new QTableWidgetItem();
        tableWidget_2->setItem(1, 6, __qtablewidgetitem38);
        QTableWidgetItem *__qtablewidgetitem39 = new QTableWidgetItem();
        tableWidget_2->setItem(1, 7, __qtablewidgetitem39);
        QTableWidgetItem *__qtablewidgetitem40 = new QTableWidgetItem();
        tableWidget_2->setItem(1, 8, __qtablewidgetitem40);
        QTableWidgetItem *__qtablewidgetitem41 = new QTableWidgetItem();
        tableWidget_2->setItem(2, 0, __qtablewidgetitem41);
        QTableWidgetItem *__qtablewidgetitem42 = new QTableWidgetItem();
        tableWidget_2->setItem(2, 1, __qtablewidgetitem42);
        QTableWidgetItem *__qtablewidgetitem43 = new QTableWidgetItem();
        tableWidget_2->setItem(2, 2, __qtablewidgetitem43);
        QTableWidgetItem *__qtablewidgetitem44 = new QTableWidgetItem();
        tableWidget_2->setItem(2, 3, __qtablewidgetitem44);
        QTableWidgetItem *__qtablewidgetitem45 = new QTableWidgetItem();
        tableWidget_2->setItem(2, 4, __qtablewidgetitem45);
        QTableWidgetItem *__qtablewidgetitem46 = new QTableWidgetItem();
        tableWidget_2->setItem(2, 5, __qtablewidgetitem46);
        QTableWidgetItem *__qtablewidgetitem47 = new QTableWidgetItem();
        tableWidget_2->setItem(2, 6, __qtablewidgetitem47);
        QTableWidgetItem *__qtablewidgetitem48 = new QTableWidgetItem();
        tableWidget_2->setItem(2, 7, __qtablewidgetitem48);
        QTableWidgetItem *__qtablewidgetitem49 = new QTableWidgetItem();
        tableWidget_2->setItem(2, 8, __qtablewidgetitem49);
        QTableWidgetItem *__qtablewidgetitem50 = new QTableWidgetItem();
        tableWidget_2->setItem(3, 0, __qtablewidgetitem50);
        QTableWidgetItem *__qtablewidgetitem51 = new QTableWidgetItem();
        tableWidget_2->setItem(3, 1, __qtablewidgetitem51);
        QTableWidgetItem *__qtablewidgetitem52 = new QTableWidgetItem();
        tableWidget_2->setItem(3, 2, __qtablewidgetitem52);
        QTableWidgetItem *__qtablewidgetitem53 = new QTableWidgetItem();
        tableWidget_2->setItem(3, 3, __qtablewidgetitem53);
        QTableWidgetItem *__qtablewidgetitem54 = new QTableWidgetItem();
        tableWidget_2->setItem(3, 4, __qtablewidgetitem54);
        QTableWidgetItem *__qtablewidgetitem55 = new QTableWidgetItem();
        tableWidget_2->setItem(3, 5, __qtablewidgetitem55);
        QTableWidgetItem *__qtablewidgetitem56 = new QTableWidgetItem();
        tableWidget_2->setItem(3, 6, __qtablewidgetitem56);
        QTableWidgetItem *__qtablewidgetitem57 = new QTableWidgetItem();
        tableWidget_2->setItem(3, 7, __qtablewidgetitem57);
        QTableWidgetItem *__qtablewidgetitem58 = new QTableWidgetItem();
        tableWidget_2->setItem(3, 8, __qtablewidgetitem58);
        QTableWidgetItem *__qtablewidgetitem59 = new QTableWidgetItem();
        tableWidget_2->setItem(4, 0, __qtablewidgetitem59);
        QTableWidgetItem *__qtablewidgetitem60 = new QTableWidgetItem();
        tableWidget_2->setItem(4, 1, __qtablewidgetitem60);
        QTableWidgetItem *__qtablewidgetitem61 = new QTableWidgetItem();
        tableWidget_2->setItem(4, 2, __qtablewidgetitem61);
        QTableWidgetItem *__qtablewidgetitem62 = new QTableWidgetItem();
        tableWidget_2->setItem(4, 3, __qtablewidgetitem62);
        QTableWidgetItem *__qtablewidgetitem63 = new QTableWidgetItem();
        tableWidget_2->setItem(4, 4, __qtablewidgetitem63);
        QTableWidgetItem *__qtablewidgetitem64 = new QTableWidgetItem();
        tableWidget_2->setItem(4, 5, __qtablewidgetitem64);
        QTableWidgetItem *__qtablewidgetitem65 = new QTableWidgetItem();
        tableWidget_2->setItem(4, 6, __qtablewidgetitem65);
        QTableWidgetItem *__qtablewidgetitem66 = new QTableWidgetItem();
        tableWidget_2->setItem(4, 7, __qtablewidgetitem66);
        QTableWidgetItem *__qtablewidgetitem67 = new QTableWidgetItem();
        tableWidget_2->setItem(4, 8, __qtablewidgetitem67);
        QTableWidgetItem *__qtablewidgetitem68 = new QTableWidgetItem();
        tableWidget_2->setItem(5, 0, __qtablewidgetitem68);
        QTableWidgetItem *__qtablewidgetitem69 = new QTableWidgetItem();
        tableWidget_2->setItem(5, 1, __qtablewidgetitem69);
        QTableWidgetItem *__qtablewidgetitem70 = new QTableWidgetItem();
        tableWidget_2->setItem(5, 2, __qtablewidgetitem70);
        QTableWidgetItem *__qtablewidgetitem71 = new QTableWidgetItem();
        tableWidget_2->setItem(5, 3, __qtablewidgetitem71);
        QTableWidgetItem *__qtablewidgetitem72 = new QTableWidgetItem();
        tableWidget_2->setItem(5, 4, __qtablewidgetitem72);
        QTableWidgetItem *__qtablewidgetitem73 = new QTableWidgetItem();
        tableWidget_2->setItem(5, 5, __qtablewidgetitem73);
        QTableWidgetItem *__qtablewidgetitem74 = new QTableWidgetItem();
        tableWidget_2->setItem(5, 6, __qtablewidgetitem74);
        QTableWidgetItem *__qtablewidgetitem75 = new QTableWidgetItem();
        tableWidget_2->setItem(5, 7, __qtablewidgetitem75);
        QTableWidgetItem *__qtablewidgetitem76 = new QTableWidgetItem();
        tableWidget_2->setItem(5, 8, __qtablewidgetitem76);
        QTableWidgetItem *__qtablewidgetitem77 = new QTableWidgetItem();
        tableWidget_2->setItem(6, 0, __qtablewidgetitem77);
        QTableWidgetItem *__qtablewidgetitem78 = new QTableWidgetItem();
        tableWidget_2->setItem(6, 1, __qtablewidgetitem78);
        QTableWidgetItem *__qtablewidgetitem79 = new QTableWidgetItem();
        tableWidget_2->setItem(6, 2, __qtablewidgetitem79);
        QTableWidgetItem *__qtablewidgetitem80 = new QTableWidgetItem();
        tableWidget_2->setItem(6, 3, __qtablewidgetitem80);
        QTableWidgetItem *__qtablewidgetitem81 = new QTableWidgetItem();
        tableWidget_2->setItem(6, 4, __qtablewidgetitem81);
        QTableWidgetItem *__qtablewidgetitem82 = new QTableWidgetItem();
        tableWidget_2->setItem(6, 5, __qtablewidgetitem82);
        QTableWidgetItem *__qtablewidgetitem83 = new QTableWidgetItem();
        tableWidget_2->setItem(6, 6, __qtablewidgetitem83);
        QTableWidgetItem *__qtablewidgetitem84 = new QTableWidgetItem();
        tableWidget_2->setItem(6, 7, __qtablewidgetitem84);
        QTableWidgetItem *__qtablewidgetitem85 = new QTableWidgetItem();
        tableWidget_2->setItem(6, 8, __qtablewidgetitem85);
        QTableWidgetItem *__qtablewidgetitem86 = new QTableWidgetItem();
        tableWidget_2->setItem(6, 9, __qtablewidgetitem86);
        QTableWidgetItem *__qtablewidgetitem87 = new QTableWidgetItem();
        tableWidget_2->setItem(7, 0, __qtablewidgetitem87);
        tableWidget_2->setObjectName(QStringLiteral("tableWidget_2"));
        tableWidget_2->setGeometry(QRect(120, 150, 591, 261));
        tableWidget_2->horizontalHeader()->setDefaultSectionSize(60);
        layoutWidget = new QWidget(PerformanceManage);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(120, 80, 388, 56));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_3->addWidget(label_3);

        lineEdit_3 = new QLineEdit(layoutWidget);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));

        horizontalLayout_3->addWidget(lineEdit_3);


        horizontalLayout_6->addLayout(horizontalLayout_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        lineEdit = new QLineEdit(layoutWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout->addWidget(lineEdit);


        horizontalLayout_6->addLayout(horizontalLayout);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_2->addWidget(label_5);

        lineEdit_2 = new QLineEdit(layoutWidget);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        horizontalLayout_2->addWidget(lineEdit_2);


        horizontalLayout_7->addLayout(horizontalLayout_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_4->addWidget(label_4);

        lineEdit_4 = new QLineEdit(layoutWidget);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));

        horizontalLayout_4->addWidget(lineEdit_4);


        horizontalLayout_7->addLayout(horizontalLayout_4);


        verticalLayout->addLayout(horizontalLayout_7);

        label_9 = new QLabel(PerformanceManage);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(0, 490, 800, 15));
        label_9->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:0.67, y1:0.516727, x2:0, y2:0.545455, stop:0 rgba(0, 85, 0, 255), stop:1 rgba(255, 255, 255, 255));"));
        label_10 = new QLabel(PerformanceManage);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(0, 0, 800, 20));
        label_10->setStyleSheet(QString::fromUtf8("border-image: url(:/pic/\351\241\266\351\203\250-\345\210\207\350\247\222.png);\n"
"color: rgb(255, 255, 255);\n"
"border:none"));
        label_10->setAlignment(Qt::AlignCenter);
        pushButton_5 = new QPushButton(PerformanceManage);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(0, 0, 20, 20));
        pushButton_5->setStyleSheet(QString::fromUtf8("border-image: url(:/pic/\345\267\246\347\256\255\345\244\2642.png);\n"
"background-color:transparent"));

        retranslateUi(PerformanceManage);

        QMetaObject::connectSlotsByName(PerformanceManage);
    } // setupUi

    void retranslateUi(QWidget *PerformanceManage)
    {
        PerformanceManage->setWindowTitle(QApplication::translate("PerformanceManage", "Form", Q_NULLPTR));
        ExportDataBtn_PerforMngUI->setText(QApplication::translate("PerformanceManage", "\345\257\274\345\207\272\346\225\260\346\215\256", Q_NULLPTR));
        QueryBtn_PerforMngUI->setText(QApplication::translate("PerformanceManage", "\346\237\245\350\257\242", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = tableWidget_2->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("PerformanceManage", "\347\274\226\345\217\267", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget_2->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("PerformanceManage", "\345\247\223\345\220\215", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget_2->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("PerformanceManage", "\345\215\225\344\275\215", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget_2->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("PerformanceManage", "\344\272\272\345\221\230\347\273\204\345\210\253", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget_2->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("PerformanceManage", "\351\235\266\346\234\272\345\217\267", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget_2->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("PerformanceManage", "\351\235\266\345\236\213", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget_2->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QApplication::translate("PerformanceManage", "\347\247\221\347\233\256\347\261\273\345\236\213", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget_2->horizontalHeaderItem(7);
        ___qtablewidgetitem7->setText(QApplication::translate("PerformanceManage", "\350\257\206\345\210\253", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget_2->horizontalHeaderItem(8);
        ___qtablewidgetitem8->setText(QApplication::translate("PerformanceManage", "\346\210\220\347\273\251", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget_2->horizontalHeaderItem(9);
        ___qtablewidgetitem9->setText(QApplication::translate("PerformanceManage", "\350\257\204\345\256\232", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidget_2->horizontalHeaderItem(10);
        ___qtablewidgetitem10->setText(QApplication::translate("PerformanceManage", "\347\224\250\346\227\266", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem11 = tableWidget_2->horizontalHeaderItem(11);
        ___qtablewidgetitem11->setText(QApplication::translate("PerformanceManage", "\346\225\243\345\270\203\347\255\211\347\272\247", Q_NULLPTR));

        const bool __sortingEnabled = tableWidget_2->isSortingEnabled();
        tableWidget_2->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem12 = tableWidget_2->item(0, 0);
        ___qtablewidgetitem12->setText(QApplication::translate("PerformanceManage", "1", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem13 = tableWidget_2->item(0, 1);
        ___qtablewidgetitem13->setText(QApplication::translate("PerformanceManage", "\345\274\240\344\270\211", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem14 = tableWidget_2->item(0, 2);
        ___qtablewidgetitem14->setText(QApplication::translate("PerformanceManage", "\345\233\242\346\234\272\345\205\263", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem15 = tableWidget_2->item(0, 3);
        ___qtablewidgetitem15->setText(QApplication::translate("PerformanceManage", "A\347\273\204", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem16 = tableWidget_2->item(0, 4);
        ___qtablewidgetitem16->setText(QApplication::translate("PerformanceManage", "1", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem17 = tableWidget_2->item(0, 5);
        ___qtablewidgetitem17->setText(QApplication::translate("PerformanceManage", "\350\203\270\347\216\257\351\235\266", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem18 = tableWidget_2->item(0, 6);
        ___qtablewidgetitem18->setText(QApplication::translate("PerformanceManage", "\347\262\276\345\272\246\345\260\204\345\207\273", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem19 = tableWidget_2->item(0, 7);
        ___qtablewidgetitem19->setText(QApplication::translate("PerformanceManage", "5\345\217\221", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem20 = tableWidget_2->item(0, 8);
        ___qtablewidgetitem20->setText(QApplication::translate("PerformanceManage", "\345\221\275\344\270\2555\345\217\221\357\274\214\346\200\273\347\216\257\346\225\26044", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem21 = tableWidget_2->item(1, 0);
        ___qtablewidgetitem21->setText(QApplication::translate("PerformanceManage", "2", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem22 = tableWidget_2->item(1, 1);
        ___qtablewidgetitem22->setText(QApplication::translate("PerformanceManage", "\346\235\216\345\233\233", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem23 = tableWidget_2->item(1, 2);
        ___qtablewidgetitem23->setText(QApplication::translate("PerformanceManage", "\345\233\242\346\234\272\345\205\263", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem24 = tableWidget_2->item(1, 3);
        ___qtablewidgetitem24->setText(QApplication::translate("PerformanceManage", "A\347\273\204", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem25 = tableWidget_2->item(1, 4);
        ___qtablewidgetitem25->setText(QApplication::translate("PerformanceManage", "2", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem26 = tableWidget_2->item(1, 5);
        ___qtablewidgetitem26->setText(QApplication::translate("PerformanceManage", "\350\203\270\347\216\257\351\235\266", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem27 = tableWidget_2->item(1, 6);
        ___qtablewidgetitem27->setText(QApplication::translate("PerformanceManage", "\347\262\276\345\272\246\345\260\204\345\207\273", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem28 = tableWidget_2->item(1, 7);
        ___qtablewidgetitem28->setText(QApplication::translate("PerformanceManage", "5\345\217\221", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem29 = tableWidget_2->item(1, 8);
        ___qtablewidgetitem29->setText(QApplication::translate("PerformanceManage", "\345\221\275\344\270\2555\345\217\221\357\274\214\346\200\273\347\216\257\346\225\26043", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem30 = tableWidget_2->item(2, 0);
        ___qtablewidgetitem30->setText(QApplication::translate("PerformanceManage", "3", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem31 = tableWidget_2->item(2, 1);
        ___qtablewidgetitem31->setText(QApplication::translate("PerformanceManage", "\347\216\213\344\272\224", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem32 = tableWidget_2->item(2, 2);
        ___qtablewidgetitem32->setText(QApplication::translate("PerformanceManage", "\345\233\242\346\234\272\345\205\263", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem33 = tableWidget_2->item(2, 3);
        ___qtablewidgetitem33->setText(QApplication::translate("PerformanceManage", "A\347\273\204", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem34 = tableWidget_2->item(2, 4);
        ___qtablewidgetitem34->setText(QApplication::translate("PerformanceManage", "1", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem35 = tableWidget_2->item(2, 5);
        ___qtablewidgetitem35->setText(QApplication::translate("PerformanceManage", "\350\203\270\347\216\257\351\235\266", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem36 = tableWidget_2->item(2, 6);
        ___qtablewidgetitem36->setText(QApplication::translate("PerformanceManage", "\347\262\276\345\272\246\345\260\204\345\207\273", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem37 = tableWidget_2->item(2, 7);
        ___qtablewidgetitem37->setText(QApplication::translate("PerformanceManage", "5\345\217\221", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem38 = tableWidget_2->item(2, 8);
        ___qtablewidgetitem38->setText(QApplication::translate("PerformanceManage", "\345\221\275\344\270\2555\345\217\221\357\274\214\346\200\273\347\216\257\346\225\26044", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem39 = tableWidget_2->item(3, 0);
        ___qtablewidgetitem39->setText(QApplication::translate("PerformanceManage", "4", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem40 = tableWidget_2->item(3, 1);
        ___qtablewidgetitem40->setText(QApplication::translate("PerformanceManage", "\345\243\253\345\205\2651", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem41 = tableWidget_2->item(3, 2);
        ___qtablewidgetitem41->setText(QApplication::translate("PerformanceManage", "\345\233\242\346\234\272\345\205\263", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem42 = tableWidget_2->item(3, 3);
        ___qtablewidgetitem42->setText(QApplication::translate("PerformanceManage", "B\347\273\204", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem43 = tableWidget_2->item(3, 4);
        ___qtablewidgetitem43->setText(QApplication::translate("PerformanceManage", "1", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem44 = tableWidget_2->item(3, 5);
        ___qtablewidgetitem44->setText(QApplication::translate("PerformanceManage", "\350\203\270\347\216\257\351\235\266", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem45 = tableWidget_2->item(3, 6);
        ___qtablewidgetitem45->setText(QApplication::translate("PerformanceManage", "\347\262\276\345\272\246\345\260\204\345\207\273", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem46 = tableWidget_2->item(3, 7);
        ___qtablewidgetitem46->setText(QApplication::translate("PerformanceManage", "4\345\217\221", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem47 = tableWidget_2->item(3, 8);
        ___qtablewidgetitem47->setText(QApplication::translate("PerformanceManage", "\345\221\275\344\270\2554\345\217\221\357\274\214\346\200\273\347\216\257\346\225\26042", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem48 = tableWidget_2->item(4, 0);
        ___qtablewidgetitem48->setText(QApplication::translate("PerformanceManage", "5", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem49 = tableWidget_2->item(4, 1);
        ___qtablewidgetitem49->setText(QApplication::translate("PerformanceManage", "\345\243\253\345\205\2652", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem50 = tableWidget_2->item(4, 2);
        ___qtablewidgetitem50->setText(QApplication::translate("PerformanceManage", "\345\233\242\346\234\272\345\205\263", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem51 = tableWidget_2->item(4, 3);
        ___qtablewidgetitem51->setText(QApplication::translate("PerformanceManage", "B\347\273\204", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem52 = tableWidget_2->item(4, 4);
        ___qtablewidgetitem52->setText(QApplication::translate("PerformanceManage", "2", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem53 = tableWidget_2->item(4, 5);
        ___qtablewidgetitem53->setText(QApplication::translate("PerformanceManage", "\350\203\270\347\216\257\351\235\266", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem54 = tableWidget_2->item(4, 6);
        ___qtablewidgetitem54->setText(QApplication::translate("PerformanceManage", "\347\262\276\345\272\246\345\260\204\345\207\273", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem55 = tableWidget_2->item(4, 7);
        ___qtablewidgetitem55->setText(QApplication::translate("PerformanceManage", "4\345\217\221", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem56 = tableWidget_2->item(4, 8);
        ___qtablewidgetitem56->setText(QApplication::translate("PerformanceManage", "\345\221\275\344\270\2554\345\217\221\357\274\214\346\200\273\347\216\257\346\225\26040", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem57 = tableWidget_2->item(5, 0);
        ___qtablewidgetitem57->setText(QApplication::translate("PerformanceManage", "6", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem58 = tableWidget_2->item(5, 1);
        ___qtablewidgetitem58->setText(QApplication::translate("PerformanceManage", "\345\243\253\345\205\2653", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem59 = tableWidget_2->item(5, 2);
        ___qtablewidgetitem59->setText(QApplication::translate("PerformanceManage", "\345\233\242\346\234\272\345\205\263", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem60 = tableWidget_2->item(5, 3);
        ___qtablewidgetitem60->setText(QApplication::translate("PerformanceManage", "B\347\273\204", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem61 = tableWidget_2->item(5, 4);
        ___qtablewidgetitem61->setText(QApplication::translate("PerformanceManage", "1", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem62 = tableWidget_2->item(5, 5);
        ___qtablewidgetitem62->setText(QApplication::translate("PerformanceManage", "\350\203\270\347\216\257\351\235\266", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem63 = tableWidget_2->item(5, 6);
        ___qtablewidgetitem63->setText(QApplication::translate("PerformanceManage", "\347\262\276\345\272\246\345\260\204\345\207\273", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem64 = tableWidget_2->item(5, 7);
        ___qtablewidgetitem64->setText(QApplication::translate("PerformanceManage", "4\345\217\221", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem65 = tableWidget_2->item(5, 8);
        ___qtablewidgetitem65->setText(QApplication::translate("PerformanceManage", "\345\221\275\344\270\2554\345\217\221\357\274\214\346\200\273\347\216\257\346\225\26030", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem66 = tableWidget_2->item(6, 0);
        ___qtablewidgetitem66->setText(QApplication::translate("PerformanceManage", "7", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem67 = tableWidget_2->item(6, 1);
        ___qtablewidgetitem67->setText(QApplication::translate("PerformanceManage", "\345\243\253\345\205\2654", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem68 = tableWidget_2->item(6, 2);
        ___qtablewidgetitem68->setText(QApplication::translate("PerformanceManage", "\345\233\242\346\234\272\345\205\263", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem69 = tableWidget_2->item(6, 3);
        ___qtablewidgetitem69->setText(QApplication::translate("PerformanceManage", "B\347\273\204", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem70 = tableWidget_2->item(6, 4);
        ___qtablewidgetitem70->setText(QApplication::translate("PerformanceManage", "2", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem71 = tableWidget_2->item(6, 5);
        ___qtablewidgetitem71->setText(QApplication::translate("PerformanceManage", "\350\203\270\347\216\257\351\235\266", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem72 = tableWidget_2->item(6, 6);
        ___qtablewidgetitem72->setText(QApplication::translate("PerformanceManage", "\347\262\276\345\272\246\345\260\204\345\207\273", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem73 = tableWidget_2->item(6, 7);
        ___qtablewidgetitem73->setText(QApplication::translate("PerformanceManage", "5\345\217\221", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem74 = tableWidget_2->item(6, 8);
        ___qtablewidgetitem74->setText(QApplication::translate("PerformanceManage", "\345\221\275\344\270\2555\345\217\221\357\274\214\346\200\273\347\216\257\346\225\26044", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem75 = tableWidget_2->item(7, 0);
        ___qtablewidgetitem75->setText(QApplication::translate("PerformanceManage", "8", Q_NULLPTR));
        tableWidget_2->setSortingEnabled(__sortingEnabled);

        label_3->setText(QApplication::translate("PerformanceManage", "\347\274\226\345\217\267\357\274\232", Q_NULLPTR));
        label_2->setText(QApplication::translate("PerformanceManage", "\345\215\225\344\275\215\357\274\232", Q_NULLPTR));
        label_5->setText(QApplication::translate("PerformanceManage", "\345\247\223\345\220\215\357\274\232", Q_NULLPTR));
        label_4->setText(QApplication::translate("PerformanceManage", "\344\272\272\345\221\230\347\273\204\345\210\253\357\274\232", Q_NULLPTR));
        label_9->setText(QString());
        label_10->setText(QApplication::translate("PerformanceManage", "\346\210\220\347\273\251\347\256\241\347\220\206", Q_NULLPTR));
        pushButton_5->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class PerformanceManage: public Ui_PerformanceManage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PERFORMANCEMANAGE_H
