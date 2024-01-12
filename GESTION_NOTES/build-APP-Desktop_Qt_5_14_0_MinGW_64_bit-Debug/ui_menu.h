/********************************************************************************
** Form generated from reading UI file 'menu.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENU_H
#define UI_MENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Menu
{
public:
    QLabel *label_menu;
    QTabWidget *tabWidget;
    QWidget *tab_Etudiant;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *texte_CNE;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *texte_Nom;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *texte_prenom;
    QHBoxLayout *horizontalLayout_4;
    QHBoxLayout *horizontalLayout_16;
    QLabel *label_13;
    QDateTimeEdit *DN;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *pushButton;
    QPushButton *pushButton_afficher;
    QPushButton *pushButton_supprimer;
    QPushButton *pushButton_modifier;
    QPushButton *pushButton_ajouter;
    QWidget *tab_Matiere;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_11;
    QPushButton *pushButton_modifier_3;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_13;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_9;
    QLineEdit *texte_ID;
    QLabel *label_10;
    QLineEdit *texte_Libelle;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_11;
    QLineEdit *texte_Coeff;
    QHBoxLayout *horizontalLayout_15;
    QLabel *label_12;
    QLineEdit *texte_CIN_3;
    QPushButton *pushButton_supprimer_3;
    QPushButton *pushButton_afficher_3;
    QPushButton *pushButton_ajouter_3;
    QWidget *tab_Professeur;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_5;
    QLineEdit *texte_CIN_2;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_6;
    QLineEdit *texte_Nom_2;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_7;
    QLineEdit *texte_prenom_2;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_8;
    QLineEdit *texte_Telephone_2;
    QPushButton *pushButton_supprimer_2;
    QPushButton *pushButton_afficher_2;
    QPushButton *pushButton_ajouter_2;
    QPushButton *pushButton_modifier_2;
    QTableView *tableView;

    void setupUi(QDialog *Menu)
    {
        if (Menu->objectName().isEmpty())
            Menu->setObjectName(QString::fromUtf8("Menu"));
        Menu->resize(1120, 762);
        label_menu = new QLabel(Menu);
        label_menu->setObjectName(QString::fromUtf8("label_menu"));
        label_menu->setGeometry(QRect(30, 360, 91, 16));
        tabWidget = new QTabWidget(Menu);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(160, 20, 791, 371));
        QFont font;
        font.setFamily(QString::fromUtf8("Segoe UI Semibold"));
        font.setPointSize(9);
        font.setBold(true);
        font.setWeight(75);
        tabWidget->setFont(font);
        tabWidget->setStyleSheet(QString::fromUtf8("background-color:rgb(219, 194, 255);"));
        tab_Etudiant = new QWidget();
        tab_Etudiant->setObjectName(QString::fromUtf8("tab_Etudiant"));
        groupBox = new QGroupBox(tab_Etudiant);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(170, 10, 451, 181));
        groupBox->setFont(font);
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font1;
        font1.setPointSize(8);
        font1.setBold(true);
        font1.setWeight(75);
        label->setFont(font1);

        horizontalLayout->addWidget(label);

        texte_CNE = new QLineEdit(groupBox);
        texte_CNE->setObjectName(QString::fromUtf8("texte_CNE"));

        horizontalLayout->addWidget(texte_CNE);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font1);

        horizontalLayout_2->addWidget(label_2);

        texte_Nom = new QLineEdit(groupBox);
        texte_Nom->setObjectName(QString::fromUtf8("texte_Nom"));

        horizontalLayout_2->addWidget(texte_Nom);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font1);

        horizontalLayout_3->addWidget(label_3);

        texte_prenom = new QLineEdit(groupBox);
        texte_prenom->setObjectName(QString::fromUtf8("texte_prenom"));

        horizontalLayout_3->addWidget(texte_prenom);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setObjectName(QString::fromUtf8("horizontalLayout_16"));
        label_13 = new QLabel(groupBox);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setFont(font1);
        label_13->setTextFormat(Qt::AutoText);

        horizontalLayout_16->addWidget(label_13);

        DN = new QDateTimeEdit(groupBox);
        DN->setObjectName(QString::fromUtf8("DN"));
        DN->setEnabled(true);
        DN->setMouseTracking(false);
        DN->setWrapping(false);
        DN->setAlignment(Qt::AlignCenter);
        DN->setButtonSymbols(QAbstractSpinBox::PlusMinus);
        DN->setAccelerated(false);
        DN->setProperty("showGroupSeparator", QVariant(false));
        DN->setCalendarPopup(true);

        horizontalLayout_16->addWidget(DN);


        horizontalLayout_4->addLayout(horizontalLayout_16);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayoutWidget = new QWidget(tab_Etudiant);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(10, 230, 468, 41));
        horizontalLayout_5 = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(tab_Etudiant);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(30, 200, 731, 25));
        pushButton_afficher = new QPushButton(tab_Etudiant);
        pushButton_afficher->setObjectName(QString::fromUtf8("pushButton_afficher"));
        pushButton_afficher->setGeometry(QRect(411, 290, 291, 34));
        pushButton_supprimer = new QPushButton(tab_Etudiant);
        pushButton_supprimer->setObjectName(QString::fromUtf8("pushButton_supprimer"));
        pushButton_supprimer->setGeometry(QRect(60, 290, 351, 34));
        pushButton_modifier = new QPushButton(tab_Etudiant);
        pushButton_modifier->setObjectName(QString::fromUtf8("pushButton_modifier"));
        pushButton_modifier->setGeometry(QRect(480, 250, 281, 34));
        pushButton_ajouter = new QPushButton(tab_Etudiant);
        pushButton_ajouter->setObjectName(QString::fromUtf8("pushButton_ajouter"));
        pushButton_ajouter->setGeometry(QRect(10, 250, 466, 34));
        tabWidget->addTab(tab_Etudiant, QString());
        tab_Matiere = new QWidget();
        tab_Matiere->setObjectName(QString::fromUtf8("tab_Matiere"));
        horizontalLayoutWidget_3 = new QWidget(tab_Matiere);
        horizontalLayoutWidget_3->setObjectName(QString::fromUtf8("horizontalLayoutWidget_3"));
        horizontalLayoutWidget_3->setGeometry(QRect(320, 190, 468, 71));
        horizontalLayout_11 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        horizontalLayout_11->setContentsMargins(0, 0, 0, 0);
        pushButton_modifier_3 = new QPushButton(horizontalLayoutWidget_3);
        pushButton_modifier_3->setObjectName(QString::fromUtf8("pushButton_modifier_3"));

        horizontalLayout_11->addWidget(pushButton_modifier_3);

        groupBox_3 = new QGroupBox(tab_Matiere);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(160, 10, 441, 181));
        verticalLayout_3 = new QVBoxLayout(groupBox_3);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        label_9 = new QLabel(groupBox_3);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Segoe UI Semibold"));
        font2.setPointSize(11);
        font2.setBold(true);
        font2.setWeight(75);
        label_9->setFont(font2);

        horizontalLayout_12->addWidget(label_9);

        texte_ID = new QLineEdit(groupBox_3);
        texte_ID->setObjectName(QString::fromUtf8("texte_ID"));

        horizontalLayout_12->addWidget(texte_ID);


        horizontalLayout_13->addLayout(horizontalLayout_12);

        label_10 = new QLabel(groupBox_3);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Noto Kufi Arabic"));
        font3.setPointSize(9);
        font3.setBold(true);
        font3.setWeight(75);
        label_10->setFont(font3);

        horizontalLayout_13->addWidget(label_10);

        texte_Libelle = new QLineEdit(groupBox_3);
        texte_Libelle->setObjectName(QString::fromUtf8("texte_Libelle"));

        horizontalLayout_13->addWidget(texte_Libelle);


        verticalLayout_3->addLayout(horizontalLayout_13);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        label_11 = new QLabel(groupBox_3);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setFont(font1);

        horizontalLayout_14->addWidget(label_11);

        texte_Coeff = new QLineEdit(groupBox_3);
        texte_Coeff->setObjectName(QString::fromUtf8("texte_Coeff"));

        horizontalLayout_14->addWidget(texte_Coeff);


        verticalLayout_3->addLayout(horizontalLayout_14);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName(QString::fromUtf8("horizontalLayout_15"));
        label_12 = new QLabel(groupBox_3);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        QFont font4;
        font4.setPointSize(9);
        font4.setBold(true);
        font4.setWeight(75);
        label_12->setFont(font4);

        horizontalLayout_15->addWidget(label_12);

        texte_CIN_3 = new QLineEdit(groupBox_3);
        texte_CIN_3->setObjectName(QString::fromUtf8("texte_CIN_3"));

        horizontalLayout_15->addWidget(texte_CIN_3);


        verticalLayout_3->addLayout(horizontalLayout_15);

        pushButton_supprimer_3 = new QPushButton(tab_Matiere);
        pushButton_supprimer_3->setObjectName(QString::fromUtf8("pushButton_supprimer_3"));
        pushButton_supprimer_3->setGeometry(QRect(0, 280, 431, 34));
        pushButton_afficher_3 = new QPushButton(tab_Matiere);
        pushButton_afficher_3->setObjectName(QString::fromUtf8("pushButton_afficher_3"));
        pushButton_afficher_3->setGeometry(QRect(430, 280, 351, 34));
        pushButton_ajouter_3 = new QPushButton(tab_Matiere);
        pushButton_ajouter_3->setObjectName(QString::fromUtf8("pushButton_ajouter_3"));
        pushButton_ajouter_3->setGeometry(QRect(0, 210, 321, 34));
        tabWidget->addTab(tab_Matiere, QString());
        tab_Professeur = new QWidget();
        tab_Professeur->setObjectName(QString::fromUtf8("tab_Professeur"));
        groupBox_2 = new QGroupBox(tab_Professeur);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(150, 10, 451, 181));
        groupBox_2->setFont(font1);
        verticalLayout_2 = new QVBoxLayout(groupBox_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font1);

        horizontalLayout_7->addWidget(label_5);

        texte_CIN_2 = new QLineEdit(groupBox_2);
        texte_CIN_2->setObjectName(QString::fromUtf8("texte_CIN_2"));

        horizontalLayout_7->addWidget(texte_CIN_2);


        verticalLayout_2->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font1);

        horizontalLayout_8->addWidget(label_6);

        texte_Nom_2 = new QLineEdit(groupBox_2);
        texte_Nom_2->setObjectName(QString::fromUtf8("texte_Nom_2"));

        horizontalLayout_8->addWidget(texte_Nom_2);


        verticalLayout_2->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font1);

        horizontalLayout_9->addWidget(label_7);

        texte_prenom_2 = new QLineEdit(groupBox_2);
        texte_prenom_2->setObjectName(QString::fromUtf8("texte_prenom_2"));

        horizontalLayout_9->addWidget(texte_prenom_2);


        verticalLayout_2->addLayout(horizontalLayout_9);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        label_8 = new QLabel(groupBox_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setFont(font1);

        horizontalLayout_10->addWidget(label_8);

        texte_Telephone_2 = new QLineEdit(groupBox_2);
        texte_Telephone_2->setObjectName(QString::fromUtf8("texte_Telephone_2"));

        horizontalLayout_10->addWidget(texte_Telephone_2);


        verticalLayout_2->addLayout(horizontalLayout_10);

        pushButton_supprimer_2 = new QPushButton(tab_Professeur);
        pushButton_supprimer_2->setObjectName(QString::fromUtf8("pushButton_supprimer_2"));
        pushButton_supprimer_2->setGeometry(QRect(20, 290, 391, 34));
        pushButton_afficher_2 = new QPushButton(tab_Professeur);
        pushButton_afficher_2->setObjectName(QString::fromUtf8("pushButton_afficher_2"));
        pushButton_afficher_2->setGeometry(QRect(430, 290, 351, 34));
        pushButton_ajouter_2 = new QPushButton(tab_Professeur);
        pushButton_ajouter_2->setObjectName(QString::fromUtf8("pushButton_ajouter_2"));
        pushButton_ajouter_2->setGeometry(QRect(0, 210, 291, 34));
        pushButton_modifier_2 = new QPushButton(tab_Professeur);
        pushButton_modifier_2->setObjectName(QString::fromUtf8("pushButton_modifier_2"));
        pushButton_modifier_2->setGeometry(QRect(310, 210, 466, 34));
        tabWidget->addTab(tab_Professeur, QString());
        tableView = new QTableView(Menu);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(160, 390, 791, 341));

        retranslateUi(Menu);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Menu);
    } // setupUi

    void retranslateUi(QDialog *Menu)
    {
        Menu->setWindowTitle(QCoreApplication::translate("Menu", "Dialog", nullptr));
        label_menu->setText(QString());
        groupBox->setTitle(QCoreApplication::translate("Menu", "Cordonn\303\251es", nullptr));
        label->setText(QCoreApplication::translate("Menu", "CNE  ", nullptr));
        texte_CNE->setInputMask(QString());
        texte_CNE->setText(QString());
        label_2->setText(QCoreApplication::translate("Menu", "Nom ", nullptr));
        label_3->setText(QCoreApplication::translate("Menu", "Pr\303\251nom", nullptr));
        label_13->setText(QCoreApplication::translate("Menu", "Date de naissance\342\200\216", nullptr));
        DN->setDisplayFormat(QCoreApplication::translate("Menu", "dd/MM/yyyy ", nullptr));
        pushButton->setText(QCoreApplication::translate("Menu", "NOTE / ABSENCE", nullptr));
        pushButton_afficher->setText(QCoreApplication::translate("Menu", "Afficher ", nullptr));
        pushButton_supprimer->setText(QCoreApplication::translate("Menu", "Supprimer", nullptr));
        pushButton_modifier->setText(QCoreApplication::translate("Menu", "Modifier", nullptr));
        pushButton_ajouter->setText(QCoreApplication::translate("Menu", "Ajouter", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_Etudiant), QCoreApplication::translate("Menu", "\303\211tudiant", nullptr));
        pushButton_modifier_3->setText(QCoreApplication::translate("Menu", "Modifier", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("Menu", "Cordonn\303\251es", nullptr));
        label_9->setText(QCoreApplication::translate("Menu", "ID de La mat\303\250re", nullptr));
        texte_ID->setInputMask(QString());
        texte_ID->setText(QString());
        label_10->setText(QCoreApplication::translate("Menu", "Libelle", nullptr));
        label_11->setText(QCoreApplication::translate("Menu", "Coeff", nullptr));
        label_12->setText(QCoreApplication::translate("Menu", "CIN du Professeur", nullptr));
        pushButton_supprimer_3->setText(QCoreApplication::translate("Menu", "Supprimer", nullptr));
        pushButton_afficher_3->setText(QCoreApplication::translate("Menu", "Afficher ", nullptr));
        pushButton_ajouter_3->setText(QCoreApplication::translate("Menu", "Ajouter", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_Matiere), QCoreApplication::translate("Menu", "Mati\303\250re ", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("Menu", "Cordonn\303\251es", nullptr));
        label_5->setText(QCoreApplication::translate("Menu", "CNI", nullptr));
        texte_CIN_2->setInputMask(QString());
        texte_CIN_2->setText(QString());
        label_6->setText(QCoreApplication::translate("Menu", "Nom ", nullptr));
        label_7->setText(QCoreApplication::translate("Menu", "Pr\303\251nom", nullptr));
        label_8->setText(QCoreApplication::translate("Menu", "T\303\251l\303\251phone", nullptr));
        pushButton_supprimer_2->setText(QCoreApplication::translate("Menu", "Supprimer", nullptr));
        pushButton_afficher_2->setText(QCoreApplication::translate("Menu", "Afficher ", nullptr));
        pushButton_ajouter_2->setText(QCoreApplication::translate("Menu", "Ajouter", nullptr));
        pushButton_modifier_2->setText(QCoreApplication::translate("Menu", "Modifier", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_Professeur), QCoreApplication::translate("Menu", "Professeur", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Menu: public Ui_Menu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENU_H
