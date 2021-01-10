#ifndef HOME_H
#define HOME_H

#include <QWidget>
#include "src/modules/inc/modules.h"

namespace Ui {
class home;
}

class home : public QWidget
{
    Q_OBJECT

public:
    explicit home(QWidget *parent = 0);
    ~home();

private:
    Ui::home *ui;
public:
    DevicesManage m_DevMng;
    PersonnelManage m_PersonMng;
    DistributionScheme m_DistruSche;
    PerformanceManage m_PerforMng;
    TrainProcess m_TrainProc;
private slots:
    void on_DevMngBtn_HomeUI_clicked();
};

#endif // HOME_H
