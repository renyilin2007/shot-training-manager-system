/********************************************************************************
** Form generated from reading UI file 'Target.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TARGET_H
#define UI_TARGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Target
{
public:
    QPushButton *TargetBtn_TargetUI;

    void setupUi(QWidget *Target)
    {
        if (Target->objectName().isEmpty())
            Target->setObjectName(QStringLiteral("Target"));
        Target->resize(400, 300);
        Target->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        TargetBtn_TargetUI = new QPushButton(Target);
        TargetBtn_TargetUI->setObjectName(QStringLiteral("TargetBtn_TargetUI"));
        TargetBtn_TargetUI->setGeometry(QRect(90, 60, 211, 181));
        TargetBtn_TargetUI->setStyleSheet(QString::fromUtf8("border-image: url(:/pic/targets/101-50\350\203\270\347\216\257\351\235\266.bmp);"));

        retranslateUi(Target);

        QMetaObject::connectSlotsByName(Target);
    } // setupUi

    void retranslateUi(QWidget *Target)
    {
        Target->setWindowTitle(QApplication::translate("Target", "Form", Q_NULLPTR));
        TargetBtn_TargetUI->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Target: public Ui_Target {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TARGET_H
