#include "Target.h"
#include "ui_Target.h"

Target::Target(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Target)
{
    ui->setupUi(this);
}

Target::~Target()
{
    delete ui;
}
