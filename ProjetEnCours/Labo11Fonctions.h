#pragma once
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

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
// Car un canal, une route, une autoroute ne peut pas �tre COPI�
void ouvrirFichierEntree(const string NOM_FICHIER_A_OUVRIR, ifstream& canalEntree);
void creerFichierSortie(const string NOM_FICHIER_A_CREER, ofstream& canalSortie);
// Le param�tre de type chapitre va recevoir les informations lues dans le fichier. Son contenu est donc modifi�. Il faut le transmettre
// au main. Donc il doit �tre pass� en r�f�rence
void lireEnregistrement(ifstream& canalEntree , chapitre& unChapitre);
chapitre lireEnregistrement(ifstream& canalEntree);

