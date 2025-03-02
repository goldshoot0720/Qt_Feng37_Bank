/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionChinese;
    QAction *actionEnglish;
    QAction *actionJapanese;
    QWidget *centralwidget;
    QComboBox *comboBox1;
    QLabel *label2;
    QLabel *label3;
    QLabel *label4;
    QLabel *label1;
    QPushButton *button1;
    QPushButton *button2;
    QLineEdit *textbox1;
    QLabel *label5;
    QMenuBar *menubar;
    QMenu *menu;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(446, 198);
        MainWindow->setCursor(QCursor(Qt::CursorShape::ArrowCursor));
        actionChinese = new QAction(MainWindow);
        actionChinese->setObjectName("actionChinese");
        actionEnglish = new QAction(MainWindow);
        actionEnglish->setObjectName("actionEnglish");
        actionJapanese = new QAction(MainWindow);
        actionJapanese->setObjectName("actionJapanese");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        comboBox1 = new QComboBox(centralwidget);
        comboBox1->addItem(QString());
        comboBox1->addItem(QString());
        comboBox1->addItem(QString());
        comboBox1->addItem(QString());
        comboBox1->addItem(QString());
        comboBox1->addItem(QString());
        comboBox1->addItem(QString());
        comboBox1->setObjectName("comboBox1");
        comboBox1->setGeometry(QRect(160, 10, 241, 31));
        label2 = new QLabel(centralwidget);
        label2->setObjectName("label2");
        label2->setGeometry(QRect(20, 15, 121, 21));
        label3 = new QLabel(centralwidget);
        label3->setObjectName("label3");
        label3->setGeometry(QRect(20, 50, 121, 16));
        label4 = new QLabel(centralwidget);
        label4->setObjectName("label4");
        label4->setGeometry(QRect(20, 80, 121, 21));
        label1 = new QLabel(centralwidget);
        label1->setObjectName("label1");
        label1->setGeometry(QRect(160, 80, 241, 16));
        button1 = new QPushButton(centralwidget);
        button1->setObjectName("button1");
        button1->setGeometry(QRect(160, 110, 101, 23));
        button2 = new QPushButton(centralwidget);
        button2->setObjectName("button2");
        button2->setGeometry(QRect(300, 110, 101, 23));
        textbox1 = new QLineEdit(centralwidget);
        textbox1->setObjectName("textbox1");
        textbox1->setGeometry(QRect(160, 50, 241, 21));
        label5 = new QLabel(centralwidget);
        label5->setObjectName("label5");
        label5->setGeometry(QRect(20, 110, 121, 21));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 446, 24));
        menu = new QMenu(menubar);
        menu->setObjectName("menu");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menu->menuAction());
        menu->addAction(actionChinese);
        menu->addAction(actionEnglish);
        menu->addAction(actionJapanese);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Qt_Feng37_Bank", nullptr));
#if QT_CONFIG(tooltip)
        MainWindow->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        actionChinese->setText(QCoreApplication::translate("MainWindow", "\344\270\255\346\226\207", nullptr));
        actionEnglish->setText(QCoreApplication::translate("MainWindow", "English", nullptr));
        actionJapanese->setText(QCoreApplication::translate("MainWindow", "\346\227\245\346\234\254\350\252\236", nullptr));
        comboBox1->setItemText(0, QCoreApplication::translate("MainWindow", "(013)\345\234\213\346\263\260\344\270\226\350\217\257\345\225\206\346\245\255\351\212\200\350\241\214", nullptr));
        comboBox1->setItemText(1, QCoreApplication::translate("MainWindow", "(017)\345\205\206\350\261\220\345\234\213\351\232\233\345\225\206\346\245\255\351\212\200\350\241\214", nullptr));
        comboBox1->setItemText(2, QCoreApplication::translate("MainWindow", "(048)\347\216\213\351\201\223\345\225\206\346\245\255\351\212\200\350\241\214", nullptr));
        comboBox1->setItemText(3, QCoreApplication::translate("MainWindow", "(103)\350\207\272\347\201\243\346\226\260\345\205\211\345\225\206\346\245\255\351\212\200\350\241\214", nullptr));
        comboBox1->setItemText(4, QCoreApplication::translate("MainWindow", "(700)\344\270\255\350\217\257\351\203\265\346\224\277\350\202\241\344\273\275\346\234\211\351\231\220\345\205\254\345\217\270", nullptr));
        comboBox1->setItemText(5, QCoreApplication::translate("MainWindow", "(812)\345\217\260\346\226\260\345\234\213\351\232\233\345\225\206\346\245\255\351\212\200\350\241\214", nullptr));
        comboBox1->setItemText(6, QCoreApplication::translate("MainWindow", "(822)\344\270\255\345\234\213\344\277\241\350\250\227\345\225\206\346\245\255\351\212\200\350\241\214", nullptr));

