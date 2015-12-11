/********************************************************************************
** Form generated from reading UI file 'drawtest.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DRAWTEST_H
#define UI_DRAWTEST_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DrawTestClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *DrawTestClass)
    {
        if (DrawTestClass->objectName().isEmpty())
            DrawTestClass->setObjectName(QStringLiteral("DrawTestClass"));
        DrawTestClass->resize(600, 400);
        menuBar = new QMenuBar(DrawTestClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        DrawTestClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(DrawTestClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        DrawTestClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(DrawTestClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        DrawTestClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(DrawTestClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        DrawTestClass->setStatusBar(statusBar);

        retranslateUi(DrawTestClass);

        QMetaObject::connectSlotsByName(DrawTestClass);
    } // setupUi

    void retranslateUi(QMainWindow *DrawTestClass)
    {
        DrawTestClass->setWindowTitle(QApplication::translate("DrawTestClass", "DrawTest", 0));
    } // retranslateUi

};

namespace Ui {
    class DrawTestClass: public Ui_DrawTestClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DRAWTEST_H
