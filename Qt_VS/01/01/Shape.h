#ifndef SHAPE_H
#define  SHAPE_H

#include <QtGui>
class Shape
{
public:
	enum code	
	{
		Line,
		Rect,
		Circle
	};
	Shape();
	void setStartPoint(QPoint p);
	void setEndPoint(QPoint p);
	QPoint startPoint();
	QPoint endPoint();
	virtual void  paint(QPainter &painter) = 0;
	~Shape();
public:
	QPoint start;
	QPoint end;
};
#endif
