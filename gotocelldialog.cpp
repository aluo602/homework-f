#include <QtGui>
#include <QAbstractButton>
#include <QPushButton>
#include "gotocelldialog.h"

GoToCellDialog::GoToCellDialog(QWidget *parent)
	:QDialog(parent), ui(new Ui::GoToCellDialog)
{
	ui->setupUi(this);
	ui->buttonBox->button(QDialogButtonBox::Ok)->setEnabled(false);

	QRegularExpression regularExpression("[A-Za-z][1-9]{0,2}");
	ui->lineEdit->setValidator(new QRegularExpressionValidator(regularExpression, this));

	connect(ui->buttonBox, SIGNAL(accepted()), this, SLOT(accept()));
	connect(ui->buttonBox, SIGNAL(accepted()), this, SLOT(reject()));
}

void GoToCellDialog::on_lineEdit_textChanged()
{
	ui->buttonBox->button(QDialogButtonBox::Ok)->setEnabled(
			ui->lineEdit->hasAcceptableInput());
}
