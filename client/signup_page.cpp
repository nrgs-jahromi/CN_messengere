#include "signup_page.h"
#include "ui_signup_page.h"

Signup_page::Signup_page(QWidget *parent , QMainWindow * main_window) :
    QMainWindow(parent),
    ui(new Ui::Signup_page)
{
    ui->setupUi(this);
    this -> main_window =main_window;
}

Signup_page::~Signup_page()
{
    delete ui;
}

void Signup_page::on_verify_clicked()
{

}
