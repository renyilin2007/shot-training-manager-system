#ifndef PROCESSING_H
#define PROCESSING_H

#include <QWidget>
#include "src/modules/devices/Target.h"
#include "src/modules/devices/simutarget.h"

namespace Ui {
class Processing;
}

class Processing : public QWidget
{
    Q_OBJECT

public:
    explicit Processing(QWidget *parent = 0);
    ~Processing();

private slots:
    void on_pushButton_5_clicked();

    void on_EndTrainBtn_ProcUI_clicked();

    void on_pushButton_clicked();
    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_10_clicked();

    void on_pushButton_2_clicked();

public:
    Target Tar;
    Target Tar2;
    Target Tar3;
    Target Tar4;
    Target Tar5;
    Target Tar6;
private:
    Ui::Processing *ui;
};

#endif // PROCESSING_H
