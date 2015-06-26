#ifndef ADDEDITcovenNODE_H
#define ADDEDITcovenNODE_H

#include <QDialog>

namespace Ui {
class AddEditcovenNode;
}


class AddEditcovenNode : public QDialog
{
    Q_OBJECT

public:
    explicit AddEditcovenNode(QWidget *parent = 0);
    ~AddEditcovenNode();

protected:

private slots:
    void on_okButton_clicked();
    void on_cancelButton_clicked();

signals:

private:
    Ui::AddEditcovenNode *ui;
};

#endif // ADDEDITcovenNODE_H
