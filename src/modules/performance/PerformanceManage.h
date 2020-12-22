#ifndef PERFORMANCEMANAGE_H
#define PERFORMANCEMANAGE_H

#include <QWidget>

namespace Ui {
class PerformanceManage;
}

class PerformanceManage : public QWidget
{
    Q_OBJECT

public:
    explicit PerformanceManage(QWidget *parent = 0);
    ~PerformanceManage();

private:
    Ui::PerformanceManage *ui;
};

#endif // PERFORMANCEMANAGE_H
