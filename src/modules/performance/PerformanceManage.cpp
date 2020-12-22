#include "PerformanceManage.h"
#include "ui_PerformanceManage.h"

PerformanceManage::PerformanceManage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PerformanceManage)
{
    ui->setupUi(this);
}

PerformanceManage::~PerformanceManage()
{
    delete ui;
}
