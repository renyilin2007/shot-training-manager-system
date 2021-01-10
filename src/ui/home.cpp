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

void home::on_DistrSchemeBtn_HomeUI_clicked()
{
    this->hide();
    m_DistruSche.show();
}

void home::on_PersMngBtn_HomeUI_clicked()
{
    this->hide();
    m_PersonMng.show();
}

void home::on_TrainProcBtn_HomeUI_clicked()
{
    this->hide();
    //暂时不用方案选择界面
    //m_TrainProc.show();
    m_Processing.show();
}

void home::on_PerfMngBtn_HomeUI_clicked()
{
    this->hide();
    m_PerforMng.show();
}
