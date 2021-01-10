#include "PerformanceManage.h"
#include "ui_PerformanceManage.h"
#include "qmessagebox.h"
#include "src/ui/LoginMainWindow.h"
#include "QFileDialog.h"

PerformanceManage::PerformanceManage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PerformanceManage)
{
    ui->setupUi(this);
}

PerformanceManage::~PerformanceManage()
{
    delete ui;
}

void PerformanceManage::on_QueryBtn_PerforMngUI_clicked()
{
    QMessageBox::information(this, tr("提示"),tr("待实现"),QMessageBox::Yes);
}

void PerformanceManage::on_ExportDataBtn_PerforMngUI_clicked()
{
    QString curPath;
    QString curFileName = QFileDialog::getSaveFileName(this, tr("保存文件"), curPath,
                                             tr("文件(*)"));
}

void PerformanceManage::on_pushButton_5_clicked()
{
    this->hide();
    pLogin->m_home.show();
}
