#ifndef RECT_H
#define RECT_H
#include "Shape.h"
class  Rect :public Shape
{
public:
	Rect();
	void paint(QPainter &painter);
	~Rect();
};
#endif