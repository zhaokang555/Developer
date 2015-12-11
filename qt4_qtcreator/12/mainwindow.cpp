#include "mainwindow.h"
#include <QInputDialog>
#include <QLineEdit>
#include <QMessageBox>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    bool isOK;
    QString text = QInputDialog::getText(NULL, "Input Dialog",
                                                       "Please input your comment",
                                                       QLineEdit::Normal,
                                                       "your comment",
                                                       &isOK);
    if(isOK) {
           QMessageBox::information(NULL, "Information",
                                               "Your comment is: <b>" + text + "</b>",
                                               QMessageBox::Yes | QMessageBox::No,
                                               QMessageBox::Yes);
    }
}

MainWindow::~MainWindow()
{

}
