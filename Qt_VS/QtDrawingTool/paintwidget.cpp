#include "paintwidget.h"

PaintWidget::PaintWidget(QWidget *parent)
    : QWidget(parent), currentShapeCode(Shape::Line), shape(NULL), endDraw(false)
{
    setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);

}

void PaintWidget::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    // 设置填充颜色为白色
    painter.setBrush(Qt::white);
    // 画一个paintwidget大小的白色矩形作为画布
    painter.drawRect(0, 0, size().width(), size().height());
    // 设置填充颜色为透明
    painter.setBrush(Qt::transparent);

//    foreach(Shape * shape, shapeList) {
//        shape->paint(painter);
//    }
//    下边的代码可移植性更好
    for (int i = 0; i < shapeList.count(); i++)
    {
        Shape *shape = shapeList[i];
        shape->paint(painter);
    }
}

void PaintWidget::mousePressEvent(QMouseEvent *event)
{
    switch(currentShapeCode)
    {
    case Shape::Line:
        {
        shape = new Line;
            break;
        }
    case Shape::Rect:
        {
        shape = new Rect;
        break;
        }
    case Shape::Circle:
        {
        shape = new Circle;
        }
    }
    if(shape != NULL) {
        endDraw = false;
        shapeList<<shape;
        shape->setStart(event->pos());
        shape->setEnd(event->pos());
    }
}

void PaintWidget::mouseMoveEvent(QMouseEvent *event)
{
    if(shape && !endDraw) {
        shape->setEnd(event->pos());
//        repaint();
//        update方法效果更好,能减少颤动
        update();

    }
}

void PaintWidget::mouseReleaseEvent(QMouseEvent *event)
{
    endDraw = true;
}

void PaintWidget::undo()
{
    if (!shapeList.empty())
        shapeList.pop_back();

    update();
}

void PaintWidget::clearAll()
{
    shapeList.clear();
    // 下边的三种方法都可以
//    repaint();
//    repaint(0, 0, size().width(), size().height());
    update();
}
