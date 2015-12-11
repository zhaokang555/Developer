#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QAction>
#include <QWidget>
#include "PaintWidget.h"
#include <QMenuBar>
class MainWindow :public QMainWindow
{
	Q_OBJECT
public:
	MainWindow(QWidget *parent = 0);
	~MainWindow();
signals:
	void changeCurrentShape(Shape::code newShape);//自定义信号（用户信号），发出用户信号时用 emit
private slots:
	void drawLineActionTriggered();
	void drawRectActionTriggered();
	void drawCircleActionTriggered();
	
};
#endif // !MAINWINDOW_H


