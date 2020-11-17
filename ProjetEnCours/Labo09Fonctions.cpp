#include <iostream>
#include <string>

#include "Labo06Fonctions.h"
#include "Labo09Fonctions.h"

using namespace std;

void faireUnTest(int paramParCopie, int& paramParReference)
{
    cout << "Dans la fonction faireUnTest :" << endl;
    cout << "Valeur de paramParCopie : " << paramParCopie << endl;
    cout << "Valeur de paramParReference : " << paramParReference << endl;

    cout << "Faire des calculs avec les valeurs des paramètres :" << endl;
    paramParCopie = paramParCopie * 3;
    paramParReference = paramParReference * 3;


    cout << "Dans la fonction faireUnTest, après les calculs :" << endl;
    cout << "Valeur de paramParCopie : " << paramParCopie << endl;
    cout << "Valeur de paramParReference : " << paramParReference << endl;


}

void faireUnTest2(int paramParCopie, const int& paramParReferenceGros)
{
    int temporaire;
    
    cout << "Dans la fonction faireUnTest :" << endl;
    cout << "Valeur de paramParCopie : " << paramParCopie << endl;
    cout << "Valeur de paramParReference : " << paramParReferenceGros << endl;

    cout << "Faire des calculs avec les valeurs des paramètres :" << endl;
    paramParCopie = paramParCopie * 3;
    temporaire = paramParReferenceGros * 3;


    cout << "Dans la fonction faireUnTest, après les calculs :" << endl;
    cout << "Valeur de paramParCopie : " << paramParCopie << endl;
    cout << "Temporaire : " << temporaire << endl;
    cout << "Valeur de paramParReference : " << paramParReferenceGros << endl;


}

void echangerValeur(int& nb1, int& nb2)
{
    int troisiemeContenant;

    troisiemeContenant = nb1;           // On transvase le contenu de nb1 dans un autre contenant. Nb1 est maintenant libre
    nb1 = nb2;                          // Comme nb1 est libre, on transvase le contenu de nb2 dans nb1. Nb2 est libre
    nb2 = troisiemeContenant;           // On transvase le troisièmeContenant dans nb2.

    cout << "Contenu de nb1 : " << nb1 << endl;
    cout << "Contenu de nb2 : " << nb2 << endl;
    

}

void afficherContenuVecteur(vector<int> vec)
{
    for (int i = 0; i < vec.size(); i++)
    {
        cout << "vec[" << i << "] = " << vec.at(i) << endl;
    }
}

void ajouterValeurALaFinVecteur(vector<int>& vec, int nbElement)
{
    for (int i = 0; i < nbElement; i++)
    {
        cout << "Veuillez entrer la valeur à ajouter :";
        vec.push_back(lireEntier());            // push_back ajoute à la fin du vecteur la valeur passée en paramètre
    }
}

void saisirValeurVecteur(vector<int>& vec, int quitter)
{
    // Déclaration des variables 
    // 1. information venant de l'utilisateur ???
    int saisie;
    // 2. résultat : pour faire le calcul final au besoin
    // 3. Variable pour faire des calculs intermédiaires
    int nbCaseDispo = vec.size();
    int numeroCase = 0;             // La première case disponible porte le numéro 0.

    // Si le vec est vide, on doit ajouter des cases à la fin : push_back

    // Si le vec contient déjà des cases, on va modifier le contenu : at
    // Mais si on modifie plus de cases que le vec en contient, il faut faire un push_back pour ajouter des nouvelles cases

    // On demande la valeur à ajouter à l'utilisateur
    cout << "Veuillez entrer la valeur à ajouter ou " << quitter << " pour mettre fin à la saisie :";
    saisie = lireEntier();

    // tant que la saisie n'est pas égale à quitter
    while (saisie != quitter)
    {
        // Si il reste de la place dans le vecteur on utilise at
        if (nbCaseDispo > 0)
        {
            vec.at(numeroCase) = saisie;
            // Il faut préparer pour la saisie suivante
            numeroCase++;
            // Il reste une case de moins
            nbCaseDispo--;
        }
        // sinon on utilise push_back
        else
        {
            vec.push_back(saisie);
        }
        // A LA FIN de la boucle : réinitialiser la variable de boucle : saisie
        cout << "Veuillez entrer la valeur à ajouter ou " << quitter << " pour mettre fin à la saisie :";
        saisie = lireEntier();
    }

}

void saisirEmployeVente(vector<string>& vecEmploye, vector<float>& vecVentes, string quitter)
{
    // Déclaration des variables 
    // 1. information venant de l'utilisateur ???
    string nomEmploye;
    float ventes;
    // 2. résultat : pour faire le calcul final au besoin
    // 3. Variable pour faire des calculs intermédiaires
    int nbCaseDispo = vecEmploye.size();
    int numeroCase = 0;             // La première case disponible porte le numéro 0.
 
    // On demande la valeur à ajouter à l'utilisateur
    cout << "Veuillez entrer le nom de l'employé à ajouter ou tapez " << quitter << " pour mettre fin à la saisie :";
    getline(cin, nomEmploye, '\n');

    // tant que le nom de l'employé n'est pas égale à quitter
    while (nomEmploye != quitter)
    {
        // On demande le montant des ventes à l'utilisateur
        cout << "Veuillez entrer le montant des ventes pour cet employé :";
        ventes = lireReel();
        
        // Si il reste de la place dans le vecteur on utilise at
        if (nbCaseDispo > 0)
        {
            vecEmploye.at(numeroCase) = nomEmploye;
            vecVentes.at(numeroCase) = ventes;
            // Il faut préparer pour la saisie suivante
            numeroCase++;
            // Il reste une case de moins
            nbCaseDispo--;
        }
        // sinon on utilise push_back
        else
        {
            vecEmploye.push_back(nomEmploye);
            vecVentes.push_back(ventes);
        }
        // A LA FIN de la boucle : réinitialiser la variable de boucle : saisie
    // On demande la valeur à ajouter à l'utilisateur
        cout << "Veuillez entrer le nom de l'employé à ajouter ou tapez " << quitter << " pour mettre fin à la saisie :";
        getline(cin, nomEmploye, '\n');
    }
}

void afficherEmployeVente(const vector<string>& vecEmploye, const vector<float>& vecVentes)
{

    cout << "Nom de l'employé \tMontant des ventes" << endl <<endl;
    for (int i = 0; i < vecEmploye.size(); i++)
    {
        cout << vecEmploye.at(i) << "\t\t" << vecVentes.at(i) << endl;
    }

}

void afficherSalaireEmploye(vector<string> vecEmploye, vector<float> vecVentes)
{
    cout << "Nom de l'employé \tMontant des ventes\tSalaire" << endl << endl;
    for (int i = 0; i < vecEmploye.size(); i++)
    {
        cout << vecEmploye.at(i) << "\t\t" << vecVentes.at(i)<< "\t\t" << calculerSalaireEmploye(vecVentes, i, 250, 0.07) << endl;
    }



}

float calculerSalaireEmploye(const vector<float>& vecVentes, int numeroCase, float salaireFixe, float pourcentage)
{
    return salaireFixe + pourcentage * vecVentes.at(numeroCase);
}
