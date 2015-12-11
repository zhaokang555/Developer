#include "paintwidget.h"

PaintWidget::PaintWidget(QWidget *parent)
    : QWidget(parent), currentShapeCode(Shape::Line), shape(NULL), endDraw(false)
{
    setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);

}

void PaintWidget::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    // ���������ɫΪ��ɫ
    painter.setBrush(Qt::white);
    // ��һ��paintwidget��С�İ�ɫ������Ϊ����
    painter.drawRect(0, 0, size().width(), size().height());
    // ���������ɫΪ͸��
    painter.setBrush(Qt::transparent);

//    foreach(Shape * shape, shapeList) {
//        shape->paint(painter);
//    }
//    �±ߵĴ������ֲ�Ը���
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
//        update����Ч������,�ܼ��ٲ���
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
    // �±ߵ����ַ���������
//    repaint();
//    repaint(0, 0, size().width(), size().height());
    update();
}