#if QT_CONFIG(tooltip)
        comboBox1->setToolTip(QCoreApplication::translate("MainWindow", "\350\253\213\351\201\270\346\223\207\351\207\221\350\236\215\346\251\237\346\247\213", nullptr));
#endif // QT_CONFIG(tooltip)
        label2->setText(QCoreApplication::translate("MainWindow", "\351\207\221\350\236\215\346\251\237\346\247\213\357\274\232", nullptr));
        label3->setText(QCoreApplication::translate("MainWindow", "\345\255\230\346\254\276\351\207\221\351\241\215\357\274\232", nullptr));
        label4->setText(QCoreApplication::translate("MainWindow", "\347\264\257\347\251\215\345\255\230\346\254\276\357\274\232", nullptr));
#if QT_CONFIG(tooltip)
        label1->setToolTip(QCoreApplication::translate("MainWindow", "\347\264\257\347\251\215\345\255\230\346\254\276", nullptr));
#endif // QT_CONFIG(tooltip)
        label1->setText(QCoreApplication::translate("MainWindow", "\345\260\232\346\234\252\351\226\213\345\247\213\350\250\210\347\256\227", nullptr));
#if QT_CONFIG(tooltip)
        button1->setToolTip(QCoreApplication::translate("MainWindow", "\345\255\230\346\252\224\344\271\213\345\211\215\350\250\230\345\276\227\345\205\210\344\277\256\346\224\271", nullptr));
#endif // QT_CONFIG(tooltip)
        button1->setText(QCoreApplication::translate("MainWindow", "\344\277\256\346\224\271", nullptr));
#if QT_CONFIG(tooltip)
        button2->setToolTip(QCoreApplication::translate("MainWindow", "\351\227\234\351\226\211\347\250\213\345\274\217\344\271\213\345\211\215\344\270\215\350\246\201\345\277\230\350\250\230\345\255\230\346\252\224", nullptr));
#endif // QT_CONFIG(tooltip)
        button2->setText(QCoreApplication::translate("MainWindow", "\345\255\230\346\252\224", nullptr));
#if QT_CONFIG(tooltip)
        textbox1->setToolTip(QCoreApplication::translate("MainWindow", "\350\253\213\350\274\270\345\205\245\346\225\264\346\225\270\346\225\270\345\255\227", nullptr));
#endif // QT_CONFIG(tooltip)
        textbox1->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
#if QT_CONFIG(tooltip)
        label5->setToolTip(QCoreApplication::translate("MainWindow", "\345\247\224\344\273\273\347\254\254\344\272\224\350\201\267\347\255\211\n"
"\347\260\241\344\273\273\347\254\254\345\215\201\344\272\214\350\201\267\347\255\211\n"
"\347\254\25412\345\261\206\350\207\272\345\214\227\345\270\202\351\225\267\n"
"\347\254\25423\344\273\273\347\270\275\347\265\261\n"
"\344\270\255\345\244\256\351\212\200\350\241\214\351\213\222\345\205\204\345\210\206\350\241\214", nullptr));
#endif // QT_CONFIG(tooltip)
        label5->setText(QCoreApplication::translate("MainWindow", "\345\275\251\350\233\213", nullptr));
        menu->setTitle(QCoreApplication::translate("MainWindow", "\350\252\236\350\250\200", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
