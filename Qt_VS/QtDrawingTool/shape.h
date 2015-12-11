#ifndef SHAPE_H
#define SHAPE_H

#include <QPoint>
#include <QPainter>


class Shape
{
public:

    enum Code {
        Line,
        Rect,
        Circle
    };

    Shape();

    void setStart(QPoint s)
    {
        start = s;
    }

    void setEnd(QPoint e)
    {
        end = e;
    }

    QPoint getStart()
    {
        return start;
    }

    QPoint getEnd()
    {
        return end;
    }

    void virtual paint(QPainter & painter) = 0;

protected:
    QPoint start;
    QPoint end;
};

#endif // SHAPE_H
