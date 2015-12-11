#include "Circle.h"
#include <cmath>

Circle::Circle()
{
}

void Circle::paint(QPainter & painter)
{

    int len = pow(start.x() - end.x(), 2);
    int wid = pow(start.y() - end.y(), 2);
    // ���ù��ɶ�������뾶
    int r = (int)(sqrt(len + wid));
    painter.drawEllipse(start, r, r);
}
