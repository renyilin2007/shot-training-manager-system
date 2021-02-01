#include "Processing.h"
#include "ui_Processing.h"
#include "src/ui/LoginMainWindow.h"
#include "qmessagebox.h"
extern SimuTarget *g_pSimuTar;
extern SimuTarget *g_pSimuTar2;
extern SimuTarget *g_pSimuTar3;
extern SimuTarget *g_pSimuTar4;
extern SimuTarget *g_pSimuTar5;
extern SimuTarget *g_pSimuTar6;
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
    if(NULL == g_pSimuTar)
    {
        g_pSimuTar = new SimuTarget;
        Tar.connectSignal(g_pSimuTar);
    }
    g_pSimuTar->show();
}

void Processing::on_pushButton_6_clicked()
{
    Tar2.show();
    if(NULL == g_pSimuTar2)
    {
        g_pSimuTar2 = new SimuTarget;
        Tar2.connectSignal(g_pSimuTar2);
    }
    g_pSimuTar2->show();
}

void Processing::on_pushButton_7_clicked()
{
    Tar3.show();
    if(NULL == g_pSimuTar3)
    {
        g_pSimuTar3 = new SimuTarget;
        Tar3.connectSignal(g_pSimuTar3);
    }
    g_pSimuTar3->show();
}

void Processing::on_pushButton_8_clicked()
{
    Tar4.show();
    if(NULL == g_pSimuTar4)
    {
        g_pSimuTar4 = new SimuTarget;
        Tar4.connectSignal(g_pSimuTar4);
    }
    g_pSimuTar4->show();
}

void Processing::on_pushButton_9_clicked()
{
    Tar5.show();
    if(NULL == g_pSimuTar5)
    {
        g_pSimuTar5 = new SimuTarget;
        Tar5.connectSignal(g_pSimuTar5);
    }
    g_pSimuTar5->show();
}

void Processing::on_pushButton_10_clicked()
{
    Tar6.show();
    if(NULL == g_pSimuTar6)
    {
        g_pSimuTar6 = new SimuTarget;
        Tar6.connectSignal(g_pSimuTar6);
    }
    g_pSimuTar6->show();
}
