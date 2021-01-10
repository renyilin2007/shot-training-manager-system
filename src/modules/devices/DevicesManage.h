#ifndef DEVICESMANAGE_H
#define DEVICESMANAGE_H

#include <QWidget>
#include "src/modules/devices/SetTargetParam.h"
#include "Target.h"

namespace Ui {
class DevicesManage;
}

class DevicesManage : public QWidget
{
    Q_OBJECT

public:
    explicit DevicesManage(QWidget *parent = 0);
    ~DevicesManage();

private slots:
    void on_BackBtn_DevMngUI_clicked();

    void on_SetTarBtn_DevMngUI_clicked();
    void on_DisplayTarBtn_DevMngUI_clicked();

    void on_HideTarBtn_DevMngUI_clicked();

    void on_PauseTarBtn_DevMngUI_clicked();

    void on_StartTarBtn_DevMngUI_clicked();

    void on_SearchTarBtn_DevMngUI_clicked();

    void on_GetTarPlaceEnvBtn_DevMngUI_clicked();

    void on_pushButton_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_7_clicked();

public:
    SetTargetParam SetTarParam;
    Target Tar;
private:
    Ui::DevicesManage *ui;
};

#endif // DEVICESMANAGE_H
