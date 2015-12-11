#include "Circle.h"
#include <cmath>
Circle::Circle()
{
}
void Circle::paint(QPainter &painter)
{
	
	int len = pow(start.x() - end.x(), 2);
	int wid = pow(start.y() - end.y(), 2);
	painter.drawEllipse(start, (int)(sqrt(len + wid)), int(sqrt(len + wid)));
}
Circle::~Circle()
{

}