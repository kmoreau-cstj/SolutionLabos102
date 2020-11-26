#include "Labo11Fonctions.h"

void ouvrirFichierEntree(const string NOM_FICHIER_A_OUVRIR, ifstream& canalEntree)
{
	// On TENTE d'associer le canal au fichier source 
	canalEntree.open(NOM_FICHIER_A_OUVRIR, ios::in);

	// On s'assure que le fichier a bien été ouvert, sinon on affiche des messages d'erreur et on quitte le programme
	if (!canalEntree)
	{
		cerr << "Erreur : le fichier " << NOM_FICHIER_A_OUVRIR << " n'a pas pu être ouvert ......" << endl;
		cerr << "....." << endl;
		exit(123);				// On quitte la fonction, on quitte le main et donc le programme
	}
}

void creerFichierSortie(const string NOM_FICHIER_A_CREER, ofstream& canalSortie)
{
	// On TENTE d'associer le canal au fichier destination 
	canalSortie.open(NOM_FICHIER_A_CREER, ios::out);

	// On s'assure que le fichier a bien été créé, sinon on affiche des messages d'erreur et on quitte le programme
	if (!canalSortie)
	{
		cerr << "Erreur : le fichier " << NOM_FICHIER_A_CREER << " n'a pas pu être créé ......" << endl;
		cerr << "....." << endl;
		exit(321);				// On quitte la fonction, on quitte le main et donc le programme
	}


}
