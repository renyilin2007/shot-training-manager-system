#include "simutarget.h"
#include "ui_simutarget.h"
SimuTarget *g_pSimuTar;

SimuTarget::SimuTarget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SimuTarget)
{
    ui->setupUi(this);
}

SimuTarget::~SimuTarget()
{
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

    //发送信号给target
    emit sendData(m_mousePos);
}
void SimuTarget::mousePressEvent(QMouseEvent *event)
{
    if(event->button() == Qt::LeftButton)
    {
        //todo ...
        m_mousePos = event->pos();
        update();
    }
}
