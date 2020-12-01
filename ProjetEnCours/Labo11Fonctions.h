#pragma once
// Liste de tous les includes n�cessaires au programme
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

// Liste des constantes n�cessaires aux fonctions. Comme les constantes ne peuvent pas �tre modifi�es, alors il n'y
// a pas de danger de les d�clarer en dehors d'une fonction.
const string TITRE = "Table des mati�res";
const string NOM_SECTION = "Section";
const char POINT_DE_SUITE = '.';
const string DEUX_POINTS = " : ";
//Chapitre 1  : Introduction au C++.................................................1
const int COL1 = NOM_SECTION.length() + 1;	// La colonne s'adapte � la longueur du nom de la section
											// + un espace pour pas �tre coll� au num�ro de page
const int COL2 = 2 ;						// Pas plus de 99 chapitres par livre 
const int COL3 = DEUX_POINTS.length();
const int COL4 = 50;
const int COL5 = 5;							// On permet � un livre d'avoir plus de 10 000 pages 
											// mais pas plus de 100 000. On compl�te la colonne avec les points
											// de suite

const int LARGEUR_PAGE = COL1 + COL2 + COL3 + COL4 + COL5;




// Liste les nouveaux types de variables
// On peut cr�er des nouveaux types de variable en utilisant le mot cl� struct
// Il faut donner un nom � cette nouvelle structure qui deviendra le type de la variable
// A l'int�rieur de la structure, il faut �num�rer toutes les informations qu'elle contient : type et le nom du champ
struct chapitre
{
	string nomDuChapitre;
	int numeroPage;
};




// Liste des prototypes des fonctions

// Tous les param�tres qui seront de type ifstrean ou ofstream devront SYSTEMATIQUEMENT �tre pass� par R�F�RENCE donc avec une perlu�te &
// Car un canal, une route, une autoroute ne peut pas �tre COPI�E
void ouvrirFichierEntree(const string NOM_FICHIER_A_OUVRIR, ifstream& canalEntree);
void creerFichierSortie(const string NOM_FICHIER_A_CREER, ofstream& canalSortie);
// Le param�tre de type chapitre va recevoir les informations lues dans le fichier. Son contenu est donc modifi�. 
// Il faut le transmettre au main. Donc il doit �tre pass� en r�f�rence
void lireEnregistrement(ifstream& canalEntree , chapitre& unChapitre);
chapitre lireEnregistrement(ifstream& canalEntree);

void ecrireEnTete(ofstream& canalSortie, const string ENTETE, int nbLignesVideApresTitre = 1 );

void ecrireEnregistrement(ofstream& canalSortie ,  chapitre chapitreAEcrire, int numero);


