#ifndef LOGIN_H
#define LOGIN_H

#include <QWidget>
#include "interface.h"

namespace Ui {
class Login;
}

class Login : public QWidget
{
    Q_OBJECT

public:
    explicit Login(QWidget *parent = 0);
    ~Login();

private slots:
    void on_pushButtonLogin_clicked();

    void on_lineEditPassword_textEdited();

private:
    Ui::Login *ui;

    InterFace *interface;
};

#endif // LOGIN_H
