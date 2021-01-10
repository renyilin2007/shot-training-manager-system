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

private slots:
    void on_QueryBtn_PerforMngUI_clicked();

    void on_ExportDataBtn_PerforMngUI_clicked();

    void on_pushButton_5_clicked();

private:
    Ui::PerformanceManage *ui;
};

#endif // PERFORMANCEMANAGE_H
