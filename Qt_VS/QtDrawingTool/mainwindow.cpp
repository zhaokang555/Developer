#include "mainwindow.h"
#include <QMenuBar>
#include <QMenu>
#include <QToolBar>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    QMenu *drawMenu = menuBar()->addMenu(tr("&Draw"));
    QMenu *editMenu = menuBar()->addMenu(tr("&Edit"));
    QToolBar *drawToolBar = this->addToolBar(tr("&Draw"));
    QToolBar *editToolBar = this->addToolBar(tr("&Edit"));
    QActionGroup *group = new QActionGroup(this);


    // ����
    QAction *drawLineAction = new QAction(tr("&Line"), this);
    drawLineAction->setToolTip(tr("Draw a line."));
    drawLineAction->setStatusTip(tr("Draw a line."));
    drawLineAction->setCheckable(true);
    drawLineAction->setChecked(true);
    group->addAction(drawLineAction);
    drawToolBar->addAction(drawLineAction);
    drawMenu->addAction(drawLineAction);

    // ������
    QAction *drawRectAction = new QAction(tr("&Rectangle"), this);
    drawRectAction->setToolTip(tr("Draw a rectangle."));
    drawRectAction->setStatusTip(tr("Draw a rectangle."));
    drawRectAction->setCheckable(true);
    group->addAction(drawRectAction);
    drawToolBar->addAction(drawRectAction);
    drawMenu->addAction(drawRectAction);

    // ��Բ
    QAction *drawCircleAction = new QAction(tr("&Circle"), this);
    drawCircleAction->setToolTip(tr("Draw a circle."));
    drawCircleAction->setStatusTip(tr("Draw a circle."));
    drawCircleAction->setCheckable(true);
    group->addAction(drawCircleAction);
    drawToolBar->addAction(drawCircleAction);
    drawMenu->addAction(drawCircleAction);

    // ����
    QAction *undoAction = new QAction(tr("&Undo"), this);
    undoAction->setToolTip(tr("Undo last shape."));
    undoAction->setStatusTip(tr("Undo last shape."));
    editMenu->addAction(undoAction);
    editToolBar->addAction(undoAction);

    // ���
    QAction *clearAction = new QAction(tr("&ClearAll"), this);
    clearAction->setToolTip(tr("Clear all shapes."));
    clearAction->setStatusTip(tr("Clear all shapes."));
    editMenu->addAction(clearAction);
    editToolBar->addAction(clearAction);

    // ���״̬��
    statusBar();

    paintWidget = new PaintWidget(this);
    setCentralWidget(paintWidget);

    // ����������ͼAction
    connect(drawLineAction, SIGNAL(triggered()),
            this, SLOT(drawLineActionTriggered()));
    connect(drawRectAction, SIGNAL(triggered()),
            this, SLOT(drawRectActionTriggered()));
    connect(drawCircleAction, SIGNAL(triggered()),
            this, SLOT(drawCircleActionTriggered()));

    // �����������Action
    connect(clearAction, SIGNAL(triggered()),
            paintWidget, SLOT(clearAll()));
    connect(undoAction, SIGNAL(triggered()),
            paintWidget, SLOT(undo()));

    connect(this, SIGNAL(changeCurrentShape(Shape::Code)),
            paintWidget, SLOT(setCurrentShape(Shape::Code)));

}

void MainWindow::drawLineActionTriggered()
{
    emit changeCurrentShape(Shape::Line);
}

void MainWindow::drawRectActionTriggered()
{
    emit changeCurrentShape(Shape::Rect);
}

void MainWindow::drawCircleActionTriggered()
{
    emit changeCurrentShape(Shape::Circle);
}



