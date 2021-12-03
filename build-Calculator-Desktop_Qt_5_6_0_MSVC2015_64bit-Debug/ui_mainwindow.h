/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QPushButton *pushButton_clear;
    QPushButton *pushButton_div;
    QPushButton *pushButton_rightbracket;
    QPushButton *pushButton_leftbracket;
    QPushButton *pushButton_mult;
    QPushButton *pushButton_n7;
    QPushButton *pushButton_n9;
    QPushButton *pushButton_n8;
    QPushButton *pushButton_minus;
    QPushButton *pushButton_n4;
    QPushButton *pushButton_n6;
    QPushButton *pushButton_n5;
    QPushButton *pushButton_equal;
    QPushButton *pushButton_n0;
    QPushButton *pushButton_n1;
    QPushButton *pushButton_n2;
    QPushButton *pushButton_add;
    QPushButton *pushButton_n3;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_5;
    QPushButton *pushButton_exp;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(507, 402);
        MainWindow->setMinimumSize(QSize(256, 387));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        MainWindow->setFont(font);
        MainWindow->setStyleSheet(QStringLiteral("background-color: rgb(0, 90, 149);"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 10, 241, 61));
        label->setMaximumSize(QSize(241, 16777215));
        QFont font1;
        font1.setPointSize(14);
        font1.setBold(true);
        font1.setWeight(75);
        label->setFont(font1);
        label->setStyleSheet(QLatin1String("background-color:white;\n"
"border:1px solid gray;\n"
"qproperty-alignment:'AlignBottom| AlignRight';"));
        pushButton_clear = new QPushButton(centralWidget);
        pushButton_clear->setObjectName(QStringLiteral("pushButton_clear"));
        pushButton_clear->setGeometry(QRect(10, 80, 58, 58));
        QFont font2;
        font2.setPointSize(10);
        font2.setBold(true);
        font2.setWeight(75);
        pushButton_clear->setFont(font2);
        pushButton_clear->setStyleSheet(QLatin1String("border:1px solid gray;\n"
"background-color:rgb(255, 0, 41);"));
        pushButton_div = new QPushButton(centralWidget);
        pushButton_div->setObjectName(QStringLiteral("pushButton_div"));
        pushButton_div->setGeometry(QRect(190, 80, 58, 58));
        pushButton_div->setFont(font2);
        pushButton_div->setStyleSheet(QLatin1String("border:1px solid gray;\n"
"background-color:rgb(214, 214, 214)"));
        pushButton_rightbracket = new QPushButton(centralWidget);
        pushButton_rightbracket->setObjectName(QStringLiteral("pushButton_rightbracket"));
        pushButton_rightbracket->setGeometry(QRect(130, 80, 58, 58));
        pushButton_rightbracket->setFont(font2);
        pushButton_rightbracket->setStyleSheet(QLatin1String("border:1px solid gray;\n"
"background-color:rgb(214, 214, 214)"));
        pushButton_leftbracket = new QPushButton(centralWidget);
        pushButton_leftbracket->setObjectName(QStringLiteral("pushButton_leftbracket"));
        pushButton_leftbracket->setGeometry(QRect(70, 80, 58, 58));
        pushButton_leftbracket->setFont(font2);
        pushButton_leftbracket->setStyleSheet(QLatin1String("border:1px solid gray;\n"
"background-color:rgb(214, 214, 214)"));
        pushButton_mult = new QPushButton(centralWidget);
        pushButton_mult->setObjectName(QStringLiteral("pushButton_mult"));
        pushButton_mult->setGeometry(QRect(190, 140, 58, 58));
        pushButton_mult->setFont(font2);
        pushButton_mult->setStyleSheet(QLatin1String("border:1px solid gray;\n"
"background-color:rgb(214, 214, 214)"));
        pushButton_n7 = new QPushButton(centralWidget);
        pushButton_n7->setObjectName(QStringLiteral("pushButton_n7"));
        pushButton_n7->setGeometry(QRect(10, 140, 58, 58));
        pushButton_n7->setFont(font2);
        pushButton_n7->setStyleSheet(QLatin1String("border:1px solid gray;\n"
"background-color:rgb(156, 216, 255)"));
        pushButton_n9 = new QPushButton(centralWidget);
        pushButton_n9->setObjectName(QStringLiteral("pushButton_n9"));
        pushButton_n9->setGeometry(QRect(130, 140, 58, 58));
        pushButton_n9->setFont(font2);
        pushButton_n9->setStyleSheet(QLatin1String("border:1px solid gray;\n"
"background-color:rgb(156, 216, 255)"));
        pushButton_n8 = new QPushButton(centralWidget);
        pushButton_n8->setObjectName(QStringLiteral("pushButton_n8"));
        pushButton_n8->setGeometry(QRect(70, 140, 58, 58));
        pushButton_n8->setFont(font2);
        pushButton_n8->setStyleSheet(QLatin1String("border:1px solid gray;\n"
"background-color:rgb(156, 216, 255)"));
        pushButton_minus = new QPushButton(centralWidget);
        pushButton_minus->setObjectName(QStringLiteral("pushButton_minus"));
        pushButton_minus->setGeometry(QRect(190, 200, 58, 58));
        pushButton_minus->setFont(font2);
        pushButton_minus->setStyleSheet(QLatin1String("border:1px solid gray;\n"
"background-color:rgb(214, 214, 214)"));
        pushButton_n4 = new QPushButton(centralWidget);
        pushButton_n4->setObjectName(QStringLiteral("pushButton_n4"));
        pushButton_n4->setGeometry(QRect(10, 200, 58, 58));
        pushButton_n4->setFont(font2);
        pushButton_n4->setStyleSheet(QLatin1String("border:1px solid gray;\n"
"background-color:rgb(156, 216, 255)"));
        pushButton_n6 = new QPushButton(centralWidget);
        pushButton_n6->setObjectName(QStringLiteral("pushButton_n6"));
        pushButton_n6->setGeometry(QRect(130, 200, 58, 58));
        pushButton_n6->setFont(font2);
        pushButton_n6->setStyleSheet(QLatin1String("border:1px solid gray;\n"
"background-color:rgb(156, 216, 255)"));
        pushButton_n5 = new QPushButton(centralWidget);
        pushButton_n5->setObjectName(QStringLiteral("pushButton_n5"));
        pushButton_n5->setGeometry(QRect(70, 200, 58, 58));
        pushButton_n5->setFont(font2);
        pushButton_n5->setStyleSheet(QLatin1String("border:1px solid gray;\n"
"background-color:rgb(156, 216, 255)"));
        pushButton_equal = new QPushButton(centralWidget);
        pushButton_equal->setObjectName(QStringLiteral("pushButton_equal"));
        pushButton_equal->setGeometry(QRect(130, 320, 58, 58));
        pushButton_equal->setFont(font2);
        pushButton_equal->setStyleSheet(QLatin1String("border:1px solid gray;\n"
"background-color:rgb(37, 211, 102);"));
        pushButton_n0 = new QPushButton(centralWidget);
        pushButton_n0->setObjectName(QStringLiteral("pushButton_n0"));
        pushButton_n0->setGeometry(QRect(10, 320, 118, 58));
        pushButton_n0->setFont(font2);
        pushButton_n0->setStyleSheet(QLatin1String("border:1px solid gray;\n"
"background-color:rgb(156, 216, 255)"));
        pushButton_n1 = new QPushButton(centralWidget);
        pushButton_n1->setObjectName(QStringLiteral("pushButton_n1"));
        pushButton_n1->setGeometry(QRect(10, 260, 58, 58));
        pushButton_n1->setFont(font2);
        pushButton_n1->setStyleSheet(QLatin1String("border:1px solid gray;\n"
"background-color:rgb(156, 216, 255)"));
        pushButton_n2 = new QPushButton(centralWidget);
        pushButton_n2->setObjectName(QStringLiteral("pushButton_n2"));
        pushButton_n2->setGeometry(QRect(70, 260, 58, 58));
        pushButton_n2->setFont(font2);
        pushButton_n2->setStyleSheet(QLatin1String("border:1px solid gray;\n"
"background-color:rgb(156, 216, 255)"));
        pushButton_add = new QPushButton(centralWidget);
        pushButton_add->setObjectName(QStringLiteral("pushButton_add"));
        pushButton_add->setGeometry(QRect(190, 260, 58, 58));
        pushButton_add->setFont(font2);
        pushButton_add->setStyleSheet(QLatin1String("border:1px solid gray;\n"
"background-color:rgb(214, 214, 214)"));
        pushButton_n3 = new QPushButton(centralWidget);
        pushButton_n3->setObjectName(QStringLiteral("pushButton_n3"));
        pushButton_n3->setGeometry(QRect(130, 260, 58, 58));
        pushButton_n3->setFont(font2);
        pushButton_n3->setStyleSheet(QLatin1String("border:1px solid gray;\n"
"background-color:rgb(156, 216, 255)"));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 20, 181, 20));
        label_2->setStyleSheet(QLatin1String("background-color:white;\n"
"color:rgb(135, 135, 135)"));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(260, 140, 241, 61));
        label_3->setFont(font1);
        label_3->setStyleSheet(QLatin1String("background-color:white;\n"
"border:1px solid gray;\n"
"qproperty-alignment:'AlignCenter';"));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(260, 100, 241, 31));
        QFont font3;
        font3.setPointSize(11);
        font3.setBold(true);
        font3.setWeight(75);
        label_5->setFont(font3);
        pushButton_exp = new QPushButton(centralWidget);
        pushButton_exp->setObjectName(QStringLiteral("pushButton_exp"));
        pushButton_exp->setGeometry(QRect(190, 320, 58, 58));
        pushButton_exp->setFont(font2);
        pushButton_exp->setStyleSheet(QLatin1String("border:1px solid gray;\n"
"background-color:rgb(214, 214, 214)"));
        MainWindow->setCentralWidget(centralWidget);
        label->raise();
        pushButton_clear->raise();
        pushButton_div->raise();
        pushButton_rightbracket->raise();
        pushButton_leftbracket->raise();
        pushButton_mult->raise();
        pushButton_n7->raise();
        pushButton_n9->raise();
        pushButton_n8->raise();
        pushButton_minus->raise();
        pushButton_n4->raise();
        pushButton_n6->raise();
        pushButton_n5->raise();
        pushButton_equal->raise();
        pushButton_n0->raise();
        pushButton_n1->raise();
        pushButton_n2->raise();
        pushButton_add->raise();
        pushButton_n3->raise();
        label_2->raise();
        label_3->raise();
        label_5->raise();
        pushButton_exp->raise();
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        label->setText(QApplication::translate("MainWindow", "0", 0));
        pushButton_clear->setText(QApplication::translate("MainWindow", "C", 0));
        pushButton_div->setText(QApplication::translate("MainWindow", "/", 0));
        pushButton_rightbracket->setText(QApplication::translate("MainWindow", ")", 0));
        pushButton_leftbracket->setText(QApplication::translate("MainWindow", "(", 0));
        pushButton_mult->setText(QApplication::translate("MainWindow", "*", 0));
        pushButton_n7->setText(QApplication::translate("MainWindow", "7", 0));
        pushButton_n9->setText(QApplication::translate("MainWindow", "9", 0));
        pushButton_n8->setText(QApplication::translate("MainWindow", "8", 0));
        pushButton_minus->setText(QApplication::translate("MainWindow", "-", 0));
        pushButton_n4->setText(QApplication::translate("MainWindow", "4", 0));
        pushButton_n6->setText(QApplication::translate("MainWindow", "6", 0));
        pushButton_n5->setText(QApplication::translate("MainWindow", "5", 0));
        pushButton_equal->setText(QApplication::translate("MainWindow", "=", 0));
        pushButton_n0->setText(QApplication::translate("MainWindow", "0", 0));
        pushButton_n1->setText(QApplication::translate("MainWindow", "1", 0));
        pushButton_n2->setText(QApplication::translate("MainWindow", "2", 0));
        pushButton_add->setText(QApplication::translate("MainWindow", "+", 0));
        pushButton_n3->setText(QApplication::translate("MainWindow", "3", 0));
        label_2->setText(QApplication::translate("MainWindow", "0", 0));
        label_3->setText(QApplication::translate("MainWindow", "0", 0));
        label_5->setText(QApplication::translate("MainWindow", "Conversion from Infix to Postfix", 0));
        pushButton_exp->setText(QApplication::translate("MainWindow", "^", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
