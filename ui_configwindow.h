/********************************************************************************
** Form generated from reading UI file 'configwindow.ui'
**
** Created: Sun Feb 26 04:57:28 2012
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIGWINDOW_H
#define UI_CONFIGWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QListView>
#include <QtGui/QMainWindow>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QStackedWidget>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ConfigWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QStackedWidget *stackedWidget;
    QWidget *page_5;
    QGridLayout *gridLayout_2;
    QListView *listView;
    QFrame *frame;
    QGridLayout *gridLayout_3;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *addpony_button;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_2;
    QLabel *label_ponyname;
    QSpacerItem *verticalSpacer_3;
    QLabel *image_label;
    QWidget *page_6;
    QToolBar *toolBar;

    void setupUi(QMainWindow *ConfigWindow)
    {
        if (ConfigWindow->objectName().isEmpty())
            ConfigWindow->setObjectName(QString::fromUtf8("ConfigWindow"));
        ConfigWindow->resize(800, 592);
        centralwidget = new QWidget(ConfigWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        page_5 = new QWidget();
        page_5->setObjectName(QString::fromUtf8("page_5"));
        gridLayout_2 = new QGridLayout(page_5);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        listView = new QListView(page_5);
        listView->setObjectName(QString::fromUtf8("listView"));
        listView->setEditTriggers(QAbstractItemView::NoEditTriggers);
        listView->setProperty("showDropIndicator", QVariant(false));
        listView->setAlternatingRowColors(true);
        listView->setSelectionRectVisible(true);

        gridLayout_2->addWidget(listView, 0, 0, 3, 1);

        frame = new QFrame(page_5);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setMinimumSize(QSize(250, 0));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout_3 = new QGridLayout(frame);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_2, 7, 0, 1, 1);

        addpony_button = new QPushButton(frame);
        addpony_button->setObjectName(QString::fromUtf8("addpony_button"));

        gridLayout_3->addWidget(addpony_button, 7, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer, 5, 0, 1, 2);

        verticalSpacer_2 = new QSpacerItem(20, 80, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_3->addItem(verticalSpacer_2, 3, 0, 1, 2);

        label_ponyname = new QLabel(frame);
        label_ponyname->setObjectName(QString::fromUtf8("label_ponyname"));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        label_ponyname->setFont(font);
        label_ponyname->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_ponyname, 1, 0, 1, 2);

        verticalSpacer_3 = new QSpacerItem(20, 100, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_3->addItem(verticalSpacer_3, 0, 0, 1, 2);

        image_label = new QLabel(frame);
        image_label->setObjectName(QString::fromUtf8("image_label"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(image_label->sizePolicy().hasHeightForWidth());
        image_label->setSizePolicy(sizePolicy);
        image_label->setMinimumSize(QSize(0, 0));
        image_label->setBaseSize(QSize(0, 0));
        image_label->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(image_label, 4, 0, 1, 2);


        gridLayout_2->addWidget(frame, 0, 1, 3, 3);

        stackedWidget->addWidget(page_5);
        page_6 = new QWidget();
        page_6->setObjectName(QString::fromUtf8("page_6"));
        stackedWidget->addWidget(page_6);

        gridLayout->addWidget(stackedWidget, 0, 0, 1, 1);

        ConfigWindow->setCentralWidget(centralwidget);
        toolBar = new QToolBar(ConfigWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(toolBar->sizePolicy().hasHeightForWidth());
        toolBar->setSizePolicy(sizePolicy1);
        toolBar->setMovable(false);
        toolBar->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        toolBar->setFloatable(false);
        ConfigWindow->addToolBar(Qt::LeftToolBarArea, toolBar);

        retranslateUi(ConfigWindow);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(ConfigWindow);
    } // setupUi

    void retranslateUi(QMainWindow *ConfigWindow)
    {
        ConfigWindow->setWindowTitle(QApplication::translate("ConfigWindow", "Qt Ponies", 0, QApplication::UnicodeUTF8));
        addpony_button->setText(QApplication::translate("ConfigWindow", "Add pony", 0, QApplication::UnicodeUTF8));
        label_ponyname->setText(QString());
        image_label->setText(QString());
        toolBar->setWindowTitle(QApplication::translate("ConfigWindow", "toolBar", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ConfigWindow: public Ui_ConfigWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIGWINDOW_H
