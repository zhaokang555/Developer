#ifndef DRAWTEST_H
#define DRAWTEST_H

#include <QtWidgets/QMainWindow>
#include "ui_drawtest.h"

class DrawTest : public QMainWindow
{
	Q_OBJECT

public:
	DrawTest(QWidget *parent = 0);
	~DrawTest();

private:
	Ui::DrawTestClass ui;
};

#endif // DRAWTEST_H
