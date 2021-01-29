#include "Target.h"
#include "ui_Target.h"
#include "ui_Target.h"
#include "QDebug.h"

#include "simutarget.h"
extern SimuTarget *g_pSimuTar;

Target::Target(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Target)
{
    ui->setupUi(this);
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
	QPainter painter(this);
	QPen pen(QColor(255,0,0));	//创建画笔
	pen.setWidth(5);  //笔宽
	painter.setPen(pen);  //给画家一根笔
	QPixmap pixmap(":/pic/targets/101-50胸环�?bmp");
	painter.drawPixmap(0,0,pixmap);
	qDebug()<<"pixmap.width:"<<pixmap.width();
	qDebug()<<"pixmap.widthMM:"<<pixmap.widthMM();
	qDebug()<<"pixmap.height:"<<pixmap.height();
	qDebug()<<"pixmap.heightMM:"<<pixmap.heightMM();

	resize(pixmap.width(), pixmap.height());

	int width = pixmap.width();
	int widthMM = pixmap.widthMM();
	int height = pixmap.height();
	int heightMM = pixmap.heightMM();
	int center_pos_w = pixmap.width()/2;
	int center_pos_h = pixmap.height()*30/(30+20);
	int center_pos_w_MM = pixmap.widthMM();
	int center_pos_h_MM = pixmap.heightMM();

	painter.drawPoint(center_pos_w, center_pos_h);

	//(10,-20)mm
	int point_pos_w = center_pos_w + (10/center_pos_w_MM)*center_pos_w;
	int point_pos_h = center_pos_h + (20/(widthMM-center_pos_h))*(height-center_pos_h);
	qDebug()<<"point_pos_w:"<<point_pos_w;
	qDebug()<<"point_pos_h:"<<point_pos_h;
	painter.drawPoint(point_pos_w, point_pos_h);
	//(120,-40)mm

}

