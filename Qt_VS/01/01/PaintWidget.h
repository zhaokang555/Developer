#ifndef PAINTWIDGET_H
#define PAINTWIDGET_H
#include <QWidget>
#include <QDebug>
#include "Shape.h"
#include "Line.h"
#include "Circle.h"
#include "Rect.h"
#include <QtGui>
class PaintWidget :public QWidget
{
	Q_OBJECT
public:
	PaintWidget(QWidget *parent = 0);
	~PaintWidget();
public slots :
	void setCurrentShape(Shape::code s);
protected:
	void paintEvent(QPaintEvent *event);
	void mouseMoveEvent(QMouseEvent *event);
	void mousePressEvent(QMouseEvent *event);
	void mouseReleaseEvent(QMouseEvent *event);
private:
	Shape::code currentShapeCode;
	Shape *shape;
	bool perm;
	QList<Shape*> shapelist;

};
#endif