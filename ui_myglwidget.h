/********************************************************************************
** Form generated from reading UI file 'myglwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYGLWIDGET_H
#define UI_MYGLWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MyGLWidget
{
public:

    void setupUi(QWidget *MyGLWidget)
    {
        if (MyGLWidget->objectName().isEmpty())
            MyGLWidget->setObjectName(QStringLiteral("MyGLWidget"));
        MyGLWidget->resize(400, 300);

        retranslateUi(MyGLWidget);

        QMetaObject::connectSlotsByName(MyGLWidget);
    } // setupUi

    void retranslateUi(QWidget *MyGLWidget)
    {
        MyGLWidget->setWindowTitle(QApplication::translate("MyGLWidget", "MyGLWidget", 0));
    } // retranslateUi

};

namespace Ui {
    class MyGLWidget: public Ui_MyGLWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYGLWIDGET_H
