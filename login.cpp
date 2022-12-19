#include "login.h"

Login::Login()
{
    //champs
    password = new QLineEdit;
    password->setEchoMode(QLineEdit::Password);

    QFormLayout *formLayout = new QFormLayout;
    formLayout->addRow("Mot de passe : ", password);

    QGroupBox *formGroup = new QGroupBox("", this);
    formGroup->setLayout(formLayout);

    //boutons
    connexion = new QPushButton("Connexion");
    annuler = new QPushButton("Annuler");

    QHBoxLayout *btnLayout = new QHBoxLayout;
    btnLayout->setAlignment(Qt::AlignRight);
    btnLayout->addWidget(connexion);
    btnLayout->addWidget(annuler);

    //login layout
    QVBoxLayout *loginLayout = new QVBoxLayout;
    loginLayout->addWidget(formGroup);
    loginLayout->addLayout(btnLayout);

    setLayout(loginLayout);
    setWindowTitle("Checker - Conexion");
    //todo Add Icon
    resize(350, 95);

    //Connexions
       connect(annuler,SIGNAL(clicked()),qApp,SLOT(quit())); //fermeture de l'apk
       connect(connexion, SIGNAL(clicked()),this,SLOT(loginConnexion()));
}

void Login::loginConnexion()
{
    passValue ="admin";

    //password bad
    if(password->text() != passValue)
    {
        QMessageBox::critical(this,"Erreur", "Mot de passe incorrect");
        return;
    } else {
        hide();
        dashboard = new Dash(this);
        dashboard->show();
    }
}
