#ifndef BALLANIMATION_H
#define BALLANIMATION_H

#include <QWidget>

class BallAnimation : public QWidget
{
    Q_OBJECT
public:
    explicit BallAnimation(QWidget *parent = nullptr);
    void setOrigin(const QPoint &origin);
    void addToOrigin(const QPoint &point);
    void ballbounce(); //new function

signals:

public slots:
    void paintEvent(QPaintEvent* event);

private:
    QPoint m_origin;
    int m_xpos;
    int m_ypos;
};

#endif // BALLANIMATION_H
