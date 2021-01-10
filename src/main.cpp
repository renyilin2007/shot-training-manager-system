#include <QApplication>
#include "ui/home.h"
#include "ui/login.h"
#include "ui/LoginMainWindow.h"
#include "modules/inc/modules.h"
#include "src/ui/LoginMainWindow.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    //LoginMainWindow Login;
    pLogin = new LoginMainWindow;
    pLogin->show();

    return a.exec();
}
