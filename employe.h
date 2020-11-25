#ifndef EMPLOYES_H
#define EMPLOYES_H
#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>


class employe{
    int matricule,anneesexp,datenaiss;
    QString nom ,prenom ,email,situationfamiliale,fonction;
public:
    employe(){}
    employe(int,QString,QString,QString,QString,QString,int,int);

    QString get_nom();
    QString get_prenom();
    int get_matricule();
    QString get_email();
    int get_datenaiss();
    QString get_situationfamiliale();
    QString get_fonction();
    int get_anneesexp();

    bool modifier(int,QString,QString,QString,QString,QString,int,int);
    bool ajouter();
    QSqlQueryModel * afficher();
    bool supprimer(int);
    QSqlQueryModel * afficher_rech(QString reff);
    QSqlQueryModel * tri_ref();
};

#endif // EMPLOYES_H
