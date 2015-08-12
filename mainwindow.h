#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QString>
#include <QDebug>
#include <QFileDialog>
#include <QTime>
#include <QTimer>
#include <QDateTime>
#include <QVector>
#include<QList>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    QTimer *clock;
    QVector<QString> timeSequence;

private slots:
    void updateTime();
    void updateDate();
    void on_pushButton_clicked();
};

#endif // MAINWINDOW_H
