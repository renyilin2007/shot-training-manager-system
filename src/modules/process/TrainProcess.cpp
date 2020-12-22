#include "TrainProcess.h"
#include "ui_TrainProcess.h"

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
