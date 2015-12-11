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
	void changeCurrentShape(Shape::code newShape);//�Զ����źţ��û��źţ��������û��ź�ʱ�� emit
private slots:
	void drawLineActionTriggered();
	void drawRectActionTriggered();
	void drawCircleActionTriggered();
	
};
#endif // !MAINWINDOW_H


