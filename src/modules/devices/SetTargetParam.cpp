#include "SetTargetParam.h"
#include "ui_SetTargetParam.h"

SetTargetParam::SetTargetParam(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SetTargetParam)
{
    ui->setupUi(this);
}

SetTargetParam::~SetTargetParam()
{
    delete ui;
}
