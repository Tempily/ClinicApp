/********************************************************************************
** Form generated from reading UI file 'secondwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SECONDWINDOW_H
#define UI_SECONDWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_secondwindow
{
public:
    QTableView *tableView;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QFrame *line;
    QLabel *label;
    QPushButton *pushButton_3;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_5;
    QComboBox *comboBox_4;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    QComboBox *comboBox_3;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QComboBox *comboBox_2;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_2;
    QComboBox *comboBox;

    void setupUi(QDialog *secondwindow)
    {
        if (secondwindow->objectName().isEmpty())
            secondwindow->setObjectName("secondwindow");
        secondwindow->resize(1082, 493);
        tableView = new QTableView(secondwindow);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(30, 40, 501, 271));
        pushButton = new QPushButton(secondwindow);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(20, 10, 100, 32));
        pushButton_2 = new QPushButton(secondwindow);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(420, 10, 100, 32));
        QFont font;
        font.setFamilies({QString::fromUtf8(".AppleSystemUIFont")});
        pushButton_2->setFont(font);
        line = new QFrame(secondwindow);
        line->setObjectName("line");
        line->setGeometry(QRect(530, 30, 20, 311));
        line->setFrameShape(QFrame::Shape::VLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);
        label = new QLabel(secondwindow);
        label->setObjectName("label");
        label->setGeometry(QRect(730, 50, 261, 16));
        pushButton_3 = new QPushButton(secondwindow);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(960, 320, 100, 32));
        layoutWidget = new QWidget(secondwindow);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(560, 200, 214, 32));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName("label_5");

        horizontalLayout->addWidget(label_5);

        comboBox_4 = new QComboBox(layoutWidget);
        comboBox_4->addItem(QString());
        comboBox_4->addItem(QString());
        comboBox_4->setObjectName("comboBox_4");

        horizontalLayout->addWidget(comboBox_4);

        layoutWidget1 = new QWidget(secondwindow);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(560, 160, 287, 32));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget1);
        label_4->setObjectName("label_4");

        horizontalLayout_2->addWidget(label_4);

        comboBox_3 = new QComboBox(layoutWidget1);
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->setObjectName("comboBox_3");

        horizontalLayout_2->addWidget(comboBox_3);

        layoutWidget2 = new QWidget(secondwindow);
        layoutWidget2->setObjectName("layoutWidget2");
        layoutWidget2->setGeometry(QRect(560, 120, 199, 32));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget2);
        label_3->setObjectName("label_3");

        horizontalLayout_3->addWidget(label_3);

        comboBox_2 = new QComboBox(layoutWidget2);
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName("comboBox_2");

        horizontalLayout_3->addWidget(comboBox_2);

        layoutWidget3 = new QWidget(secondwindow);
        layoutWidget3->setObjectName("layoutWidget3");
        layoutWidget3->setGeometry(QRect(560, 80, 181, 32));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget3);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget3);
        label_2->setObjectName("label_2");

        horizontalLayout_4->addWidget(label_2);

        comboBox = new QComboBox(layoutWidget3);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");

        horizontalLayout_4->addWidget(comboBox);

        layoutWidget->raise();
        layoutWidget->raise();
        layoutWidget->raise();
        layoutWidget->raise();
        tableView->raise();
        pushButton->raise();
        pushButton_2->raise();
        line->raise();
        label->raise();
        pushButton_3->raise();

        retranslateUi(secondwindow);

        QMetaObject::connectSlotsByName(secondwindow);
    } // setupUi

    void retranslateUi(QDialog *secondwindow)
    {
        secondwindow->setWindowTitle(QCoreApplication::translate("secondwindow", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("secondwindow", "Add", nullptr));
        pushButton_2->setText(QCoreApplication::translate("secondwindow", "Delete", nullptr));
        label->setText(QCoreApplication::translate("secondwindow", "Choose a doctor", nullptr));
        pushButton_3->setText(QCoreApplication::translate("secondwindow", "Submit", nullptr));
        label_5->setText(QCoreApplication::translate("secondwindow", "Do you have our card?", nullptr));
        comboBox_4->setItemText(0, QCoreApplication::translate("secondwindow", "Yes", nullptr));
        comboBox_4->setItemText(1, QCoreApplication::translate("secondwindow", "No", nullptr));

        label_4->setText(QCoreApplication::translate("secondwindow", "Reason", nullptr));
        comboBox_3->setItemText(0, QCoreApplication::translate("secondwindow", "have a pain in your body", nullptr));
        comboBox_3->setItemText(1, QCoreApplication::translate("secondwindow", "have problems with psyche", nullptr));
        comboBox_3->setItemText(2, QCoreApplication::translate("secondwindow", "have problem with a teeth", nullptr));
        comboBox_3->setItemText(3, QCoreApplication::translate("secondwindow", "want to be a client of our clinic", nullptr));

        label_3->setText(QCoreApplication::translate("secondwindow", "Speciality", nullptr));
        comboBox_2->setItemText(0, QCoreApplication::translate("secondwindow", "surgeon", nullptr));
        comboBox_2->setItemText(1, QCoreApplication::translate("secondwindow", "therapy", nullptr));
        comboBox_2->setItemText(2, QCoreApplication::translate("secondwindow", "dentist", nullptr));
        comboBox_2->setItemText(3, QCoreApplication::translate("secondwindow", "pscychologist", nullptr));

        label_2->setText(QCoreApplication::translate("secondwindow", "Department", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("secondwindow", "1", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("secondwindow", "5", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("secondwindow", "12", nullptr));

    } // retranslateUi

};

namespace Ui {
    class secondwindow: public Ui_secondwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SECONDWINDOW_H
