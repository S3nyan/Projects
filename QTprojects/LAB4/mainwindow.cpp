#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "person.h"

#include <QRegularExpression>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    this->setWindowTitle("Анкета");

    ui->saveButton->setStyleSheet("background-color: green; color: white;");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_saveButton_clicked()
{
    QString name = ui->nameEdit->text();
    QString surname = ui->surnameEdit->text();
    QString patronymic = ui->patronymicEdit->text();
    QString phone = ui->phoneEdit->text();
    QString gender = ui->radioMale->isChecked() ? "Male" : "Female";

    QRegularExpression nameRegex("^[A-ZА-Я][a-zа-я]+$");

    // --- Имя ---
    if (name.isEmpty()) {
        QMessageBox::warning(this, "Ошибка", "Имя не может быть пустым");
        return;
    }
    if (!name[0].isUpper()) {
        QMessageBox::warning(this, "Ошибка", "Имя должно начинаться с заглавной буквы");
        return;
    }
    if (!nameRegex.match(name).hasMatch()) {
        QMessageBox::warning(this, "Ошибка", "Имя должно содержать только буквы");
        return;
    }

    // --- Фамилия ---
    if (surname.isEmpty()) {
        QMessageBox::warning(this, "Ошибка", "Фамилия не может быть пустой");
        return;
    }
    if (!surname[0].isUpper()) {
        QMessageBox::warning(this, "Ошибка", "Фамилия должна начинаться с заглавной буквы");
        return;
    }
    if (!nameRegex.match(surname).hasMatch()) {
        QMessageBox::warning(this, "Ошибка", "Фамилия должна содержать только буквы");
        return;
    }

    // --- Отчество ---
    if (!patronymic.isEmpty()) {
        if (!patronymic[0].isUpper()) {
            QMessageBox::warning(this, "Ошибка", "Отчество должно начинаться с заглавной буквы");
            return;
        }
        if (!nameRegex.match(patronymic).hasMatch()) {
            QMessageBox::warning(this, "Ошибка", "Отчество должно содержать только буквы");
            return;
        }
    }

    // --- Телефон ---
    if (!phone.startsWith("+")) {
        QMessageBox::warning(this, "Ошибка", "Телефон должен начинаться с +");
        return;
    }

    QRegularExpression phone7("^\\+7\\d{10}$");
    QRegularExpression phone1("^\\+1\\d{10}$");
    QRegularExpression phone395("^\\+395\\d{7}$");

    if (!(phone7.match(phone).hasMatch() ||
          phone1.match(phone).hasMatch() ||
          phone395.match(phone).hasMatch())) {

        QMessageBox::warning(this, "Ошибка",
                             "Телефон должен быть:\n"
                             "+7XXXXXXXXXX (10 цифр)\n"
                             "+1XXXXXXXXXX (10 цифр)\n"
                             "+395XXXXXXX (7 цифр)");
        return;
    }

    // --- Пол ---
    if (!ui->radioMale->isChecked() && !ui->radioFemale->isChecked()) {
        QMessageBox::warning(this, "Ошибка", "Выберите пол");
        return;
    }

    // --- Языки ---
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

