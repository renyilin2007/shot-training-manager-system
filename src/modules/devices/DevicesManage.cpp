#include "DevicesManage.h"
#include "ui_DevicesManage.h"
#include "src/modules/inc/modules.h"
#include "src/ui/LoginMainWindow.h"

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
