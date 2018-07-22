#include "blackboardwindow.h"
#include "ui_blackboardwindow.h"

BlackboardWindow::BlackboardWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::BlackboardWindow)
{
    ui->setupUi(this);
}

BlackboardWindow::~BlackboardWindow()
{
    delete ui;
}
