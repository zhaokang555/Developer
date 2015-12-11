#ifndef CIRCLE_H
#define CIRCLE_H
#include "Shape.h"
class  Circle :public Shape
{
public:
	Circle();
	void paint(QPainter &painter);
	~Circle();
private:
};
#endif