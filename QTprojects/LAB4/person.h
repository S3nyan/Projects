#ifndef PERSON_H
#define PERSON_H

#include <QString>
#include <QFile>
#include <QTextStream>

struct Person {
    QString name;
    QString surname;
    QString patronymic;
    QString phone;
    QString gender;
    QString languages;

    Person(QString n, QString s, QString p, QString ph, QString g, QString lang)
        : name(n), surname(s), patronymic(p), phone(ph), languages(lang) {}

    void saveToFile() {
        QFile file("result.txt");
        if (file.open(QIODevice::Append | QIODevice::Text)) {
            QTextStream out(&file);
            out << name << " "
                << surname << " "
                << patronymic << " "
                << phone << " "
                << gender << " "
                << languages << "\n";
            file.close();
        }
    }
};

#endif
