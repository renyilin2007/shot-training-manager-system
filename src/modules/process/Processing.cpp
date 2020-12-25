#include "Processing.h"
#include "ui_Processing.h"

Processing::Processing(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Processing)
{
    ui->setupUi(this);
}

Processing::~Processing()
{
    delete ui;
}
