#ifndef SIMUTARGET_H
#define SIMUTARGET_H

#include <QWidget>
#include <QMouseEvent>
#include <QPainter>
#include <QVector>


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
    void mouseMoveEvent(QMouseEvent *event);
private:
    Ui::SimuTarget *ui;
    QPoint m_mousePos;
    bool m_init = false;//false: uninit true:init
    QVector<QPoint> m_VecPos;
signals:
    void sendData(QPoint pos);

};

#endif // SIMUTARGET_H
