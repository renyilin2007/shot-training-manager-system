#include "PersonnelManage.h"
#include "ui_PersonnelManage.h"
#include "src/ui/LoginMainWindow.h"
#include "qmessagebox.h"
#include <QFileDialog>

PersonnelManage::PersonnelManage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PersonnelManage)
{
    ui->setupUi(this);
}

PersonnelManage::~PersonnelManage()
{
    delete ui;
}

void PersonnelManage::on_pushButton_6_clicked()
{
    this->hide();
    pLogin->m_home.show();
}

void PersonnelManage::on_GroupMngBtn_PersonMngUI_clicked()
{
    QMessageBox::information(this, tr("提示"),tr("待实现"),QMessageBox::Yes);
}

void PersonnelManage::on_AddPersonBtn_PersonMngUI_clicked()
{
    QMessageBox::information(this, tr("提示"),tr("待实现"),QMessageBox::Yes);
}

void PersonnelManage::on_ImportListBtn_PersonMngUI_clicked()
{
    QString curPath;
    QString curFileName = QFileDialog::getOpenFileName(this, tr("打开文件"), curPath,
                                             tr("文件(*)"));
}

void PersonnelManage::on_ExportListBtn_PersonMngUI_clicked()
{
    QString curPath;
    QString curFileName = QFileDialog::getSaveFileName(this, tr("保存文件"), curPath,
                                             tr("文件(*)"));
}
