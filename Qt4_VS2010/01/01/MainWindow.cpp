#include "MainWindow.h"
#include <QAction>
#include <QMenu>
#include <QToolBar>
#include <QtGui/QMenuBar>
#include <QtGui\QKeySequence>
MainWindow::MainWindow(QWidget *parent = 0)
	: QMainWindow(parent)
{
	    openAction = new QAction(tr("&Open"), this); 
        openAction->setShortcut(QKeySequence::Open); 
        openAction->setStatusTip(tr("Open a file."));

		QMenu *file = menuBar()->addMenu(tr("&File"));
        file->addAction(openAction); 
 
        QToolBar *toolBar = addToolBar(tr("&File")); 
        toolBar->addAction(openAction);
}

MainWindow::~MainWindow()
{

}
