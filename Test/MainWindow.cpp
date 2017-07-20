#include "MainWindow.h"
#include "ui_MainWindow.h"
#include <QButtonGroup>

MainWindow::MainWindow(QWidget *parent) :
	QMainWindow(parent),
	ui(new Ui::MainWindow)
{
	ui->setupUi(this);

    QButtonGroup *group = new QButtonGroup(parent); //Q1
    group->addButton(ui->radioButton, 1);
    group->addButton(ui->radioButton_2, 2);
    group->addButton(ui->radioButton_3, 3);
    group->addButton(ui->radioButton_17, 4);
    group->addButton(ui->radioButton_16, 5);

    QButtonGroup *group2 = new QButtonGroup(parent); //Q5
    group2->addButton(ui->radioButton_4, 1);
    group2->addButton(ui->radioButton_5, 2);
    group2->addButton(ui->radioButton_6, 3);
    group2->addButton(ui->radioButton_18, 4);
    group2->addButton(ui->radioButton_19, 5);

    QButtonGroup *group3 = new QButtonGroup(parent); //Q9
    group3->addButton(ui->radioButton_7, 1);
    group3->addButton(ui->radioButton_8, 2);
    group3->addButton(ui->radioButton_9, 3);
    group3->addButton(ui->radioButton_20, 4);
    group3->addButton(ui->radioButton_21, 5);

    QButtonGroup *group4 = new QButtonGroup(parent); //Q13
    group4->addButton(ui->radioButton_22, 1);
    group4->addButton(ui->radioButton_23, 2);
    group4->addButton(ui->radioButton_24, 3);
    group4->addButton(ui->radioButton_25, 4);
    group4->addButton(ui->radioButton_26, 5);

    QButtonGroup *group5 = new QButtonGroup(parent); //Q17
    group5->addButton(ui->radioButton_27, 1);
    group5->addButton(ui->radioButton_28, 2);
    group5->addButton(ui->radioButton_29, 3);
    group5->addButton(ui->radioButton_30, 4);
    group5->addButton(ui->radioButton_31, 5);

    QButtonGroup *group6 = new QButtonGroup(parent); //Q21
    group6->addButton(ui->radioButton_32, 1);
    group6->addButton(ui->radioButton_33, 2);
    group6->addButton(ui->radioButton_34, 3);
    group6->addButton(ui->radioButton_35, 4);
    group6->addButton(ui->radioButton_36, 5);

    QButtonGroup *group7 = new QButtonGroup(parent); //29
    group7->addButton(ui->radioButton_42, 1);
    group7->addButton(ui->radioButton_43, 2);
    group7->addButton(ui->radioButton_44, 3);
    group7->addButton(ui->radioButton_45, 4);
    group7->addButton(ui->radioButton_46, 5);

    QButtonGroup *group8 = new QButtonGroup(parent); //25
    group8->addButton(ui->radioButton_37, 1);
    group8->addButton(ui->radioButton_38, 2);
    group8->addButton(ui->radioButton_39, 3);
    group8->addButton(ui->radioButton_40, 4);
    group8->addButton(ui->radioButton_41, 5);
}

MainWindow::~MainWindow()
{
	delete ui;
}

void MainWindow::on_pushButton_clicked()
{

}
