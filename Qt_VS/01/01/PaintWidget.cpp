#include "PaintWidget.h"
#include <QMessageBox>
PaintWidget::PaintWidget(QWidget *parent)
:QWidget(parent), currentShapeCode(), shape(NULL), perm(false)
{
	setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
}
void PaintWidget::setCurrentShape(Shape::code s)
{
	if (s!=currentShapeCode)
	{
		currentShapeCode = s;
	}
}

void PaintWidget::paintEvent(QPaintEvent *event)
{
	QPainter painter(this);
	painter.setBrush(Qt::white);
	painter.drawRect(0, 0, size().width(), size().height());
	for each (Shape *shape in shapelist)
	{
		shape->paint(painter);
	}
	if (shape)
	{
		shape->paint(painter);
	}	
}
void PaintWidget::mouseMoveEvent(QMouseEvent *event)
{
	if (shape&&!perm)
	{
		shape->setEndPoint(event->pos());
		update();
	}
}
void PaintWidget::mousePressEvent(QMouseEvent *event)
{
	switch (currentShapeCode)
	{
		case Shape::Line:
			shape = new Line;
			break;
		case Shape::Rect:
			shape = new Rect;
			break;
		case Shape::Circle:
			shape = new Circle;
			break;
		default:
			break;
	}
	if (shape != NULL)
	{
		perm = false;
		shapelist << shape;
		shape->setStartPoint(event->pos());
		shape->setEndPoint(event->pos());
	}
}
void PaintWidget::mouseReleaseEvent(QMouseEvent *event)
{
	perm = true;
}
PaintWidget::~PaintWidget()
{
}