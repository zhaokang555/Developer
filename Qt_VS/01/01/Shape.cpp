#include "Shape.h"
Shape::Shape() 
{

}
void Shape::setStartPoint(QPoint s)
{
	start = s;
}
void Shape::setEndPoint(QPoint e)
{
	end = e;
}
QPoint Shape::startPoint()
{
	return start;
}
QPoint Shape::endPoint()
{
	return end;
}

Shape::~Shape()
{
}