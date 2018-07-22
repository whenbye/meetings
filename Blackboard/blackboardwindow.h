#ifndef BLACKBOARDWINDOW_H
#define BLACKBOARDWINDOW_H

#include <QMainWindow>

namespace Ui {
class BlackboardWindow;
}

class BlackboardWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit BlackboardWindow(QWidget *parent = nullptr);
    ~BlackboardWindow();

private:
    Ui::BlackboardWindow *ui;
};

#endif // BLACKBOARDWINDOW_H
