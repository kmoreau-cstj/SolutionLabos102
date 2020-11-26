#pragma once
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

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
// Car un canal, une route, une autoroute ne peut pas être COPIÉ
void ouvrirFichierEntree(const string NOM_FICHIER_A_OUVRIR, ifstream& canalEntree);
void creerFichierSortie(const string NOM_FICHIER_A_CREER, ofstream& canalSortie);
// Le paramètre de type chapitre va recevoir les informations lues dans le fichier. Son contenu est donc modifié. Il faut le transmettre
// au main. Donc il doit être passé en référence
void lireEnregistrement(ifstream& canalEntree , chapitre& unChapitre);
chapitre lireEnregistrement(ifstream& canalEntree);

