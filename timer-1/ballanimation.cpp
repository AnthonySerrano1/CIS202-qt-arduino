#include "ballanimation.h"
#include <QPaintEvent>
#include <QPainter>
#include <QDebug>

BallAnimation::BallAnimation(QWidget *parent) :
    QWidget(parent),
    m_origin(QPoint(0,0))
{
    setFixedSize(100,100);
    m_xpos = 0;
    m_ypos = 0;
    //m_origin = QPoint(m_xpos,m_ypos);
}

void BallAnimation::setOrigin(const QPoint &origin)
{
    m_origin = origin;
}

void BallAnimation::addToOrigin(const QPoint &point)
{
    m_origin += point;
}

void BallAnimation::ballbounce()
{
    if(m_origin.x() + 10 >= width()) // radius is 10
    {

    }
}

void BallAnimation::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    painter.drawRect(QRect(0,0,width()-1,height()-1));
    painter.setBrush(Qt::green);
    painter.setPen(Qt::red);
    painter.drawEllipse(m_origin,10,10);
}
