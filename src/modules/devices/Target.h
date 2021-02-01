#ifndef TARGET_H
#define TARGET_H

#include <QWidget>
#include <QPainter>
#include <QVector>
#include "QPainter.h"
#include "QPushButton.h"
#include "src/modules/devices/simutarget.h"
namespace Ui {
class Target;
}

class Target : public QWidget
{
    Q_OBJECT

public:
    explicit Target(QWidget *parent = 0);
    ~Target();

    void connectSignal(SimuTarget *pSimuTar);
private slots:
private:
    void paintEvent(QPaintEvent *event);
    Ui::Target *ui;
    QPoint m_pos;
    QVector<QPoint> m_VecPos;
    bool m_init = false;//false: uninit true:init
private slots:
    void recvData(QPoint pos);
};

#endif // TARGET_H
