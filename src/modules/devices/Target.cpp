#include "Target.h"
#include "ui_Target.h"

#include "simutarget.h"
extern SimuTarget *g_pSimuTar;

Target::Target(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Target)
{
    ui->setupUi(this);
    m_y = 10;
}

Target::~Target()
{
    delete ui;
}

void Target::recvData(QPoint pos)
{
    m_pos = pos;
    update();
}

void Target::connectSignal()
{
    connect(g_pSimuTar, SIGNAL(SimuTarget::sendData(QPoint)), this, SLOT(recvData(QPoint)));
}

void Target::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);  //创建一位画家
    QPen pen(QColor(255,0,0));  //创建画笔
    pen.setWidth(3);  //笔宽
    painter.setPen(pen);  //给画家一根笔

    QPixmap pixmap;
    pixmap.load(":/pic/targets/101-50胸环靶.bmp");
    int width = pixmap.width();
    int height = pixmap.height();
    resize(width, height);
    painter.drawPixmap(0,0,pixmap);//图片原始大小输出

    painter.drawPoint(m_pos.x(), m_pos.y());
}
