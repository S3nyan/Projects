#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "person.h"

#include <QRegularExpression>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->saveButton->setStyleSheet("background-color: green; color: white;");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_saveButton_clicked()
{
    QRegularExpression nameRegex("^[A-ZА-Я][a-zа-я]+$");
    QRegularExpression patronymicRegex("^$|^[A-ZА-Я][a-zа-я]+$");
    QRegularExpression phoneRegex("^\\+(1|7|395)\\d{7,10}$");

    QString name = ui->nameEdit->text();
    QString surname = ui->surnameEdit->text();
    QString patronymic = ui->patronymicEdit->text();
    QString phone = ui->phoneEdit->text();
    QString gender = ui->radioMale->isChecked() ? "Male" : "Female";

    if (!nameRegex.match(name).hasMatch()) {
        QMessageBox::warning(this, "Ошибка", "Неверное имя");
        return;
    }

    if (!nameRegex.match(surname).hasMatch()) {
        QMessageBox::warning(this, "Ошибка", "Неверная фамилия");
        return;
    }

    if (!patronymicRegex.match(patronymic).hasMatch()) {
        QMessageBox::warning(this, "Ошибка", "Неверное отчество");
        return;
    }

    if (!phoneRegex.match(phone).hasMatch()) {
        QMessageBox::warning(this, "Ошибка", "Неверный телефон");
        return;
    }

    if (!ui->radioMale->isChecked() && !ui->radioFemale->isChecked()) {
        QMessageBox::warning(this, "Ошибка", "Выберите пол");
        return;
    }

    QString languages = "";

    if (ui->checkRussian->isChecked()) languages += "RU ";
    if (ui->checkEnglish->isChecked()) languages += "EN ";
    if (ui->checkFrench->isChecked()) languages += "FR ";

    Person p(name, surname, patronymic, phone, gender, languages);
    p.saveToFile();

    QMessageBox::information(this, "Успех", "Данные сохранены");
}

void MainWindow::on_resetButton_clicked()
{
    ui->nameEdit->clear();
    ui->surnameEdit->clear();
    ui->patronymicEdit->clear();
    ui->phoneEdit->clear();

    ui->checkEnglish->setChecked(false);
    ui->checkFrench->setChecked(false);
    ui->checkRussian->setChecked(false);

    ui->radioMale->setAutoExclusive(false);
    ui->radioFemale->setAutoExclusive(false);

    ui->radioMale->setChecked(false);
    ui->radioFemale->setChecked(false);

    ui->radioMale->setAutoExclusive(true);
    ui->radioFemale->setAutoExclusive(true);
}

void MainWindow::on_centralwidget_customContextMenuRequested(const QPoint &pos)
{

}

