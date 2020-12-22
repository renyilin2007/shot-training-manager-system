#include "DevicesManage.h"
#include "ui_DevicesManage.h"

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
