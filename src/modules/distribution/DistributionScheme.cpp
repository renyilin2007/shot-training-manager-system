#include "DistributionScheme.h"
#include "ui_DistributionScheme.h"
#include "qmessagebox.h"
#include "src/ui/LoginMainWindow.h"

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

void DistributionScheme::on_GenScheBtn_DistruScheUI_clicked()
{
    QMessageBox::information(this, tr("提示"),tr("生成方案成功！"),QMessageBox::Yes);
}

void DistributionScheme::on_CheckScheBtn_DistruScheUI_clicked()
{
    ScheItem.show();
}

void DistributionScheme::on_SelectTarBtn_DistruScheUI_clicked()
{
    QMessageBox::information(this, tr("提示"),tr("暂未实现，待讨论后实现！"),QMessageBox::Yes);
}

void DistributionScheme::on_pushButton_5_clicked()
{
    this->hide();
    pLogin->m_home.show();
}
