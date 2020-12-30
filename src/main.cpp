#include <QApplication>
#include "ui/home.h"
#include "ui/login.h"
#include "modules/inc/modules.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    home testHome;
    testHome.show();
    //login testLogin;
    //testLogin.show();

    return a.exec();
}
