#include "LoginMainWindow.h"
#include "ui_LoginMainWindow.h"
#include "home.h"
#include "qmessagebox.h"

LoginMainWindow *pLogin;

LoginMainWindow::LoginMainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::LoginMainWindow)
{
    ui->setupUi(this);
}

LoginMainWindow::~LoginMainWindow()
{
    delete ui;
}

void LoginMainWindow::on_LoginBtn_LogInUI_clicked()
{
    if(ui->UsrNameLineEdit_LogInUI->text().trimmed() == tr("admin") && ui->PassWdLineEdit_LogInUI->text() == tr("123456"))
    //if(1)
    {
        this->hide();
        m_home.show();
    }
    else
    {
       QMessageBox::warning(this, tr("警告！"),tr("用户名、密码错误！"),QMessageBox::Yes);

       //清空密码输入框内容
       ui->PassWdLineEdit_LogInUI->clear();

       //光标定位
       ui->UsrNameLineEdit_LogInUI->setFocus();
    }}

void LoginMainWindow::on_ExitBtn_LogInUI_clicked()
{
    this->close();
}
