/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *surnameEdit;
    QLabel *label_2;
    QLineEdit *nameEdit;
    QLabel *label_3;
    QLineEdit *patronymicEdit;
    QLabel *label_4;
    QLineEdit *phoneEdit;
    QLabel *label_5;
    QHBoxLayout *_2;
    QRadioButton *radioMale;
    QRadioButton *radioFemale;
    QLabel *label_6;
    QVBoxLayout *_3;
    QCheckBox *checkRussian;
    QCheckBox *checkEnglish;
    QCheckBox *checkFrench;
    QPushButton *resetButton;
    QPushButton *saveButton;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(367, 394);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout_2 = new QGridLayout(centralwidget);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        label = new QLabel(centralwidget);
        label->setObjectName("label");

        gridLayout->addWidget(label, 0, 0, 1, 1);

        surnameEdit = new QLineEdit(centralwidget);
        surnameEdit->setObjectName("surnameEdit");

        gridLayout->addWidget(surnameEdit, 0, 1, 1, 1);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        nameEdit = new QLineEdit(centralwidget);
        nameEdit->setObjectName("nameEdit");

        gridLayout->addWidget(nameEdit, 1, 1, 1, 1);

        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        patronymicEdit = new QLineEdit(centralwidget);
        patronymicEdit->setObjectName("patronymicEdit");

        gridLayout->addWidget(patronymicEdit, 2, 1, 1, 1);

        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        phoneEdit = new QLineEdit(centralwidget);
        phoneEdit->setObjectName("phoneEdit");

        gridLayout->addWidget(phoneEdit, 3, 1, 1, 1);

        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");

        gridLayout->addWidget(label_5, 4, 0, 1, 1);

        _2 = new QHBoxLayout();
        _2->setObjectName("_2");
        radioMale = new QRadioButton(centralwidget);
        radioMale->setObjectName("radioMale");

        _2->addWidget(radioMale);

        radioFemale = new QRadioButton(centralwidget);
        radioFemale->setObjectName("radioFemale");

        _2->addWidget(radioFemale);


        gridLayout->addLayout(_2, 4, 1, 1, 1);

        label_6 = new QLabel(centralwidget);
        label_6->setObjectName("label_6");

        gridLayout->addWidget(label_6, 5, 0, 1, 1);

        _3 = new QVBoxLayout();
        _3->setObjectName("_3");
        checkRussian = new QCheckBox(centralwidget);
        checkRussian->setObjectName("checkRussian");

        _3->addWidget(checkRussian);

        checkEnglish = new QCheckBox(centralwidget);
        checkEnglish->setObjectName("checkEnglish");

        _3->addWidget(checkEnglish);

        checkFrench = new QCheckBox(centralwidget);
        checkFrench->setObjectName("checkFrench");

        _3->addWidget(checkFrench);


        gridLayout->addLayout(_3, 5, 1, 1, 1);

        resetButton = new QPushButton(centralwidget);
        resetButton->setObjectName("resetButton");

        gridLayout->addWidget(resetButton, 6, 0, 1, 1);

        saveButton = new QPushButton(centralwidget);
        saveButton->setObjectName("saveButton");

        gridLayout->addWidget(saveButton, 6, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        label->setText(QCoreApplication::translate("MainWindow", "\320\244\320\260\320\274\320\270\320\273\320\270\321\217", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\320\230\320\274\321\217", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\320\236\321\202\321\207\320\265\321\201\321\202\320\262\320\276", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\320\235\320\276\320\274\320\265\321\200 \321\202\320\265\320\273\320\265\321\204\320\276\320\275\320\260", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\320\273", nullptr));
        radioMale->setText(QCoreApplication::translate("MainWindow", "\320\234\321\203\320\266\321\201\320\272\320\276\320\271", nullptr));
        radioFemale->setText(QCoreApplication::translate("MainWindow", "\320\226\320\265\320\275\321\201\320\272\320\270\320\271", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "\320\257\320\267\321\213\320\272\320\270", nullptr));
        checkRussian->setText(QCoreApplication::translate("MainWindow", "\320\240\321\203\321\201\321\201\320\272\320\270\320\271", nullptr));
        checkEnglish->setText(QCoreApplication::translate("MainWindow", "\320\220\320\275\320\263\320\273\320\270\320\271\321\201\320\272\320\270\320\271", nullptr));
        checkFrench->setText(QCoreApplication::translate("MainWindow", "\320\244\321\200\320\260\320\275\321\206\321\203\320\267\321\201\320\272\320\270\320\271", nullptr));
        resetButton->setStyleSheet(QCoreApplication::translate("MainWindow", "background-color: red;", nullptr));
        resetButton->setText(QCoreApplication::translate("MainWindow", "\320\241\320\261\321\200\320\276\321\201", nullptr));
        saveButton->setStyleSheet(QCoreApplication::translate("MainWindow", "background-color: green;", nullptr));
        saveButton->setText(QCoreApplication::translate("MainWindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", nullptr));
        (void)MainWindow;
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
