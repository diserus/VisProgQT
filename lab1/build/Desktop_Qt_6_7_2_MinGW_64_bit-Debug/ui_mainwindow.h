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
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *ShowHistory;
    QAction *HideHistory;
    QAction *Save;
    QAction *About;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QLabel *displayPanel;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *actionClear;
    QPushButton *actionDel;
    QPushButton *actionPercent;
    QPushButton *actionDiv;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *num7;
    QPushButton *num8;
    QPushButton *num9;
    QPushButton *actionMul;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *num4;
    QPushButton *num5;
    QPushButton *num6;
    QPushButton *actionMinus;
    QHBoxLayout *horizontalLayout;
    QPushButton *num1;
    QPushButton *num2;
    QPushButton *num3;
    QPushButton *actionPlus;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *num0;
    QPushButton *comma;
    QPushButton *actionSign;
    QPushButton *actionCalc;
    QStatusBar *statusBar;
    QMenuBar *menuBar;
    QMenu *Menu;
    QMenu *History;
    QMenu *Info;
    QButtonGroup *actionGroup;
    QButtonGroup *numberGroup;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->setEnabled(true);
        MainWindow->resize(306, 409);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(306, 319));
        MainWindow->setMaximumSize(QSize(16777215, 16777215));
        MainWindow->setStyleSheet(QString::fromUtf8("QWidget {\n"
"    background-color: #f8f9fa;\n"
"    font-family: 'Segoe UI';\n"
"    border: none;\n"
"}\n"
"QLabel#displayPanel {\n"
"    background-color: #ffffff;\n"
"    border: 2px solid #e9ecef;\n"
"    border-radius: 12px;\n"
"    padding: 10px 15px;\n"
"    font-size: 28px;\n"
"    font-weight: 500;\n"
"    color: #2c3e50;\n"
"    min-height: 60px;\n"
"    max-height: 60px;\n"
"    margin-bottom: 15px;\n"
"}\n"
"\n"
"QPushButton {\n"
"    background-color: #ffffff;\n"
"    border: 2px solid #e9ecef;\n"
"    border-radius: 12px;\n"
"    font-size: 18px;\n"
"    font-weight: 600;\n"
"    color: #2c3e50;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: #f8f9fa;\n"
"    border-color: #3490cd;\n"
"}\n"
"\n"
"/* \320\255\321\204\321\204\320\265\320\272\321\202\321\213 \320\277\321\200\320\270 \320\275\320\260\320\266\320\260\321\202\320\270\320\270 */\n"
"QPushButton:pressed {\n"
"    background-color: #e9ecef;\n"
"}\n"
"\n"
"/* \320\241\321\202\320\270\320\273\321\214 \320\264\320\273\321\217 \321\206"
                        "\320\270\321\204\321\200\320\276\320\262\321\213\321\205 \320\272\320\275\320\276\320\277\320\276\320\272 */\n"
"QPushButton[buttonGroup=\"numberGroup\"] {\n"
"    background-color: #ffffff;\n"
"    color: #2c3e50;\n"
"    font-weight: 600;\n"
"}\n"
"\n"
"QPushButton[buttonGroup=\"numberGroup\"]:hover {\n"
"    background-color: #f1f3f5;\n"
"    border-color: #adb5bd;\n"
"}\n"
"\n"
"/* \320\241\321\202\320\270\320\273\321\214 \320\264\320\273\321\217 \320\272\320\275\320\276\320\277\320\276\320\272 \320\276\320\277\320\265\321\200\320\260\321\206\320\270\320\271 */\n"
"QPushButton[buttonGroup=\"actionGroup\"] {\n"
"    background-color: #e9ecef;\n"
"    color: #3490cd;\n"
"    font-weight: 700;\n"
"}\n"
"\n"
"QPushButton[buttonGroup=\"actionGroup\"]:hover {\n"
"    background-color: #dee2e6;\n"
"    border-color: #3490cd;\n"
"}\n"
"\n"
"/* \320\241\321\202\320\270\320\273\321\214 \320\264\320\273\321\217 \320\272\320\275\320\276\320\277\320\272\320\270 \321\200\320\260\320\262\320\275\320\276 */\n"
"QPushButto"
                        "n#actionCalc {\n"
"    background-color: #3490cd;\n"
"    color: #ffffff;\n"
"    border: 2px solid #3490cd;\n"
"    font-weight: 700;\n"
"}\n"
"\n"
"QPushButton#actionCalc:hover {\n"
"    background-color: #2c7dbd;\n"
"    border-color: #2c7dbd;\n"
"}\n"
"\n"
"QPushButton#actionCalc:pressed {\n"
"    background-color: #256aad;\n"
"}\n"
"\n"
"/* \320\241\321\202\320\270\320\273\321\214 \320\264\320\273\321\217 \320\272\320\275\320\276\320\277\320\272\320\270 \320\276\321\207\320\270\321\201\321\202\320\272\320\270 */\n"
"QPushButton#actionClear {\n"
"    background-color: #ff6b6b;\n"
"    color: #ffffff;\n"
"    border: 2px solid #ff6b6b;\n"
"    font-weight: 600;\n"
"}\n"
"\n"
"QPushButton#actionClear:hover {\n"
"    background-color: #fa5252;\n"
"    border-color: #fa5252;\n"
"}\n"
"\n"
"QPushButton#actionClear:pressed {\n"
"    background-color: #e03131;\n"
"}\n"
"\n"
"/* \320\241\321\202\320\270\320\273\321\214 \320\264\320\273\321\217 \321\201\320\277\320\265\321\206\320\270\320\260\320\273\321\214\320\275"
                        "\321\213\321\205 \320\272\320\275\320\276\320\277\320\276\320\272 (Del, %, +/-) */\n"
"QPushButton#actionDel,\n"
"QPushButton#actionPercent,\n"
"QPushButton#actionSign {\n"
"    background-color: #f8f9fa;\n"
"    color: #6c757d;\n"
"    font-weight: 500;\n"
"}\n"
"\n"
"QPushButton#actionDel:hover,\n"
"QPushButton#actionPercent:hover,\n"
"QPushButton#actionSign:hover {\n"
"    background-color: #e9ecef;\n"
"    border-color: #adb5bd;\n"
"}\n"
"\n"
"/* \320\241\321\202\320\270\320\273\321\214 \320\264\320\273\321\217 \320\272\320\275\320\276\320\277\320\272\320\270 \320\267\320\260\320\277\321\217\321\202\320\276\320\271 */\n"
"QPushButton#comma {\n"
"    background-color: #ffffff;\n"
"    color: #2c3e50;\n"
"    font-weight: 700;\n"
"}\n"
"\n"
"QPushButton#comma:hover {\n"
"    background-color: #f1f3f5;\n"
"    border-color: #adb5bd;\n"
"}\n"
"/* \320\241\321\202\320\270\320\273\321\214 \321\201\321\202\321\200\320\276\320\272\320\270 \320\274\320\265\320\275\321\216 (\320\262\320\265\321\200\321\205\320\275\321"
                        "\217\321\217 \320\277\320\260\320\275\320\265\320\273\321\214) */\n"
"QMenuBar {\n"
"    background-color: #ffffff;\n"
"    color: #2c3e50;\n"
"    font-size: 11px;\n"
"    font-weight: 600;\n"
"    padding: 2px;\n"
"    border: none;\n"
"}\n"
"\n"
"QMenuBar::item {\n"
"    background-color: transparent;\n"
"    padding: 6px 12px;\n"
"    border-radius: 6px;\n"
"}\n"
"\n"
"QMenuBar::item:selected { \n"
"    background-color: #e9ecef;\n"
"    color: #2c3e50; \n"
"}\n"
"\n"
"QMenuBar::item:pressed {\n"
"    background-color: #dee2e6;\n"
"    color: #2c3e50;\n"
"}\n"
"\n"
"QMenu {\n"
"    background-color: #ffffff;\n"
"    border: 1px solid #e9ecef;\n"
"    border-radius: 8px;\n"
"    padding: 4px 0px;\n"
"    font-size: 11px;\n"
"}\n"
"\n"
"QMenu::item {\n"
"    padding: 8px 24px;\n"
"    border-radius: 6px;\n"
"}\n"
"\n"
"QMenu::item:selected {  \n"
"    background-color: #e9ecef;\n"
"    color: #2c3e50; \n"
"}\n"
"\n"
"QMenu::item:pressed {\n"
"    background-color: #dee2e6;\n"
"    color: #2c3e50;\n"
"}\n"
"\n"
""
                        "QMenu::separator {\n"
"    height: 1px;\n"
"    background: #e9ecef;\n"
"    margin: 4px 0;\n"
"}"));
        ShowHistory = new QAction(MainWindow);
        ShowHistory->setObjectName("ShowHistory");
        HideHistory = new QAction(MainWindow);
        HideHistory->setObjectName("HideHistory");
        Save = new QAction(MainWindow);
        Save->setObjectName("Save");
        About = new QAction(MainWindow);
        About->setObjectName("About");
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName("centralWidget");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(centralWidget->sizePolicy().hasHeightForWidth());
        centralWidget->setSizePolicy(sizePolicy1);
        centralWidget->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"min-width: 65;\n"
