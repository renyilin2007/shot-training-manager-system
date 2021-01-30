#ifndef SIMUTARGET_H
#define SIMUTARGET_H

#include <QWidget>
#include <QMouseEvent>
#include <QPainter>
namespace Ui {
class SimuTarget;
}

class SimuTarget : public QWidget
{
    Q_OBJECT

public:
    explicit SimuTarget(QWidget *parent = 0);
    ~SimuTarget();
    void mousePressEvent(QMouseEvent *event);
    void paintEvent(QPaintEvent *event);

private:
    Ui::SimuTarget *ui;
    QPoint m_mousePos;

signals:
    void sendData(QPoint pos);

};

#endif // SIMUTARGET_H
