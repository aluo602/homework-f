//2021051615172fujiale
//2023.03.15

#ifndef GOTOCELLDIALOG_H
#define GOTOCELLDIALOG_H

#include <QDialog>

#include "ui_gotocelldialog.h"

QT_BEGIN_NAMESPACE
namespace Ui { class GoToCellDialog; }
QT_END_NAMESPACE

class GoToCellDialog : public QDialog
{
	Q_OBJECT

public:
	GoToCellDialog(QWidget *parent = 0);
	
private slots:
	void on_lineEdit_textChanged();
	
private:
	Ui::GoToCellDialog *ui;
};

#endif // GOTOCELLDIALOG_H