"min-height: 40;\n"
"max-width: 65;\n"
"max-height: 40;\n"
"}"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName("verticalLayout");
        displayPanel = new QLabel(centralWidget);
        displayPanel->setObjectName("displayPanel");
        displayPanel->setMinimumSize(QSize(290, 97));
        displayPanel->setMaximumSize(QSize(16777215, 97));
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe UI")});
        font.setWeight(QFont::Medium);
        font.setItalic(false);
        font.setKerning(true);
        displayPanel->setFont(font);
        displayPanel->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        displayPanel->setStyleSheet(QString::fromUtf8("border: 1 solid #b8b8b8;\n"
"background-color: #fff;"));
        displayPanel->setScaledContents(true);
        displayPanel->setAlignment(Qt::AlignmentFlag::AlignRight);
        displayPanel->setWordWrap(true);
        displayPanel->setTextInteractionFlags(Qt::TextInteractionFlag::TextSelectableByKeyboard|Qt::TextInteractionFlag::TextSelectableByMouse);

        verticalLayout->addWidget(displayPanel);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        actionClear = new QPushButton(centralWidget);
        actionClear->setObjectName("actionClear");
        actionClear->setStyleSheet(QString::fromUtf8("/*background-color: #cb1a21;\n"
"color: #ffffff;*/"));

        horizontalLayout_5->addWidget(actionClear);

        actionDel = new QPushButton(centralWidget);
        actionDel->setObjectName("actionDel");

        horizontalLayout_5->addWidget(actionDel);

        actionPercent = new QPushButton(centralWidget);
        actionPercent->setObjectName("actionPercent");

        horizontalLayout_5->addWidget(actionPercent);

        actionDiv = new QPushButton(centralWidget);
        actionGroup = new QButtonGroup(MainWindow);
        actionGroup->setObjectName("actionGroup");
        actionGroup->addButton(actionDiv);
        actionDiv->setObjectName("actionDiv");

        horizontalLayout_5->addWidget(actionDiv);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        num7 = new QPushButton(centralWidget);
        numberGroup = new QButtonGroup(MainWindow);
        numberGroup->setObjectName("numberGroup");
        numberGroup->addButton(num7);
        num7->setObjectName("num7");

        horizontalLayout_3->addWidget(num7);

        num8 = new QPushButton(centralWidget);
        numberGroup->addButton(num8);
        num8->setObjectName("num8");
        sizePolicy1.setHeightForWidth(num8->sizePolicy().hasHeightForWidth());
        num8->setSizePolicy(sizePolicy1);

        horizontalLayout_3->addWidget(num8);

        num9 = new QPushButton(centralWidget);
        numberGroup->addButton(num9);
        num9->setObjectName("num9");

        horizontalLayout_3->addWidget(num9);

        actionMul = new QPushButton(centralWidget);
        actionGroup->addButton(actionMul);
        actionMul->setObjectName("actionMul");

        horizontalLayout_3->addWidget(actionMul);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        num4 = new QPushButton(centralWidget);
        numberGroup->addButton(num4);
        num4->setObjectName("num4");

        horizontalLayout_2->addWidget(num4);

        num5 = new QPushButton(centralWidget);
        numberGroup->addButton(num5);
        num5->setObjectName("num5");

        horizontalLayout_2->addWidget(num5);

        num6 = new QPushButton(centralWidget);
        numberGroup->addButton(num6);
        num6->setObjectName("num6");

        horizontalLayout_2->addWidget(num6);

        actionMinus = new QPushButton(centralWidget);
        actionGroup->addButton(actionMinus);
        actionMinus->setObjectName("actionMinus");

        horizontalLayout_2->addWidget(actionMinus);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(-1, -1, -1, 0);
        num1 = new QPushButton(centralWidget);
        numberGroup->addButton(num1);
        num1->setObjectName("num1");
        sizePolicy1.setHeightForWidth(num1->sizePolicy().hasHeightForWidth());
        num1->setSizePolicy(sizePolicy1);
        num1->setMinimumSize(QSize(69, 44));
        num1->setMaximumSize(QSize(69, 44));

        horizontalLayout->addWidget(num1);

        num2 = new QPushButton(centralWidget);
        numberGroup->addButton(num2);
        num2->setObjectName("num2");
        sizePolicy1.setHeightForWidth(num2->sizePolicy().hasHeightForWidth());
        num2->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(num2);

        num3 = new QPushButton(centralWidget);
        numberGroup->addButton(num3);
        num3->setObjectName("num3");
        sizePolicy1.setHeightForWidth(num3->sizePolicy().hasHeightForWidth());
        num3->setSizePolicy(sizePolicy1);
        num3->setMaximumSize(QSize(69, 44));

        horizontalLayout->addWidget(num3);

        actionPlus = new QPushButton(centralWidget);
        actionGroup->addButton(actionPlus);
        actionPlus->setObjectName("actionPlus");

        horizontalLayout->addWidget(actionPlus);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(-1, -1, 0, -1);
        num0 = new QPushButton(centralWidget);
        numberGroup->addButton(num0);
        num0->setObjectName("num0");

        horizontalLayout_4->addWidget(num0);

        comma = new QPushButton(centralWidget);
        comma->setObjectName("comma");

        horizontalLayout_4->addWidget(comma);

        actionSign = new QPushButton(centralWidget);
        actionSign->setObjectName("actionSign");

        horizontalLayout_4->addWidget(actionSign);

        actionCalc = new QPushButton(centralWidget);
        actionCalc->setObjectName("actionCalc");
        actionCalc->setStyleSheet(QString::fromUtf8("/*background-color: #3490cd;\n"
"color: #ffffff;*/"));

        horizontalLayout_4->addWidget(actionCalc);


        verticalLayout->addLayout(horizontalLayout_4);

        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName("statusBar");
        MainWindow->setStatusBar(statusBar);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 306, 31));
        Menu = new QMenu(menuBar);
        Menu->setObjectName("Menu");
        History = new QMenu(menuBar);
        History->setObjectName("History");
        Info = new QMenu(menuBar);
        Info->setObjectName("Info");
        MainWindow->setMenuBar(menuBar);

        menuBar->addAction(Menu->menuAction());
        menuBar->addAction(History->menuAction());
        menuBar->addAction(Info->menuAction());
        Menu->addAction(Save);
        History->addAction(ShowHistory);
        History->addAction(HideHistory);
        Info->addAction(About);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Calculator", nullptr));
        ShowHistory->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\320\272\320\260\320\267\320\260\321\202\321\214", nullptr));
        HideHistory->setText(QCoreApplication::translate("MainWindow", "\320\241\320\272\321\200\321\213\321\202\321\214", nullptr));
        Save->setText(QCoreApplication::translate("MainWindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", nullptr));
        About->setText(QCoreApplication::translate("MainWindow", "\320\236 \320\277\321\200\320\270\320\273\320\276\320\266\320\265\320\275\320\270\320\270", nullptr));
        displayPanel->setText(QString());
        actionClear->setText(QCoreApplication::translate("MainWindow", "C", nullptr));
        actionDel->setText(QCoreApplication::translate("MainWindow", "Del", nullptr));
        actionPercent->setText(QCoreApplication::translate("MainWindow", "%", nullptr));
        actionDiv->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        num7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        num8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        num9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        actionMul->setText(QCoreApplication::translate("MainWindow", "x", nullptr));
        num4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        num5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        num6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        actionMinus->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        num1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        num2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        num3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        actionPlus->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        num0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        comma->setText(QCoreApplication::translate("MainWindow", ".", nullptr));
        actionSign->setText(QCoreApplication::translate("MainWindow", "+/-", nullptr));
        actionCalc->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        Menu->setTitle(QCoreApplication::translate("MainWindow", "\320\234\320\265\320\275\321\216", nullptr));
        History->setTitle(QCoreApplication::translate("MainWindow", "\320\230\321\201\321\202\320\276\321\200\320\270\321\217", nullptr));
        Info->setTitle(QCoreApplication::translate("MainWindow", "\320\241\320\277\321\200\320\260\320\262\320\272\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
