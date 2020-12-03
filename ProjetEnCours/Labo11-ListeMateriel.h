#pragma once

// Liste des tous les include du projet
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// D�claration de la structure

/*
Type de mat�riel (pr�cise s�il s�agit un PC, d�une imprimante, d�un �cran, �),
Quantit� (indique le nombre de fois que ce mat�riel a �t� achet�)
Description du mat�riel, (sera limit� � un maximum de 35 caract�res)
Le co�t d�achat du mat�riel
Date de l�acquisition de ce mat�riel.
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

void ecrireEnt�te(ofstream& canal);
// lire va chercher les informations dans le fichier et donc modifie les valeurs de chacun des champs de la structure unMateriel.
// Si on veut que le main soit inform� des changements de valeurs, il faut passer la variable par r�f�rence (&)
void lireEnregistrement(ifstream& canal, Materiel& unMateriel);
void ecrireEnregistrement(ofstream& canal, Materiel unMateriel, int& nbAppareil, float& montantTotalInventaire);
void ecrirePiedPage(ofstream& canal, int nbAppareil, float montantTotalInventaire);