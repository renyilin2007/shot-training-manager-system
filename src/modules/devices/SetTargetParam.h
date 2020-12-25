#ifndef SETTARGETPARAM_H
#define SETTARGETPARAM_H

#include <QWidget>

namespace Ui {
class SetTargetParam;
}

class SetTargetParam : public QWidget
{
    Q_OBJECT

public:
    explicit SetTargetParam(QWidget *parent = 0);
    ~SetTargetParam();

private:
    Ui::SetTargetParam *ui;
};

#endif // SETTARGETPARAM_H
