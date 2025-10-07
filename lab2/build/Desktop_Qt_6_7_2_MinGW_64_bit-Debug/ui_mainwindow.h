/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *Exit;
    QAction *Copy;
    QAction *Paste;
    QAction *Cut;
    QAction *Clear;
    QAction *Undo;
    QAction *Redo;
    QAction *Search;
    QAction *actionTXT;
    QAction *actionJSON;
    QAction *actionTXT_2;
    QAction *actionJSON_2;
    QAction *SaveAs1;
    QAction *OpenAs1;
    QAction *Exit1;
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QGroupBox *groupBox;
    QFormLayout *formLayout;
    QLabel *label;
    QComboBox *langComboBox;
    QLabel *label_2;
    QComboBox *themeComboBox;
    QPlainTextEdit *plainTextEdit;
    QMenuBar *menubar;
    QMenu *FileMenu;
    QMenu *EditMenu;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        Exit = new QAction(MainWindow);
        Exit->setObjectName("Exit");
        Copy = new QAction(MainWindow);
        Copy->setObjectName("Copy");
        Paste = new QAction(MainWindow);
        Paste->setObjectName("Paste");
        Cut = new QAction(MainWindow);
        Cut->setObjectName("Cut");
        Clear = new QAction(MainWindow);
        Clear->setObjectName("Clear");
        Undo = new QAction(MainWindow);
        Undo->setObjectName("Undo");
        Redo = new QAction(MainWindow);
        Redo->setObjectName("Redo");
        Search = new QAction(MainWindow);
        Search->setObjectName("Search");
        actionTXT = new QAction(MainWindow);
        actionTXT->setObjectName("actionTXT");
        actionJSON = new QAction(MainWindow);
        actionJSON->setObjectName("actionJSON");
        actionTXT_2 = new QAction(MainWindow);
        actionTXT_2->setObjectName("actionTXT_2");
        actionJSON_2 = new QAction(MainWindow);
        actionJSON_2->setObjectName("actionJSON_2");
        SaveAs1 = new QAction(MainWindow);
        SaveAs1->setObjectName("SaveAs1");
        OpenAs1 = new QAction(MainWindow);
        OpenAs1->setObjectName("OpenAs1");
        Exit1 = new QAction(MainWindow);
        Exit1->setObjectName("Exit1");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName("horizontalLayout");
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        groupBox->setMinimumSize(QSize(0, 0));
        formLayout = new QFormLayout(groupBox);
        formLayout->setObjectName("formLayout");
        label = new QLabel(groupBox);
        label->setObjectName("label");

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        langComboBox = new QComboBox(groupBox);
        langComboBox->setObjectName("langComboBox");

        formLayout->setWidget(1, QFormLayout::LabelRole, langComboBox);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");

        formLayout->setWidget(2, QFormLayout::LabelRole, label_2);

        themeComboBox = new QComboBox(groupBox);
        themeComboBox->setObjectName("themeComboBox");

        formLayout->setWidget(3, QFormLayout::LabelRole, themeComboBox);


        horizontalLayout->addWidget(groupBox);

        plainTextEdit = new QPlainTextEdit(centralwidget);
        plainTextEdit->setObjectName("plainTextEdit");

        horizontalLayout->addWidget(plainTextEdit);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 26));
        FileMenu = new QMenu(menubar);
        FileMenu->setObjectName("FileMenu");
        EditMenu = new QMenu(menubar);
        EditMenu->setObjectName("EditMenu");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(FileMenu->menuAction());
        menubar->addAction(EditMenu->menuAction());
        FileMenu->addAction(SaveAs1);
        FileMenu->addAction(OpenAs1);
        FileMenu->addAction(Exit1);
        EditMenu->addAction(Copy);
        EditMenu->addAction(Paste);
        EditMenu->addAction(Cut);
        EditMenu->addAction(Clear);
        EditMenu->addAction(Undo);
        EditMenu->addAction(Redo);
        EditMenu->addAction(Search);

        retranslateUi(MainWindow);
        QObject::connect(Undo, &QAction::triggered, plainTextEdit, qOverload<>(&QPlainTextEdit::undo));
        QObject::connect(Clear, &QAction::triggered, plainTextEdit, qOverload<>(&QPlainTextEdit::clear));
        QObject::connect(Copy, &QAction::triggered, plainTextEdit, qOverload<>(&QPlainTextEdit::copy));
        QObject::connect(Cut, &QAction::triggered, plainTextEdit, qOverload<>(&QPlainTextEdit::cut));
        QObject::connect(Redo, &QAction::triggered, plainTextEdit, qOverload<>(&QPlainTextEdit::redo));
        QObject::connect(Paste, &QAction::triggered, plainTextEdit, qOverload<>(&QPlainTextEdit::paste));

        langComboBox->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        Exit->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\321\205\320\276\320\264", nullptr));
        Copy->setText(QCoreApplication::translate("MainWindow", "\320\232\320\276\320\277\320\270\321\200\320\276\320\262\320\260\321\202\321\214", nullptr));
        Paste->setText(QCoreApplication::translate("MainWindow", "\320\222\321\201\321\202\320\260\320\262\320\270\321\202\321\214", nullptr));
        Cut->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\321\200\320\265\320\267\320\260\321\202\321\214", nullptr));
        Clear->setText(QCoreApplication::translate("MainWindow", "\320\236\321\207\320\270\321\201\321\202\320\270\321\202\321\214", nullptr));
        Undo->setText(QCoreApplication::translate("MainWindow", "\320\236\321\202\320\274\320\265\320\275\320\270\321\202\321\214", nullptr));
        Redo->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\320\262\321\202\320\276\321\200\320\270\321\202\321\214", nullptr));
        Search->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\320\270\321\201\320\272", nullptr));
        actionTXT->setText(QCoreApplication::translate("MainWindow", "TXT", nullptr));
        actionJSON->setText(QCoreApplication::translate("MainWindow", "JSON", nullptr));
        actionTXT_2->setText(QCoreApplication::translate("MainWindow", "TXT", nullptr));
        actionJSON_2->setText(QCoreApplication::translate("MainWindow", "JSON", nullptr));
        SaveAs1->setText(QCoreApplication::translate("MainWindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214 \320\272\320\260\320\272...", nullptr));
        OpenAs1->setText(QCoreApplication::translate("MainWindow", "\320\236\321\202\320\272\321\200\321\213\321\202\321\214 \320\272\320\260\320\272...", nullptr));
        Exit1->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\321\205\320\276\320\264", nullptr));
        groupBox->setTitle(QString());
        label->setText(QCoreApplication::translate("MainWindow", "Language:", nullptr));
        langComboBox->setCurrentText(QString());
        label_2->setText(QCoreApplication::translate("MainWindow", "Theme", nullptr));
        FileMenu->setTitle(QCoreApplication::translate("MainWindow", "\320\244\320\260\320\271\320\273", nullptr));
        EditMenu->setTitle(QCoreApplication::translate("MainWindow", "\320\237\321\200\320\260\320\262\320\272\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
