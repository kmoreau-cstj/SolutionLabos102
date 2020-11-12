#include <iostream>

#include "Labo06Fonctions.h"
#include "Labo09Fonctions.h"

using namespace std;

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
