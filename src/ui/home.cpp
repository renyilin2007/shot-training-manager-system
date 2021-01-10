#include "home.h"
#include "ui_home.h"

home::home(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::home)
{
    ui->setupUi(this);
}

home::~home()
{
    delete ui;
}

void home::on_DevMngBtn_HomeUI_clicked()
{
    this->hide();
    m_DevMng.show();
}
