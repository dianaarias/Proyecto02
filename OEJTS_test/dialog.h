#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QtCore>
#include <QtGui>
#include <QGraphicsScene>
#include <QPushButton>
#include <QRadioButton>

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = 0);
    ~Dialog();

protected:
    Ui::Dialog *ui;
    QGraphicsScene *scene;
    QPushButton *push_button;
    QRadioButton *radio_button;

};

#endif // DIALOG_H
