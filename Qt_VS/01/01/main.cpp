#include "drawtest.h"
#include <QtWidgets/QApplication>
#include "MainWindow.h"

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	MainWindow *mainwindow = new MainWindow;
	mainwindow->resize(800, 600);
	mainwindow->show();
	return a.exec();
}
