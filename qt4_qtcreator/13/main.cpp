#include <QApplication>
#include <QWidget>
#include <QLabel>
#include <QMouseEvent>

class EventLabel : public QLabel
{

protected:
    void mouseMoveEvent(QMouseEvent *event);
    void mousePressEvent(QMouseEvent *event);
    void mouseReleaseEvent(QMouseEvent *event);
};

void EventLabel::mouseMoveEvent(QMouseEvent *event)
{
    this->setText(QString("<center><h1>Move: (%1, %2)</h1></center>")
                  .arg(QString::number(event->x()), QString::number(event->y())));
}

void EventLabel::mousePressEvent(QMouseEvent *event)
{
    this->setText(QString("<center><h1>Press: (%1, %2)</h1></center>")
                  .arg(QString::number(event->x()), QString::number(event->y())));
}

void EventLabel::mouseReleaseEvent(QMouseEvent *event)
{
//    QString msg = QString().sprintf("<center><h1>Release: (%d, %d)</h1></center>", event->x(), event->y());
//    this->setText(msg);
    this->setText(QString().sprintf("<center><h1>Release: (%d, %d)</h1></center>", event->x(), event->y()));
}

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    EventLabel *label = new EventLabel;
    label->setWindowTitle("MouseEvent Demo");
    label->resize(300, 200);
    label->show();
    return app.exec();
}
