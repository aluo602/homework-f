//2021051615172 傅佳乐
//2023.3.7
#include <QtWidgets>
#include "finddialog.h"

FindDialog::FindDialog(QWidget *parent)
    : QDialog{parent},
    _label {new QLabel(tr("Find &what:"))},
    _lineEdit {new QLineEdit()},
    _caseCheckBox {new QCheckBox(tr("Match &case"))},
    _backwardCheckBox {new QCheckBox(tr("Search &backward"))},
    _findButton {new QPushButton(tr("&Find"))},
    _closeButton {new QPushButton(tr("Close"))}
{
    _label->setBuddy(_lineEdit);

    _findButton->setEnabled(false);
    _findButton->setDefault(true);


    QHBoxLayout *topLeftLayout = new QHBoxLayout();
    topLeftLayout->addWidget(_label);
    topLeftLayout->addWidget(_lineEdit);

    QVBoxLayout *leftLayout = new QVBoxLayout();
    leftLayout->addLayout(topLeftLayout);
    leftLayout->addWidget(_caseCheckBox);
    leftLayout->addWidget(_backwardCheckBox);

    QVBoxLayout *rightLayout = new QVBoxLayout();
    rightLayout->addWidget(_findButton);
    rightLayout->addWidget(_closeButton);
    rightLayout->addStretch();

    QHBoxLayout *mainLayout = new QHBoxLayout();
    mainLayout->addLayout(leftLayout);
    mainLayout->addLayout(rightLayout);

    setLayout(mainLayout);
    setWindowTitle(tr("Find"));
    setFixedHeight(sizeHint().height());

    connect(_lineEdit, &QLineEdit::textChanged,
            this, &FindDialog::enableFindButton);
    connect(_findButton, &QPushButton::clicked,
            this, &FindDialog::findClicked);
    connect(_closeButton, &QPushButton::clicked,
            this, &FindDialog::findClicked);
}

FindDialog::~FindDialog()
{

}

void FindDialog::findClicked()
{
    QString text = _lineEdit->text();
    Qt::CaseSensitivity cs =
        _caseCheckBox->isChecked() ? Qt::CaseSensitive : Qt::CaseInsensitive;
    if (_backwardCheckBox->isChecked()) {
        emit findPrevious(text, cs);
    } else {
        emit findNext(text, cs);
    }
}

void FindDialog::enableFindButton(const QString &text)
{
    _findButton->setEnabled(!text.isEmpty());
}

