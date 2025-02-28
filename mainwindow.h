#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_button1_clicked();

    void on_button2_clicked();

    void on_comboBox1_currentIndexChanged(int index);

    void on_actionChinese_triggered();

    void on_actionEnglish_triggered();

    void on_actionJapanese_triggered();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
