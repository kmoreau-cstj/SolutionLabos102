#pragma once

// Liste des tous les include du projet
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// Déclaration de la structure

/*
Type de matériel (précise s’il s’agit un PC, d’une imprimante, d’un écran, …),
Quantité (indique le nombre de fois que ce matériel a été acheté)
Description du matériel, (sera limité à un maximum de 35 caractères)
Le coût d’achat du matériel
Date de l’acquisition de ce matériel.
PC:2:HP Compaq Elite 8300:856.25:24-12-2015:

*/

struct Materiel
{
	string typeDeMateriel;
	int quantite;
	string description;
	float cout;
	string dateAchat;
};

// Liste des prototypes des fonctions

void ecrireEntête(ofstream& canal);
// lire va chercher les informations dans le fichier et donc modifie les valeurs de chacun des champs de la structure unMateriel.
// Si on veut que le main soit informé des changements de valeurs, il faut passer la variable par référence (&)
void lireEnregistrement(ifstream& canal, Materiel& unMateriel);
void ecrireEnregistrement(ofstream& canal, Materiel unMateriel, int& nbAppareil, float& montantTotalInventaire);
void ecrirePiedPage(ofstream& canal, int nbAppareil, float montantTotalInventaire);