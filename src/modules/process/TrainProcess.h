#ifndef TRAINPROCESS_H
#define TRAINPROCESS_H

#include <QWidget>

namespace Ui {
class TrainProcess;
}

class TrainProcess : public QWidget
{
    Q_OBJECT

public:
    explicit TrainProcess(QWidget *parent = 0);
    ~TrainProcess();

private slots:
    void on_pushButton_5_clicked();

private:
    Ui::TrainProcess *ui;
};

#endif // TRAINPROCESS_H
