#ifndef covenNODECONFIGDIALOG_H
#define covenNODECONFIGDIALOG_H

#include <QDialog>

namespace Ui {
    class covenNodeConfigDialog;
}

QT_BEGIN_NAMESPACE
class QModelIndex;
QT_END_NAMESPACE

/** Dialog showing transaction details. */
class covenNodeConfigDialog : public QDialog
{
    Q_OBJECT

public:
    explicit covenNodeConfigDialog(QWidget *parent = 0, QString nodeAddress = "123.456.789.123:9999", QString privkey="MASTERNODEPRIVKEY");
    ~covenNodeConfigDialog();

private:
    Ui::covenNodeConfigDialog *ui;
};

#endif // covenNODECONFIGDIALOG_H
