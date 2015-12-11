#include "Line.h"
Line::Line()
{
}
void Line::paint(QPainter &painter)
{
	painter.drawLine(start, end);
}
Line::~Line()
{

}