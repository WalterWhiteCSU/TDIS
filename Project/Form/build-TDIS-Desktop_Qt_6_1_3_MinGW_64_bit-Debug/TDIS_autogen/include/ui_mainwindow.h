/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.1.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QWidget *display_widget;
    QVBoxLayout *verticalLayout;
    QWidget *input_widget;
    QHBoxLayout *horizontalLayout_6;
    QLabel *start_btn;
    QPushButton *read_file_btn;
    QPushButton *pushButton;
    QWidget *image_display_widget;
    QHBoxLayout *horizontalLayout_2;
    QWidget *origin_image_display_widget;
    QHBoxLayout *horizontalLayout_3;
    QLabel *origin_image_label;
    QWidget *recontruct_image_display_widget;
    QHBoxLayout *horizontalLayout_4;
    QLabel *reconstruct_image_label;
    QWidget *tree_display_widget;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_3;
    QWidget *detail_information_widget;
    QWidget *control_widget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1920, 1080);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        display_widget = new QWidget(centralwidget);
        display_widget->setObjectName(QString::fromUtf8("display_widget"));
        display_widget->setMinimumSize(QSize(1400, 0));
        display_widget->setStyleSheet(QString::fromUtf8(""));
        verticalLayout = new QVBoxLayout(display_widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        input_widget = new QWidget(display_widget);
        input_widget->setObjectName(QString::fromUtf8("input_widget"));
        input_widget->setMaximumSize(QSize(16777215, 30));
        input_widget->setStyleSheet(QString::fromUtf8("margin-size = 0"));
        horizontalLayout_6 = new QHBoxLayout(input_widget);
        horizontalLayout_6->setSpacing(0);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        start_btn = new QLabel(input_widget);
        start_btn->setObjectName(QString::fromUtf8("start_btn"));
        start_btn->setMaximumSize(QSize(150, 100));

        horizontalLayout_6->addWidget(start_btn);

        read_file_btn = new QPushButton(input_widget);
        read_file_btn->setObjectName(QString::fromUtf8("read_file_btn"));

        horizontalLayout_6->addWidget(read_file_btn);

        pushButton = new QPushButton(input_widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_6->addWidget(pushButton);


        verticalLayout->addWidget(input_widget);

        image_display_widget = new QWidget(display_widget);
        image_display_widget->setObjectName(QString::fromUtf8("image_display_widget"));
        image_display_widget->setMinimumSize(QSize(0, 600));
        horizontalLayout_2 = new QHBoxLayout(image_display_widget);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        origin_image_display_widget = new QWidget(image_display_widget);
        origin_image_display_widget->setObjectName(QString::fromUtf8("origin_image_display_widget"));
        origin_image_display_widget->setStyleSheet(QString::fromUtf8(""));
        horizontalLayout_3 = new QHBoxLayout(origin_image_display_widget);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        origin_image_label = new QLabel(origin_image_display_widget);
        origin_image_label->setObjectName(QString::fromUtf8("origin_image_label"));

        horizontalLayout_3->addWidget(origin_image_label);


        horizontalLayout_2->addWidget(origin_image_display_widget);

        recontruct_image_display_widget = new QWidget(image_display_widget);
        recontruct_image_display_widget->setObjectName(QString::fromUtf8("recontruct_image_display_widget"));
        recontruct_image_display_widget->setStyleSheet(QString::fromUtf8(""));
        horizontalLayout_4 = new QHBoxLayout(recontruct_image_display_widget);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        reconstruct_image_label = new QLabel(recontruct_image_display_widget);
        reconstruct_image_label->setObjectName(QString::fromUtf8("reconstruct_image_label"));

        horizontalLayout_4->addWidget(reconstruct_image_label);


        horizontalLayout_2->addWidget(recontruct_image_display_widget);


        verticalLayout->addWidget(image_display_widget);

        tree_display_widget = new QWidget(display_widget);
        tree_display_widget->setObjectName(QString::fromUtf8("tree_display_widget"));
        tree_display_widget->setStyleSheet(QString::fromUtf8(""));
        horizontalLayout_5 = new QHBoxLayout(tree_display_widget);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_3 = new QLabel(tree_display_widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_5->addWidget(label_3);


        verticalLayout->addWidget(tree_display_widget);


        horizontalLayout->addWidget(display_widget);

        detail_information_widget = new QWidget(centralwidget);
        detail_information_widget->setObjectName(QString::fromUtf8("detail_information_widget"));
        detail_information_widget->setMinimumSize(QSize(300, 0));
        detail_information_widget->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout->addWidget(detail_information_widget);

        control_widget = new QWidget(centralwidget);
        control_widget->setObjectName(QString::fromUtf8("control_widget"));
        control_widget->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout->addWidget(control_widget);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1920, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        start_btn->setText(QCoreApplication::translate("MainWindow", "          File:", nullptr));
        read_file_btn->setText(QCoreApplication::translate("MainWindow", "Read File", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Start", nullptr));
        origin_image_label->setText(QCoreApplication::translate("MainWindow", "Origin Image", nullptr));
        reconstruct_image_label->setText(QCoreApplication::translate("MainWindow", "Recontruct Image", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Tree View", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
