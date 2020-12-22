#include "DistributionScheme.h"
#include "ui_DistributionScheme.h"

DistributionScheme::DistributionScheme(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::DistributionScheme)
{
    ui->setupUi(this);
}

DistributionScheme::~DistributionScheme()
{
    delete ui;
}
