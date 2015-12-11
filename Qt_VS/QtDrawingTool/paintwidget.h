#ifndef PAINTWIDGET_H
#define PAINTWIDGET_H

#include <QWidget>
#include <QPaintEvent>
#include <QMouseEvent>
#include <QVector>

#include "shape.h"
#include "line.h"
#include "rect.h"
#include "circle.h"

class PaintWidget : public QWidget
{
    Q_OBJECT

public:
    PaintWidget(QWidget *parent = 0);


public slots:
    void setCurrentShape(Shape::Code s)
    {
        if(s != currentShapeCode) {
            currentShapeCode = s;
        }
    }
    void undo();
    void clearAll();
protected:
    void paintEvent(QPaintEvent *event);
    void mousePressEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
    void mouseReleaseEvent(QMouseEvent *event);


private:

    Shape::Code currentShapeCode;
    Shape *shape;
    bool endDraw;
    QVector<Shape*> shapeList;
};

#endif // PAINTWIDGET_H
