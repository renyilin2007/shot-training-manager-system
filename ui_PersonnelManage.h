/********************************************************************************
** Form generated from reading UI file 'PersonnelManage.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PERSONNELMANAGE_H
#define UI_PERSONNELMANAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PersonnelManage
{
public:
    QPushButton *ImportListBtn_PersonMngUI;
    QPushButton *AddPersonBtn_PersonMngUI;
    QPushButton *GroupMngBtn_PersonMngUI;
    QTableWidget *tableWidget;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *comboBox;
    QLabel *label_10;
    QLabel *label_9;
    QPushButton *pushButton_6;
    QPushButton *ExportListBtn_PersonMngUI;

    void setupUi(QWidget *PersonnelManage)
    {
        if (PersonnelManage->objectName().isEmpty())
            PersonnelManage->setObjectName(QStringLiteral("PersonnelManage"));
        PersonnelManage->resize(800, 500);
        PersonnelManage->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        ImportListBtn_PersonMngUI = new QPushButton(PersonnelManage);
        ImportListBtn_PersonMngUI->setObjectName(QStringLiteral("ImportListBtn_PersonMngUI"));
        ImportListBtn_PersonMngUI->setGeometry(QRect(450, 80, 81, 21));
        ImportListBtn_PersonMngUI->setStyleSheet(QLatin1String("background-color: rgb(0, 85, 0);\n"
"color: rgb(255, 255, 255);\n"
"border:none\n"
""));
        AddPersonBtn_PersonMngUI = new QPushButton(PersonnelManage);
        AddPersonBtn_PersonMngUI->setObjectName(QStringLiteral("AddPersonBtn_PersonMngUI"));
        AddPersonBtn_PersonMngUI->setGeometry(QRect(340, 80, 81, 21));
        AddPersonBtn_PersonMngUI->setStyleSheet(QLatin1String("background-color: rgb(0, 85, 0);\n"
"color: rgb(255, 255, 255);\n"
"border:none\n"
""));
        GroupMngBtn_PersonMngUI = new QPushButton(PersonnelManage);
        GroupMngBtn_PersonMngUI->setObjectName(QStringLiteral("GroupMngBtn_PersonMngUI"));
        GroupMngBtn_PersonMngUI->setGeometry(QRect(230, 80, 81, 21));
        GroupMngBtn_PersonMngUI->setStyleSheet(QLatin1String("background-color: rgb(0, 85, 0);\n"
"color: rgb(255, 255, 255);\n"
"border:none\n"
""));
        tableWidget = new QTableWidget(PersonnelManage);
        if (tableWidget->columnCount() < 8)
            tableWidget->setColumnCount(8);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
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
        if (tableWidget->rowCount() < 3)
            tableWidget->setRowCount(3);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(0, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(1, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(2, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableWidget->setItem(0, 0, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tableWidget->setItem(0, 1, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        tableWidget->setItem(0, 2, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        tableWidget->setItem(0, 3, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        tableWidget->setItem(0, 4, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        tableWidget->setItem(0, 5, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        tableWidget->setItem(0, 6, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        tableWidget->setItem(0, 7, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        tableWidget->setItem(1, 0, __qtablewidgetitem19);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        tableWidget->setItem(1, 1, __qtablewidgetitem20);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        tableWidget->setItem(1, 2, __qtablewidgetitem21);
        QTableWidgetItem *__qtablewidgetitem22 = new QTableWidgetItem();
        tableWidget->setItem(1, 3, __qtablewidgetitem22);
        QTableWidgetItem *__qtablewidgetitem23 = new QTableWidgetItem();
        tableWidget->setItem(1, 4, __qtablewidgetitem23);
        QTableWidgetItem *__qtablewidgetitem24 = new QTableWidgetItem();
        tableWidget->setItem(1, 5, __qtablewidgetitem24);
        QTableWidgetItem *__qtablewidgetitem25 = new QTableWidgetItem();
        tableWidget->setItem(1, 6, __qtablewidgetitem25);
        QTableWidgetItem *__qtablewidgetitem26 = new QTableWidgetItem();
        tableWidget->setItem(1, 7, __qtablewidgetitem26);
        QTableWidgetItem *__qtablewidgetitem27 = new QTableWidgetItem();
        tableWidget->setItem(2, 0, __qtablewidgetitem27);
        QTableWidgetItem *__qtablewidgetitem28 = new QTableWidgetItem();
        tableWidget->setItem(2, 1, __qtablewidgetitem28);
        QTableWidgetItem *__qtablewidgetitem29 = new QTableWidgetItem();
        tableWidget->setItem(2, 2, __qtablewidgetitem29);
        QTableWidgetItem *__qtablewidgetitem30 = new QTableWidgetItem();
        tableWidget->setItem(2, 3, __qtablewidgetitem30);
        QTableWidgetItem *__qtablewidgetitem31 = new QTableWidgetItem();
        tableWidget->setItem(2, 4, __qtablewidgetitem31);
        QTableWidgetItem *__qtablewidgetitem32 = new QTableWidgetItem();
        tableWidget->setItem(2, 5, __qtablewidgetitem32);
        QTableWidgetItem *__qtablewidgetitem33 = new QTableWidgetItem();
        tableWidget->setItem(2, 6, __qtablewidgetitem33);
        QTableWidgetItem *__qtablewidgetitem34 = new QTableWidgetItem();
        tableWidget->setItem(2, 7, __qtablewidgetitem34);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(90, 120, 641, 311));
        tableWidget->setContextMenuPolicy(Qt::CustomContextMenu);
        tableWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        tableWidget->horizontalHeader()->setCascadingSectionResizes(false);
        tableWidget->horizontalHeader()->setDefaultSectionSize(70);
        tableWidget->horizontalHeader()->setMinimumSectionSize(25);
        tableWidget->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        tableWidget->horizontalHeader()->setStretchLastSection(true);
        layoutWidget = new QWidget(PersonnelManage);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(90, 80, 101, 22));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        comboBox = new QComboBox(layoutWidget);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        horizontalLayout->addWidget(comboBox);

        label_10 = new QLabel(PersonnelManage);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(0, 0, 800, 20));
        label_10->setStyleSheet(QString::fromUtf8("border-image: url(:/pic/\351\241\266\351\203\250-\345\210\207\350\247\222.png);\n"
"color: rgb(255, 255, 255);\n"
"border:none"));
        label_10->setAlignment(Qt::AlignCenter);
        label_9 = new QLabel(PersonnelManage);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(0, 490, 800, 15));
        label_9->setStyleSheet(QStringLiteral("background-color: qlineargradient(spread:pad, x1:0.67, y1:0.516727, x2:0, y2:0.545455, stop:0 rgba(0, 85, 0, 255), stop:1 rgba(255, 255, 255, 255));"));
        pushButton_6 = new QPushButton(PersonnelManage);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(0, 0, 20, 20));
        pushButton_6->setStyleSheet(QString::fromUtf8("border-image: url(:/pic/\345\267\246\347\256\255\345\244\2642.png);\n"
"background-color:transparent"));
        ExportListBtn_PersonMngUI = new QPushButton(PersonnelManage);
        ExportListBtn_PersonMngUI->setObjectName(QStringLiteral("ExportListBtn_PersonMngUI"));
        ExportListBtn_PersonMngUI->setGeometry(QRect(550, 80, 81, 21));
        ExportListBtn_PersonMngUI->setStyleSheet(QLatin1String("background-color: rgb(0, 85, 0);\n"
"color: rgb(255, 255, 255);\n"
"border:none\n"
""));

        retranslateUi(PersonnelManage);

        QMetaObject::connectSlotsByName(PersonnelManage);
    } // setupUi

    void retranslateUi(QWidget *PersonnelManage)
    {
        PersonnelManage->setWindowTitle(QApplication::translate("PersonnelManage", "Form", Q_NULLPTR));
        ImportListBtn_PersonMngUI->setText(QApplication::translate("PersonnelManage", "\345\257\274\345\205\245\344\272\272\345\221\230\345\210\227\350\241\250", Q_NULLPTR));
        AddPersonBtn_PersonMngUI->setText(QApplication::translate("PersonnelManage", "\345\242\236\345\212\240\344\272\272\345\221\230", Q_NULLPTR));
        GroupMngBtn_PersonMngUI->setText(QApplication::translate("PersonnelManage", "\347\273\204\347\256\241\347\220\206", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("PersonnelManage", "\347\274\226\345\217\267", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("PersonnelManage", "\345\247\223\345\220\215", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("PersonnelManage", "\345\215\225\344\275\215", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("PersonnelManage", "\350\201\214\345\212\241", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("PersonnelManage", "\346\200\247\345\210\253", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("PersonnelManage", "\345\271\264\351\276\204", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QApplication::translate("PersonnelManage", "\345\207\272\347\224\237\345\271\264\346\234\210", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget->horizontalHeaderItem(7);
        ___qtablewidgetitem7->setText(QApplication::translate("PersonnelManage", "\346\211\200\345\261\236\347\273\204\345\210\253", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget->verticalHeaderItem(0);
        ___qtablewidgetitem8->setText(QApplication::translate("PersonnelManage", "1", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget->verticalHeaderItem(1);
        ___qtablewidgetitem9->setText(QApplication::translate("PersonnelManage", "2", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidget->verticalHeaderItem(2);
        ___qtablewidgetitem10->setText(QApplication::translate("PersonnelManage", "3", Q_NULLPTR));

        const bool __sortingEnabled = tableWidget->isSortingEnabled();
        tableWidget->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem11 = tableWidget->item(0, 0);
        ___qtablewidgetitem11->setText(QApplication::translate("PersonnelManage", "1", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem12 = tableWidget->item(0, 1);
        ___qtablewidgetitem12->setText(QApplication::translate("PersonnelManage", "\345\274\240\344\270\211", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem13 = tableWidget->item(0, 2);
        ___qtablewidgetitem13->setText(QApplication::translate("PersonnelManage", "\345\233\242\346\234\272\345\205\263", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem14 = tableWidget->item(0, 3);
        ___qtablewidgetitem14->setText(QApplication::translate("PersonnelManage", "\345\233\242\351\225\277", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem15 = tableWidget->item(0, 4);
        ___qtablewidgetitem15->setText(QApplication::translate("PersonnelManage", "\347\224\267", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem16 = tableWidget->item(0, 5);
        ___qtablewidgetitem16->setText(QApplication::translate("PersonnelManage", "23", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem17 = tableWidget->item(0, 6);
        ___qtablewidgetitem17->setText(QApplication::translate("PersonnelManage", "1997-01-01", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem18 = tableWidget->item(0, 7);
        ___qtablewidgetitem18->setText(QApplication::translate("PersonnelManage", "A\347\273\204", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem19 = tableWidget->item(1, 0);
        ___qtablewidgetitem19->setText(QApplication::translate("PersonnelManage", "2", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem20 = tableWidget->item(1, 1);
        ___qtablewidgetitem20->setText(QApplication::translate("PersonnelManage", "\346\235\216\345\233\233", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem21 = tableWidget->item(1, 2);
        ___qtablewidgetitem21->setText(QApplication::translate("PersonnelManage", "\345\233\242\346\234\272\345\205\263", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem22 = tableWidget->item(1, 3);
        ___qtablewidgetitem22->setText(QApplication::translate("PersonnelManage", "\346\224\277\345\247\224", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem23 = tableWidget->item(1, 4);
        ___qtablewidgetitem23->setText(QApplication::translate("PersonnelManage", "\347\224\267", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem24 = tableWidget->item(1, 5);
        ___qtablewidgetitem24->setText(QApplication::translate("PersonnelManage", "23", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem25 = tableWidget->item(1, 6);
        ___qtablewidgetitem25->setText(QApplication::translate("PersonnelManage", "1997-02-02", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem26 = tableWidget->item(1, 7);
        ___qtablewidgetitem26->setText(QApplication::translate("PersonnelManage", "A\347\273\204", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem27 = tableWidget->item(2, 0);
        ___qtablewidgetitem27->setText(QApplication::translate("PersonnelManage", "3", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem28 = tableWidget->item(2, 1);
        ___qtablewidgetitem28->setText(QApplication::translate("PersonnelManage", "\347\216\213\344\272\224", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem29 = tableWidget->item(2, 2);
        ___qtablewidgetitem29->setText(QApplication::translate("PersonnelManage", "\345\233\242\346\234\272\345\205\263", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem30 = tableWidget->item(2, 3);
        ___qtablewidgetitem30->setText(QApplication::translate("PersonnelManage", "\345\217\202\350\260\213\351\225\277", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem31 = tableWidget->item(2, 4);
        ___qtablewidgetitem31->setText(QApplication::translate("PersonnelManage", "\347\224\267", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem32 = tableWidget->item(2, 5);
        ___qtablewidgetitem32->setText(QApplication::translate("PersonnelManage", "23", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem33 = tableWidget->item(2, 6);
        ___qtablewidgetitem33->setText(QApplication::translate("PersonnelManage", "1997-03-03", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem34 = tableWidget->item(2, 7);
        ___qtablewidgetitem34->setText(QApplication::translate("PersonnelManage", "B\347\273\204", Q_NULLPTR));
        tableWidget->setSortingEnabled(__sortingEnabled);

        label->setText(QApplication::translate("PersonnelManage", "\347\273\204\345\210\253\357\274\232", Q_NULLPTR));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("PersonnelManage", "A\347\273\204", Q_NULLPTR)
         << QApplication::translate("PersonnelManage", "B\347\273\204", Q_NULLPTR)
         << QApplication::translate("PersonnelManage", "C\347\273\204", Q_NULLPTR)
        );
        label_10->setText(QApplication::translate("PersonnelManage", "\344\272\272\345\221\230\347\256\241\347\220\206", Q_NULLPTR));
        label_9->setText(QString());
        pushButton_6->setText(QString());
        ExportListBtn_PersonMngUI->setText(QApplication::translate("PersonnelManage", "\345\257\274\345\207\272\344\272\272\345\221\230\345\210\227\350\241\250", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class PersonnelManage: public Ui_PersonnelManage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PERSONNELMANAGE_H
