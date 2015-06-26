#include "covennodeconfigdialog.h"
#include "ui_covennodeconfigdialog.h"

#include <QModelIndex>

covenNodeConfigDialog::covenNodeConfigDialog(QWidget *parent, QString nodeAddress, QString privkey) :
    QDialog(parent),
    ui(new Ui::covenNodeConfigDialog)
{
    ui->setupUi(this);
    QString desc = "rpcallowip=127.0.0.1<br>rpcuser=REPLACEME<br>rpcpassword=REPLACEME<br>server=1<br>listen=1<br>port=REPLACEMEWITHYOURPORT<br>masternode=1<br>masternodeaddr=" + nodeAddress + "<br>masternodeprivkey=" + privkey + "<br>";
    ui->detailText->setHtml(desc);
}

covenNodeConfigDialog::~covenNodeConfigDialog()
{
    delete ui;
}
