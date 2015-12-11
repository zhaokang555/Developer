#include "MainWindow.h"
#include <QMenuBar>
#include <QToolBar>
#include <QLabel>
#include <QStatusBar>

MainWindow::MainWindow(QWidget *parent)
:QMainWindow(parent)
{
	QToolBar *bar = this->addToolBar("Tools");
	QActionGroup *actionGroup = new QActionGroup(bar);

	QAction *drawLineAction = new QAction("Line",bar);
	drawLineAction->setCheckable(true);
	drawLineAction->setChecked(true);
	actionGroup->addAction(drawLineAction);
	bar->addAction(drawLineAction);

	QAction *drawRectAction = new QAction("Rectangle", bar);
	drawRectAction->setCheckable(true);
	drawRectAction->setChecked(true);
	actionGroup->addAction(drawRectAction);
	bar->addAction(drawRectAction);

	QAction *drawCircleAction = new QAction("Circle", bar);
	drawCircleAction->setCheckable(true);
	drawCircleAction->setChecked(true);
	actionGroup->addAction(drawCircleAction);
	bar->addAction(drawCircleAction);

	QMenu *file = menuBar()->addMenu(tr("Draw"));
	file->addAction(drawLineAction);
	file->addAction(drawRectAction);
	file->addAction(drawCircleAction);

	QLabel *statusMsg = new QLabel;
	statusBar()->addWidget(statusMsg);

	PaintWidget *paintWidget = new PaintWidget(this);
	setCentralWidget(paintWidget);
	
	connect(drawLineAction, SIGNAL(triggered()), this, SLOT(drawLineActionTriggered()));
	connect(drawRectAction, SIGNAL(triggered()), this, SLOT(drawRectActionTriggered()));
	connect(drawCircleAction, SIGNAL(triggered()), this, SLOT(drawCircleActionTriggered()));
	connect(this, SIGNAL(changeCurrentShape(Shape::code)), paintWidget, SLOT(setCurrentShape(Shape::code)));
}

//void MainWindow::changeCurrentShape(Shape::code newShape)
//{
//}
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
MainWindow::~MainWindow()
{

}