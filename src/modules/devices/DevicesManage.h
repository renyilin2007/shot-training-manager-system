#ifndef DEVICESMANAGE_H
#define DEVICESMANAGE_H

#include <QWidget>

namespace Ui {
class DevicesManage;
}

class DevicesManage : public QWidget
{
    Q_OBJECT

public:
    explicit DevicesManage(QWidget *parent = 0);
    ~DevicesManage();

private:
    Ui::DevicesManage *ui;
};

#endif // DEVICESMANAGE_H
