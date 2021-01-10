#include "SetTargetParam.h"
#include "ui_SetTargetParam.h"
#include "qmessagebox.h"

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

void SetTargetParam::on_SetToTarBtn_SetTarParamUI_clicked()
{
    QMessageBox::information(this, tr("提示"),tr("下发成功！"),QMessageBox::Yes);
}
