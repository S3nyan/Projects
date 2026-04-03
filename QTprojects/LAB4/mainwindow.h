#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_saveButton_clicked();
    void on_resetButton_clicked();

    void on_centralwidget_customContextMenuRequested(const QPoint &pos);

private:
    Ui::MainWindow *ui;
};

#endif
