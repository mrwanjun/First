#include "login.h"
#include "ui_login.h"
#include <QDebug>
#include <QMessageBox>

Login::Login(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);
    this->move(200,200);
    this->setMaximumSize(963,600);
    this->setMinimumSize(963,600);

    QPalette Loginimage = this->palette();
    QImage ImgAllbackground(":/Image/Image/login.jpg");
    QImage fitimgpic=ImgAllbackground.scaled(this->width(),this->height(), Qt::IgnoreAspectRatio);
    Loginimage.setBrush(QPalette::Window, QBrush(fitimgpic));this->setPalette(Loginimage);
}

Login::~Login()
{
    delete ui;
}

void Login::on_pushButtonLogin_clicked()
{
    QString account = ui->lineEditAccount->text();
    QString password = ui->lineEditPassword->text();
    if(account == "1" && password == "1"){
        interface = new InterFace();
        interface->show();
        this->hide();
    }else{
        QMessageBox::warning(this,"error","login faile,please try again");
        ui->lineEditAccount->clear();
        ui->lineEditPassword->clear();
    }
}

void Login::on_lineEditPassword_textEdited()
{
    ui->lineEditPassword->setEchoMode(QLineEdit::Password);
}
