#include "MainWindow.h"
#include "ui_MainWindow.h"


MainWindow::MainWindow(QWidget *parent) :
	QMainWindow(parent),
	ui(new Ui::MainWindow)
{
	ui->setupUi(this);

    group = new QButtonGroup(parent); //Q1
    group->addButton(ui->radioButton, 1);
    group->addButton(ui->radioButton_2, 2);
    group->addButton(ui->radioButton_3, 3);
    group->addButton(ui->radioButton_17, 4);
    group->addButton(ui->radioButton_16, 5);

    group2 = new QButtonGroup(parent); //Q5
    group2->addButton(ui->radioButton_4, 1);
    group2->addButton(ui->radioButton_5, 2);
    group2->addButton(ui->radioButton_6, 3);
    group2->addButton(ui->radioButton_18, 4);
    group2->addButton(ui->radioButton_19, 5);

    group3 = new QButtonGroup(parent); //Q9
    group3->addButton(ui->radioButton_7, 1);
    group3->addButton(ui->radioButton_8, 2);
    group3->addButton(ui->radioButton_9, 3);
    group3->addButton(ui->radioButton_20, 4);
    group3->addButton(ui->radioButton_21, 5);

    group4 = new QButtonGroup(parent); //Q13
    group4->addButton(ui->radioButton_22, 1);
    group4->addButton(ui->radioButton_23, 2);
    group4->addButton(ui->radioButton_24, 3);
    group4->addButton(ui->radioButton_25, 4);
    group4->addButton(ui->radioButton_26, 5);

    group5 = new QButtonGroup(parent); //Q17
    group5->addButton(ui->radioButton_27, 1);
    group5->addButton(ui->radioButton_28, 2);
    group5->addButton(ui->radioButton_29, 3);
    group5->addButton(ui->radioButton_30, 4);
    group5->addButton(ui->radioButton_31, 5);

    group6 = new QButtonGroup(parent); //Q21
    group6->addButton(ui->radioButton_32, 1);
    group6->addButton(ui->radioButton_33, 2);
    group6->addButton(ui->radioButton_34, 3);
    group6->addButton(ui->radioButton_35, 4);
    group6->addButton(ui->radioButton_36, 5);

    group8 = new QButtonGroup(parent); //25
    group8->addButton(ui->radioButton_37, 1);
    group8->addButton(ui->radioButton_38, 2);
    group8->addButton(ui->radioButton_39, 3);
    group8->addButton(ui->radioButton_40, 4);
    group8->addButton(ui->radioButton_41, 5);

    group7 = new QButtonGroup(parent); //29
    group7->addButton(ui->radioButton_42, 1);
    group7->addButton(ui->radioButton_43, 2);
    group7->addButton(ui->radioButton_44, 3);
    group7->addButton(ui->radioButton_45, 4);
    group7->addButton(ui->radioButton_46, 5);

}

MainWindow::~MainWindow()
{
	delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    if((group->checkedId() == -1 || group2->checkedId() == -1) || (group3->checkedId() == -1 || group4->checkedId() == -1) || (group5->checkedId() == -1 || group6->checkedId() == -1) || (group7->checkedId() == -1 || group8->checkedId() == -1)){
        QMessageBox::information(this, tr("Results"), tr("Please complete the test"));
    } else{
        int result = 18;
        result += group->checkedId();
        result += group2->checkedId();
        result -= group3->checkedId();
        result += group4->checkedId();
        result -= group5->checkedId();
        result += group6->checkedId();
        result -= group8->checkedId();
        result += group7->checkedId();

        if(result > 24){
            QMessageBox::information(this, tr("Results"), tr("Congratulations! You're a Perceptive person"));
        } else{
            QMessageBox::information(this, tr("Results"), tr("Congratulations! You're a Judging individual"));
        }
    }
}
