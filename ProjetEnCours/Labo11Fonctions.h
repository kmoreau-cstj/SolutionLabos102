#pragma once
// Liste de tous les includes nécessaires au programme
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

// Liste des constantes nécessaires aux fonctions. Comme les constantes ne peuvent pas être modifiées, alors il n'y
// a pas de danger de les déclarer en dehors d'une fonction.
const string TITRE = "Table des matières";
const string NOM_SECTION = "Section";
const char POINT_DE_SUITE = '.';
const string DEUX_POINTS = " : ";
//Chapitre 1  : Introduction au C++.................................................1
const int COL1 = NOM_SECTION.length() + 1;	// La colonne s'adapte à la longueur du nom de la section
											// + un espace pour pas être collé au numéro de page
const int COL2 = 2 ;						// Pas plus de 99 chapitres par livre 
const int COL3 = DEUX_POINTS.length();
const int COL4 = 50;
const int COL5 = 5;							// On permet à un livre d'avoir plus de 10 000 pages 
											// mais pas plus de 100 000. On complète la colonne avec les points
											// de suite

const int LARGEUR_PAGE = COL1 + COL2 + COL3 + COL4 + COL5;




// Liste les nouveaux types de variables
// On peut créer des nouveaux types de variable en utilisant le mot clé struct
// Il faut donner un nom à cette nouvelle structure qui deviendra le type de la variable
// A l'intérieur de la structure, il faut énumérer toutes les informations qu'elle contient : type et le nom du champ
struct chapitre
{
	string nomDuChapitre;
	int numeroPage;
};




// Liste des prototypes des fonctions

// Tous les paramètres qui seront de type ifstrean ou ofstream devront SYSTEMATIQUEMENT être passé par RÉFÉRENCE donc avec une perluète &
// Car un canal, une route, une autoroute ne peut pas être COPIÉE
void ouvrirFichierEntree(const string NOM_FICHIER_A_OUVRIR, ifstream& canalEntree);
void creerFichierSortie(const string NOM_FICHIER_A_CREER, ofstream& canalSortie);
// Le paramètre de type chapitre va recevoir les informations lues dans le fichier. Son contenu est donc modifié. 
// Il faut le transmettre au main. Donc il doit être passé en référence
void lireEnregistrement(ifstream& canalEntree , chapitre& unChapitre);
chapitre lireEnregistrement(ifstream& canalEntree);

void ecrireEnTete(ofstream& canalSortie, const string ENTETE, int nbLignesVideApresTitre = 1 );

void ecrireEnregistrement(ofstream& canalSortie ,  chapitre chapitreAEcrire, int numero);


