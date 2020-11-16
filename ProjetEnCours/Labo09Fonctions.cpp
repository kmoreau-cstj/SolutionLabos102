#include <iostream>

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
    // Si le vec est vide, on doit ajouter des cases à la fin : push_back

    // Si le vec contient déjà des cases, on va modifier le contenu : at
    // Mais si on modifie plus de cases que le vec en contient, il faut faire un push_back pour ajouter des nouvelles cases

    // tant que la saisie n'est pas égale à quitter
        // Si il reste de la place dans le vecteur on utilise at

        // sinon on utilise push_back



}
