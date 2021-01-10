#include "DevicesManage.h"
#include "ui_DevicesManage.h"
#include "src/modules/inc/modules.h"
#include "src/ui/LoginMainWindow.h"
#include "qmessagebox.h"


DevicesManage::DevicesManage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::DevicesManage)
{
    ui->setupUi(this);
}

DevicesManage::~DevicesManage()
{
    delete ui;
}

void DevicesManage::on_BackBtn_DevMngUI_clicked()
{
    this->hide();
    pLogin->m_home.show();
}

void DevicesManage::on_SetTarBtn_DevMngUI_clicked()
{
    SetTarParam.show();
}

void DevicesManage::on_DisplayTarBtn_DevMngUI_clicked()
{
    QMessageBox::information(this, tr("提示"),tr("下发成功！"),QMessageBox::Yes);
}

void DevicesManage::on_HideTarBtn_DevMngUI_clicked()
{
    QMessageBox::information(this, tr("提示"),tr("下发成功！"),QMessageBox::Yes);
}

void DevicesManage::on_PauseTarBtn_DevMngUI_clicked()
{
    QMessageBox::information(this, tr("提示"),tr("下发成功！"),QMessageBox::Yes);
}

void DevicesManage::on_StartTarBtn_DevMngUI_clicked()
{
    QMessageBox::information(this, tr("提示"),tr("下发成功！"),QMessageBox::Yes);
}

void DevicesManage::on_SearchTarBtn_DevMngUI_clicked()
{
    QMessageBox::information(this, tr("提示"),tr("查询完毕！在下面框中点击对应靶机可查看、设置"),QMessageBox::Yes);
}

void DevicesManage::on_GetTarPlaceEnvBtn_DevMngUI_clicked()
{
    QMessageBox::information(this, tr("提示"),tr("靶场温度：27°C  海拔：2000m"),QMessageBox::Yes);
}

void DevicesManage::on_pushButton_clicked()
{
    Tar.show();
}

void DevicesManage::on_pushButton_4_clicked()
{
    Tar.show();
}

void DevicesManage::on_pushButton_5_clicked()
{
    Tar.show();
}

void DevicesManage::on_pushButton_7_clicked()
{
    Tar.show();
}
