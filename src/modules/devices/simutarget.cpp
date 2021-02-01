#include "simutarget.h"
#include "ui_simutarget.h"
SimuTarget *g_pSimuTar;
SimuTarget *g_pSimuTar2;
SimuTarget *g_pSimuTar3;
SimuTarget *g_pSimuTar4;
SimuTarget *g_pSimuTar5;
SimuTarget *g_pSimuTar6;

SimuTarget::SimuTarget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SimuTarget)
{
    ui->setupUi(this);
}

SimuTarget::~SimuTarget()
{
    m_init = false;
    delete ui;
}

void SimuTarget::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);  //创建一位画家
    QPen pen(QColor(255,0,0));  //创建画笔
    pen.setWidth(3);  //笔宽
    painter.setPen(pen);  //给画家一根笔

    QPixmap pixmap, pixmap2;
    pixmap.load(":/pic/targets/101-50胸环靶.bmp");
    int width = pixmap.width();
    int height = pixmap.height();
    resize(width/2, height/2);
    pixmap2 = pixmap.scaled(width/2, height/2, Qt::KeepAspectRatio);
    painter.drawPixmap(0,0,pixmap2);//图片原始大小输出

    QVector<QPoint>::iterator iter;
    for (iter=m_VecPos.begin();iter!=m_VecPos.end();iter++)
    {
        if(iter->x() != 0 && iter->y() != 0)
            painter.drawPoint(iter->x(), iter->y());
    }
}
void SimuTarget::mousePressEvent(QMouseEvent *event)
{
    if(event->button() == Qt::LeftButton)
    {
        //todo ...
        m_mousePos = event->pos();
        m_VecPos.push_back(event->pos());
        update();

        QPoint mousePos;
        mousePos.setX(m_mousePos.x()*2);
        mousePos.setY(m_mousePos.y()*2);
        //发送信号给target
        emit sendData(mousePos);
    }
}

void SimuTarget::mouseMoveEvent(QMouseEvent *event)
{
    QString msg;
    msg.sprintf("move: %d,%d",event->x(), event->y());

    this->setText(msg);
