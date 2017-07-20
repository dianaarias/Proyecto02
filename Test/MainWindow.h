#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QButtonGroup>
#include <QMessageBox>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
	Q_OBJECT

public:
	explicit MainWindow(QWidget *parent = 0);
	~MainWindow();

private slots:
    void on_pushButton_clicked();

private:
    QButtonGroup *group;
    QButtonGroup *group2;
    QButtonGroup *group3;
    QButtonGroup *group4;
    QButtonGroup *group5;
    QButtonGroup *group6;
    QButtonGroup *group7;
    QButtonGroup *group8;
	Ui::MainWindow *ui;

};

#endif // MAINWINDOW_H
