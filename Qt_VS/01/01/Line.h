#ifndef LINE_H
#define LINE_H
#include "Shape.h"
class Line :public Shape
{
public:
	Line();
	void paint(QPainter &painter);
	~Line();
private:
};

#endif // !Line
