/********************************************************************************
** Form generated from reading UI file 'multiedges.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MULTIEDGES_H
#define UI_MULTIEDGES_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MultiEdges
{
public:

    void setupUi(QWidget *MultiEdges)
    {
        if (MultiEdges->objectName().isEmpty())
            MultiEdges->setObjectName(QStringLiteral("MultiEdges"));
        MultiEdges->resize(400, 300);

        retranslateUi(MultiEdges);

        QMetaObject::connectSlotsByName(MultiEdges);
    } // setupUi

    void retranslateUi(QWidget *MultiEdges)
    {
        MultiEdges->setWindowTitle(QApplication::translate("MultiEdges", "MultiEdges", 0));
    } // retranslateUi

};

namespace Ui {
    class MultiEdges: public Ui_MultiEdges {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MULTIEDGES_H
