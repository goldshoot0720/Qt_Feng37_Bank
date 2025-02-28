#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QFile>
#include <QMessageBox>
#include <QTextStream>
#include <QStandardPaths>
#include <QSysInfo>
#include <QOperatingSystemVersion>
#include <QTranslator>
QTranslator translator;

QString file_name = QStandardPaths::writableLocation(QStandardPaths::ConfigLocation) + "/bank_savings.txt";
int bank_savings[7];

int Calc_Sum_Saving()
{
    int sum_saving = 0;
    for (int i = 0; i < 7; i++)
    {
        sum_saving += bank_savings[i];
    }
    return sum_saving;
}

void My_SetWindowTitle(QWidget *parent){
    QString productType = QSysInfo::productType();
    QString productVersion = QSysInfo::productVersion();
    QString currentCpuArchitecture = QSysInfo::currentCpuArchitecture();
    if(productType.compare("windows")==0&&productVersion.compare("10")==0){
        int buildNumber = QOperatingSystemVersion::current().microVersion();
        if (buildNumber >= 22000){
            productVersion = "11";
        }
    }
    QString strTemp = productType+":"+productVersion+":"+currentCpuArchitecture;
    parent->setWindowTitle(QObject::tr("QT_Feng37_Bank:")+strTemp);
}

bool My_Locale_Change( QString localName ){
    if (!translator.load("Qt_Feng37_Bank_"+localName, QStandardPaths::writableLocation(QStandardPaths::ConfigLocation))) {
        QMessageBox msgBox;
        msgBox.setText(QObject::tr("讀檔失敗，請檢查Qt_Feng37_Bank_語系_國家.qm")+"，是否位在:"+QStandardPaths::writableLocation(QStandardPaths::ConfigLocation));
        msgBox.exec();
        return false;
    }
    QApplication::installTranslator(&translator);
    return true;
}

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->comboBox1->setEditable(true);
    ui->comboBox1->lineEdit()->setAlignment(Qt::AlignCenter);
    ui->comboBox1->lineEdit()->setReadOnly(true);
    ui->textbox1->setAlignment(Qt::AlignCenter);
    ui->label1->setAlignment(Qt::AlignCenter);
    My_SetWindowTitle(this);
    QFile file(file_name);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
    }
    else {
        QTextStream in(&file);
        for (int i = 0; i < 7; i++){
            QString line = in.readLine();
            bool ok;
            int num = line.toInt(&ok);
            if(!ok) {
                QMessageBox msgBox;
                msgBox.setText(QObject::tr("讀檔失敗，請檢查bank_savings.txt")+"，位在:"+QStandardPaths::writableLocation(QStandardPaths::ConfigLocation));
                msgBox.exec();
                in.flush();
                file.close();
                return;
            }
            bank_savings[i] = num;
        }
        ui->textbox1->setText(QString::number(bank_savings[0]));
        ui->label1->setText(QString::number(Calc_Sum_Saving()));
        in.flush();
        file.close();
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_button1_clicked()
{
    int textbox1Text;
    bool ok;
    QString str = ui->textbox1->text();
    textbox1Text = str.toInt(&ok);
    if (!ok){
        ui->label1->setText(QObject::tr("請輸入整數數字"));
    }
    else{
        bank_savings[ui->comboBox1->currentIndex()] = textbox1Text;
        ui->label1->setText(QString::number(Calc_Sum_Saving()));
    }
}


void MainWindow::on_button2_clicked()
{
    QFile file(file_name);
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text))
        return;
    QTextStream out(&file);
    for (int i = 0; i < 7; i++){
        QString str = QString::number(bank_savings[i]) + "\n";
        out << str;
    }
    out.flush();
    file.close();
}

void MainWindow::on_comboBox1_currentIndexChanged(int index)
{
    ui->textbox1->setText(QString::number(bank_savings[index]));
}

void MainWindow::on_actionChinese_triggered()
{
    if ( My_Locale_Change("zh_TW") ){
        My_SetWindowTitle(this);
        ui->retranslateUi(this);
    }
}

void MainWindow::on_actionEnglish_triggered()
{
    if ( My_Locale_Change("en_US") ){
        My_SetWindowTitle(this);
        ui->retranslateUi(this);
    }
}

void MainWindow::on_actionJapanese_triggered()
{
    if ( My_Locale_Change("ja_JP") ){
        My_SetWindowTitle(this);
        ui->retranslateUi(this);
    }
}

