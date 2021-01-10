/********************************************************************************
** Form generated from reading UI file 'SchemeItem.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCHEMEITEM_H
#define UI_SCHEMEITEM_H

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

class Ui_SchemeItem
{
public:
    QTableWidget *tableWidget;
    QPushButton *QueryBtn_ScheItemUI;
    QLabel *label_9;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label;
    QLabel *label_6;
    QWidget *layoutWidget1;
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

    void setupUi(QWidget *SchemeItem)
    {
        if (SchemeItem->objectName().isEmpty())
            SchemeItem->setObjectName(QStringLiteral("SchemeItem"));
        SchemeItem->resize(700, 400);
        SchemeItem->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        tableWidget = new QTableWidget(SchemeItem);
        if (tableWidget->columnCount() < 10)
            tableWidget->setColumnCount(10);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setTextAlignment(Qt::AlignCenter);
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(7, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(8, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(9, __qtablewidgetitem9);
        if (tableWidget->rowCount() < 11)
            tableWidget->setRowCount(11);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(0, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(1, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(2, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(3, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(4, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(5, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(6, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(7, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(8, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(9, __qtablewidgetitem19);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(10, __qtablewidgetitem20);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        __qtablewidgetitem21->setTextAlignment(Qt::AlignCenter);
        tableWidget->setItem(0, 0, __qtablewidgetitem21);
        QTableWidgetItem *__qtablewidgetitem22 = new QTableWidgetItem();
        tableWidget->setItem(0, 1, __qtablewidgetitem22);
        QTableWidgetItem *__qtablewidgetitem23 = new QTableWidgetItem();
        tableWidget->setItem(0, 2, __qtablewidgetitem23);
        QTableWidgetItem *__qtablewidgetitem24 = new QTableWidgetItem();
        tableWidget->setItem(0, 3, __qtablewidgetitem24);
        QTableWidgetItem *__qtablewidgetitem25 = new QTableWidgetItem();
        tableWidget->setItem(0, 4, __qtablewidgetitem25);
        QTableWidgetItem *__qtablewidgetitem26 = new QTableWidgetItem();
        tableWidget->setItem(0, 5, __qtablewidgetitem26);
        QTableWidgetItem *__qtablewidgetitem27 = new QTableWidgetItem();
        tableWidget->setItem(1, 0, __qtablewidgetitem27);
        QTableWidgetItem *__qtablewidgetitem28 = new QTableWidgetItem();
        tableWidget->setItem(1, 1, __qtablewidgetitem28);
        QTableWidgetItem *__qtablewidgetitem29 = new QTableWidgetItem();
        tableWidget->setItem(1, 2, __qtablewidgetitem29);
        QTableWidgetItem *__qtablewidgetitem30 = new QTableWidgetItem();
        tableWidget->setItem(1, 3, __qtablewidgetitem30);
        QTableWidgetItem *__qtablewidgetitem31 = new QTableWidgetItem();
        tableWidget->setItem(1, 4, __qtablewidgetitem31);
        QTableWidgetItem *__qtablewidgetitem32 = new QTableWidgetItem();
        tableWidget->setItem(1, 5, __qtablewidgetitem32);
        QTableWidgetItem *__qtablewidgetitem33 = new QTableWidgetItem();
        tableWidget->setItem(2, 0, __qtablewidgetitem33);
        QTableWidgetItem *__qtablewidgetitem34 = new QTableWidgetItem();
        tableWidget->setItem(2, 1, __qtablewidgetitem34);
        QTableWidgetItem *__qtablewidgetitem35 = new QTableWidgetItem();
        tableWidget->setItem(2, 2, __qtablewidgetitem35);
        QTableWidgetItem *__qtablewidgetitem36 = new QTableWidgetItem();
        tableWidget->setItem(2, 3, __qtablewidgetitem36);
        QTableWidgetItem *__qtablewidgetitem37 = new QTableWidgetItem();
        tableWidget->setItem(2, 4, __qtablewidgetitem37);
        QTableWidgetItem *__qtablewidgetitem38 = new QTableWidgetItem();
        tableWidget->setItem(2, 5, __qtablewidgetitem38);
        QTableWidgetItem *__qtablewidgetitem39 = new QTableWidgetItem();
        tableWidget->setItem(3, 0, __qtablewidgetitem39);
        QTableWidgetItem *__qtablewidgetitem40 = new QTableWidgetItem();
        tableWidget->setItem(3, 1, __qtablewidgetitem40);
        QTableWidgetItem *__qtablewidgetitem41 = new QTableWidgetItem();
        tableWidget->setItem(3, 2, __qtablewidgetitem41);
        QTableWidgetItem *__qtablewidgetitem42 = new QTableWidgetItem();
        tableWidget->setItem(3, 3, __qtablewidgetitem42);
        QTableWidgetItem *__qtablewidgetitem43 = new QTableWidgetItem();
        tableWidget->setItem(3, 4, __qtablewidgetitem43);
        QTableWidgetItem *__qtablewidgetitem44 = new QTableWidgetItem();
        tableWidget->setItem(3, 5, __qtablewidgetitem44);
        QTableWidgetItem *__qtablewidgetitem45 = new QTableWidgetItem();
        tableWidget->setItem(4, 0, __qtablewidgetitem45);
        QTableWidgetItem *__qtablewidgetitem46 = new QTableWidgetItem();
        tableWidget->setItem(4, 1, __qtablewidgetitem46);
        QTableWidgetItem *__qtablewidgetitem47 = new QTableWidgetItem();
        tableWidget->setItem(4, 2, __qtablewidgetitem47);
        QTableWidgetItem *__qtablewidgetitem48 = new QTableWidgetItem();
        tableWidget->setItem(4, 3, __qtablewidgetitem48);
        QTableWidgetItem *__qtablewidgetitem49 = new QTableWidgetItem();
        tableWidget->setItem(4, 4, __qtablewidgetitem49);
        QTableWidgetItem *__qtablewidgetitem50 = new QTableWidgetItem();
        tableWidget->setItem(4, 5, __qtablewidgetitem50);
        QTableWidgetItem *__qtablewidgetitem51 = new QTableWidgetItem();
        tableWidget->setItem(5, 0, __qtablewidgetitem51);
        QTableWidgetItem *__qtablewidgetitem52 = new QTableWidgetItem();
        tableWidget->setItem(5, 1, __qtablewidgetitem52);
        QTableWidgetItem *__qtablewidgetitem53 = new QTableWidgetItem();
        tableWidget->setItem(5, 2, __qtablewidgetitem53);
        QTableWidgetItem *__qtablewidgetitem54 = new QTableWidgetItem();
        tableWidget->setItem(5, 3, __qtablewidgetitem54);
        QTableWidgetItem *__qtablewidgetitem55 = new QTableWidgetItem();
        tableWidget->setItem(5, 4, __qtablewidgetitem55);
        QTableWidgetItem *__qtablewidgetitem56 = new QTableWidgetItem();
        tableWidget->setItem(5, 5, __qtablewidgetitem56);
        QTableWidgetItem *__qtablewidgetitem57 = new QTableWidgetItem();
        tableWidget->setItem(6, 0, __qtablewidgetitem57);
        QTableWidgetItem *__qtablewidgetitem58 = new QTableWidgetItem();
        tableWidget->setItem(6, 1, __qtablewidgetitem58);
        QTableWidgetItem *__qtablewidgetitem59 = new QTableWidgetItem();
        tableWidget->setItem(6, 2, __qtablewidgetitem59);
        QTableWidgetItem *__qtablewidgetitem60 = new QTableWidgetItem();
        tableWidget->setItem(6, 3, __qtablewidgetitem60);
        QTableWidgetItem *__qtablewidgetitem61 = new QTableWidgetItem();
        tableWidget->setItem(6, 4, __qtablewidgetitem61);
        QTableWidgetItem *__qtablewidgetitem62 = new QTableWidgetItem();
        tableWidget->setItem(6, 5, __qtablewidgetitem62);
        QTableWidgetItem *__qtablewidgetitem63 = new QTableWidgetItem();
        tableWidget->setItem(7, 0, __qtablewidgetitem63);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(40, 200, 591, 141));
        QFont font;
        font.setBold(false);
        font.setUnderline(false);
        font.setWeight(50);
        font.setKerning(true);
        tableWidget->setFont(font);
        tableWidget->setSelectionBehavior(QAbstractItemView::SelectItems);
        QueryBtn_ScheItemUI = new QPushButton(SchemeItem);
        QueryBtn_ScheItemUI->setObjectName(QStringLiteral("QueryBtn_ScheItemUI"));
        QueryBtn_ScheItemUI->setGeometry(QRect(520, 160, 75, 23));
        QueryBtn_ScheItemUI->setStyleSheet(QLatin1String("background-color: rgb(0, 85, 0);\n"
"color: rgb(255, 255, 255);\n"
"border:none\n"
""));
        label_9 = new QLabel(SchemeItem);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(320, 30, 54, 12));
        layoutWidget = new QWidget(SchemeItem);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(290, 60, 92, 14));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_5->addWidget(label);

        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_5->addWidget(label_6);

        layoutWidget1 = new QWidget(SchemeItem);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(40, 130, 388, 56));
        verticalLayout = new QVBoxLayout(layoutWidget1);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_3 = new QLabel(layoutWidget1);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_3->addWidget(label_3);

        lineEdit_3 = new QLineEdit(layoutWidget1);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));

        horizontalLayout_3->addWidget(lineEdit_3);


        horizontalLayout_6->addLayout(horizontalLayout_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        lineEdit = new QLineEdit(layoutWidget1);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout->addWidget(lineEdit);


        horizontalLayout_6->addLayout(horizontalLayout);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_5 = new QLabel(layoutWidget1);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_2->addWidget(label_5);

        lineEdit_2 = new QLineEdit(layoutWidget1);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        horizontalLayout_2->addWidget(lineEdit_2);


        horizontalLayout_7->addLayout(horizontalLayout_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_4 = new QLabel(layoutWidget1);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_4->addWidget(label_4);

        lineEdit_4 = new QLineEdit(layoutWidget1);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));

        horizontalLayout_4->addWidget(lineEdit_4);


        horizontalLayout_7->addLayout(horizontalLayout_4);


        verticalLayout->addLayout(horizontalLayout_7);

        layoutWidget->raise();
        tableWidget->raise();
        QueryBtn_ScheItemUI->raise();
        layoutWidget->raise();
        label_9->raise();

        retranslateUi(SchemeItem);

        QMetaObject::connectSlotsByName(SchemeItem);
    } // setupUi

    void retranslateUi(QWidget *SchemeItem)
    {
        SchemeItem->setWindowTitle(QApplication::translate("SchemeItem", "Form", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("SchemeItem", "\347\274\226\345\217\267", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("SchemeItem", "\345\247\223\345\220\215", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("SchemeItem", "\345\215\225\344\275\215", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("SchemeItem", "\346\234\254\347\247\221\347\233\256\346\211\271\346\254\241", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("SchemeItem", "\344\272\272\345\221\230\347\273\204\345\210\253", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("SchemeItem", "\351\235\266\346\234\272\345\217\267", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QApplication::translate("SchemeItem", "\351\235\266\345\236\213", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget->horizontalHeaderItem(7);
        ___qtablewidgetitem7->setText(QApplication::translate("SchemeItem", "\346\236\252\346\242\260\347\261\273\345\236\213", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget->horizontalHeaderItem(8);
        ___qtablewidgetitem8->setText(QApplication::translate("SchemeItem", "\345\260\204\345\207\273\350\267\235\347\246\273", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget->horizontalHeaderItem(9);
        ___qtablewidgetitem9->setText(QApplication::translate("SchemeItem", "\350\257\204\345\256\232\346\240\207\345\207\206", Q_NULLPTR));

        const bool __sortingEnabled = tableWidget->isSortingEnabled();
        tableWidget->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem10 = tableWidget->item(0, 0);
        ___qtablewidgetitem10->setText(QApplication::translate("SchemeItem", "1", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem11 = tableWidget->item(0, 1);
        ___qtablewidgetitem11->setText(QApplication::translate("SchemeItem", "\345\274\240\344\270\211", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem12 = tableWidget->item(0, 2);
        ___qtablewidgetitem12->setText(QApplication::translate("SchemeItem", "\345\233\242\346\234\272\345\205\263", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem13 = tableWidget->item(0, 3);
        ___qtablewidgetitem13->setText(QApplication::translate("SchemeItem", "\347\254\254\344\270\200\346\211\271", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem14 = tableWidget->item(0, 4);
        ___qtablewidgetitem14->setText(QApplication::translate("SchemeItem", "A\347\273\204", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem15 = tableWidget->item(0, 5);
        ___qtablewidgetitem15->setText(QApplication::translate("SchemeItem", "1", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem16 = tableWidget->item(1, 0);
        ___qtablewidgetitem16->setText(QApplication::translate("SchemeItem", "2", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem17 = tableWidget->item(1, 1);
        ___qtablewidgetitem17->setText(QApplication::translate("SchemeItem", "\346\235\216\345\233\233", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem18 = tableWidget->item(1, 2);
        ___qtablewidgetitem18->setText(QApplication::translate("SchemeItem", "\345\233\242\346\234\272\345\205\263", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem19 = tableWidget->item(1, 3);
        ___qtablewidgetitem19->setText(QApplication::translate("SchemeItem", "\347\254\254\344\270\200\346\211\271", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem20 = tableWidget->item(1, 4);
        ___qtablewidgetitem20->setText(QApplication::translate("SchemeItem", "A\347\273\204", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem21 = tableWidget->item(1, 5);
        ___qtablewidgetitem21->setText(QApplication::translate("SchemeItem", "2", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem22 = tableWidget->item(2, 0);
        ___qtablewidgetitem22->setText(QApplication::translate("SchemeItem", "3", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem23 = tableWidget->item(2, 1);
        ___qtablewidgetitem23->setText(QApplication::translate("SchemeItem", "\347\216\213\344\272\224", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem24 = tableWidget->item(2, 2);
        ___qtablewidgetitem24->setText(QApplication::translate("SchemeItem", "\345\233\242\346\234\272\345\205\263", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem25 = tableWidget->item(2, 3);
        ___qtablewidgetitem25->setText(QApplication::translate("SchemeItem", "\347\254\254\344\272\214\346\211\271", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem26 = tableWidget->item(2, 4);
        ___qtablewidgetitem26->setText(QApplication::translate("SchemeItem", "A\347\273\204", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem27 = tableWidget->item(2, 5);
        ___qtablewidgetitem27->setText(QApplication::translate("SchemeItem", "1", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem28 = tableWidget->item(3, 0);
        ___qtablewidgetitem28->setText(QApplication::translate("SchemeItem", "4", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem29 = tableWidget->item(3, 1);
        ___qtablewidgetitem29->setText(QApplication::translate("SchemeItem", "\345\243\253\345\205\2651", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem30 = tableWidget->item(3, 2);
        ___qtablewidgetitem30->setText(QApplication::translate("SchemeItem", "\345\233\242\346\234\272\345\205\263", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem31 = tableWidget->item(3, 3);
        ___qtablewidgetitem31->setText(QApplication::translate("SchemeItem", "\347\254\254\344\270\211\346\211\271", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem32 = tableWidget->item(3, 4);
        ___qtablewidgetitem32->setText(QApplication::translate("SchemeItem", "B\347\273\204", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem33 = tableWidget->item(3, 5);
        ___qtablewidgetitem33->setText(QApplication::translate("SchemeItem", "1", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem34 = tableWidget->item(4, 0);
        ___qtablewidgetitem34->setText(QApplication::translate("SchemeItem", "5", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem35 = tableWidget->item(4, 1);
        ___qtablewidgetitem35->setText(QApplication::translate("SchemeItem", "\345\243\253\345\205\2652", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem36 = tableWidget->item(4, 2);
        ___qtablewidgetitem36->setText(QApplication::translate("SchemeItem", "\345\233\242\346\234\272\345\205\263", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem37 = tableWidget->item(4, 3);
        ___qtablewidgetitem37->setText(QApplication::translate("SchemeItem", "\347\254\254\344\270\211\346\211\271", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem38 = tableWidget->item(4, 4);
        ___qtablewidgetitem38->setText(QApplication::translate("SchemeItem", "B\347\273\204", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem39 = tableWidget->item(4, 5);
        ___qtablewidgetitem39->setText(QApplication::translate("SchemeItem", "2", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem40 = tableWidget->item(5, 0);
        ___qtablewidgetitem40->setText(QApplication::translate("SchemeItem", "6", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem41 = tableWidget->item(5, 1);
        ___qtablewidgetitem41->setText(QApplication::translate("SchemeItem", "\345\243\253\345\205\2653", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem42 = tableWidget->item(5, 2);
        ___qtablewidgetitem42->setText(QApplication::translate("SchemeItem", "\345\233\242\346\234\272\345\205\263", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem43 = tableWidget->item(5, 3);
        ___qtablewidgetitem43->setText(QApplication::translate("SchemeItem", "\347\254\254\345\233\233\346\211\271", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem44 = tableWidget->item(5, 4);
        ___qtablewidgetitem44->setText(QApplication::translate("SchemeItem", "B\347\273\204", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem45 = tableWidget->item(5, 5);
        ___qtablewidgetitem45->setText(QApplication::translate("SchemeItem", "1", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem46 = tableWidget->item(6, 0);
        ___qtablewidgetitem46->setText(QApplication::translate("SchemeItem", "7", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem47 = tableWidget->item(6, 1);
        ___qtablewidgetitem47->setText(QApplication::translate("SchemeItem", "\345\243\253\345\205\2654", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem48 = tableWidget->item(6, 2);
        ___qtablewidgetitem48->setText(QApplication::translate("SchemeItem", "\345\233\242\346\234\272\345\205\263", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem49 = tableWidget->item(6, 3);
        ___qtablewidgetitem49->setText(QApplication::translate("SchemeItem", "\347\254\254\345\233\233\346\211\271", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem50 = tableWidget->item(6, 4);
        ___qtablewidgetitem50->setText(QApplication::translate("SchemeItem", "B\347\273\204", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem51 = tableWidget->item(6, 5);
        ___qtablewidgetitem51->setText(QApplication::translate("SchemeItem", "2", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem52 = tableWidget->item(7, 0);
        ___qtablewidgetitem52->setText(QApplication::translate("SchemeItem", "8", Q_NULLPTR));
        tableWidget->setSortingEnabled(__sortingEnabled);

        QueryBtn_ScheItemUI->setText(QApplication::translate("SchemeItem", "\346\237\245\350\257\242", Q_NULLPTR));
        label_9->setText(QApplication::translate("SchemeItem", "\346\226\271\346\241\2101", Q_NULLPTR));
        label->setText(QApplication::translate("SchemeItem", "\347\247\221\347\233\256\357\274\232", Q_NULLPTR));
        label_6->setText(QApplication::translate("SchemeItem", "\347\262\276\345\272\246\345\260\204\345\207\273", Q_NULLPTR));
        label_3->setText(QApplication::translate("SchemeItem", "\347\274\226\345\217\267\357\274\232", Q_NULLPTR));
        label_2->setText(QApplication::translate("SchemeItem", "\345\215\225\344\275\215\357\274\232", Q_NULLPTR));
        label_5->setText(QApplication::translate("SchemeItem", "\345\247\223\345\220\215\357\274\232", Q_NULLPTR));
        label_4->setText(QApplication::translate("SchemeItem", "\344\272\272\345\221\230\347\273\204\345\210\253\357\274\232", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SchemeItem: public Ui_SchemeItem {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCHEMEITEM_H
