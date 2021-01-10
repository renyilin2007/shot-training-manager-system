#include "Processing.h"
#include "ui_Processing.h"
#include "src/ui/LoginMainWindow.h"
#include "qmessagebox.h"

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

void Processing::on_pushButton_5_clicked()
{
    QMessageBox msgBox;
    msgBox.setText("警告！");
    msgBox.setInformativeText("确定要结束训练吗？");
    msgBox.setStandardButtons(QMessageBox::Ok | QMessageBox::Cancel);
    msgBox.setDefaultButton(QMessageBox::Ok);
    int ret = msgBox.exec();
    if(ret == QMessageBox::Ok)
    {
        this->hide();
        pLogin->m_home.show();

    }
}

void Processing::on_EndTrainBtn_ProcUI_clicked()
{
    QMessageBox msgBox;
    msgBox.setText("警告！");
    msgBox.setInformativeText("确定要结束训练吗？");
    msgBox.setStandardButtons(QMessageBox::Ok | QMessageBox::Cancel);
    msgBox.setDefaultButton(QMessageBox::Ok);
    int ret = msgBox.exec();
    if(ret == QMessageBox::Ok)
    {
        this->hide();
        pLogin->m_home.show();

    }

}

void Processing::on_pushButton_clicked()
{
    Tar.show();
}

void Processing::on_pushButton_6_clicked()
{
    Tar.show();
}

void Processing::on_pushButton_7_clicked()
{
    Tar.show();
}

void Processing::on_pushButton_8_clicked()
{
    Tar.show();
}

void Processing::on_pushButton_9_clicked()
{
    Tar.show();
}

void Processing::on_pushButton_10_clicked()
{
    Tar.show();
}
