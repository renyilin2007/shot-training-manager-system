#ifndef TARGET_H
#define TARGET_H

#include <QWidget>
#include <QPainter>

namespace Ui {
class Target;
}

class Target : public QWidget
{
    Q_OBJECT

public:
    explicit Target(QWidget *parent = 0);
    ~Target();

    void connectSignal();
private:
    void paintEvent(QPaintEvent *event);
    Ui::Target *ui;
    QPoint m_pos;
private slots:
    void recvData(QPoint pos);
};

#endif // TARGET_H
