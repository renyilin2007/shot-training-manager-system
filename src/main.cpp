#include <QApplication>
#include "ui/home.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    home testHome;
    testHome.show();
    return a.exec();
}
