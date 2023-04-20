//2021051615172 傅佳乐
//2023.3.7
#ifndef FINDDIALOG_H
#define FINDDIALOG_H

#include <QDialog>

class QCheckBox;
class QLabel;
class QLineEdit;
class QPushButton;

class FindDialog : public QDialog
{
    Q_OBJECT

public:
    FindDialog(QWidget *parent = nullptr);
    ~FindDialog();
signals:
    void findNext(const QString &str, Qt::CaseSensitivity cs);
    void findPrevious(const QString &str, Qt::CaseSensitivity cs);
private slots:
    void findClicked();
    void enableFindButton(const QString &text);

private:
    QLabel *_label = nullptr;
    QLineEdit *_lineEdit = nullptr;
    QCheckBox *_caseCheckBox = nullptr;
    QCheckBox *_backwardCheckBox = nullptr;
    QPushButton *_findButton = nullptr;
    QPushButton *_closeButton = nullptr;
};
#endif // FINDDIALOG_H
