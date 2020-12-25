#include "SchemeItem.h"
#include "ui_SchemeItem.h"

SchemeItem::SchemeItem(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SchemeItem)
{
    ui->setupUi(this);
}

SchemeItem::~SchemeItem()
{
    delete ui;
}
