#include "TrainProcess.h"
#include "ui_TrainProcess.h"
#include "src/ui/LoginMainWindow.h"

TrainProcess::TrainProcess(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TrainProcess)
{
    ui->setupUi(this);
}

TrainProcess::~TrainProcess()
{
    delete ui;
}

void TrainProcess::on_pushButton_5_clicked()
{
    this->hide();
    pLogin->m_home.show();
}
