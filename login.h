#ifndef LOGIN_H
#define LOGIN_H

#include <QtWidgets>
#include "dash.h"
/* todo list
 * disable btn connexion when password field is empty
 */

class Login : public QWidget
{
    Q_OBJECT

    public:
        Login(); //constructeur

   private slots:
        void loginConnexion();

    private:
        QString passValue;
        QLineEdit *password;
        QPushButton *connexion;
        QPushButton *annuler;
        Dash *dashboard;
};

#endif // LOGIN_H
