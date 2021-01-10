#ifndef LOGINMAINWINDOW_H
#define LOGINMAINWINDOW_H

#include <QMainWindow>
#include "home.h"

namespace Ui {
class LoginMainWindow;
}

class LoginMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit LoginMainWindow(QWidget *parent = 0);
    ~LoginMainWindow();

private slots:
    void on_LoginBtn_LogInUI_clicked();

    void on_ExitBtn_LogInUI_clicked();

private:
    Ui::LoginMainWindow *ui;
public:
    home m_home;
};
extern LoginMainWindow *pLogin;
#endif // LOGINMAINWINDOW_H
