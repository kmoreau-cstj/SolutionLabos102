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

void lireEnregistrement(ifstream& canalEntree, chapitre& unChapitre)
{
	// On doit lire le titre du chapitre. Le titre contient des espaces ==> getline
	getline(canalEntree, unChapitre.nomDuChapitre, ';');
	// On doit lire le numéro de la page. C'est un int. getline ne lit que des chaines de caractères. 
	// On lit avec quoi ????? les becs de canard : >> pour lire les données. 
	canalEntree >> unChapitre.numeroPage;
	// On sait que les becs de canard laissent trainer les séparateurs (espace, \t, \n)
	// Il faut les ignorer
	canalEntree.ignore(1, '\n');			// Cela va déplacer le curseur de lecture après la fin de la ligne


}

chapitre lireEnregistrement(ifstream& canalEntree)
{
	//Déclaration des variables
	chapitre unChapitreALire;
	
	// On doit lire le titre du chapitre dans le canal. Il a toujours des espaces ==> getline
	getline(canalEntree, unChapitreALire.nomDuChapitre, ';');
	// On lit le numéro de la page. Int donc on utilise >>
	canalEntree >> unChapitreALire.numeroPage;
	// On sait que les becs de canard laissent trainer les séparateurs (espace, \t, \n)
	// Il faut les ignorer
	canalEntree.ignore(1, '\n');			// Cela va déplacer le curseur de lecture après la fin de la ligne

	return unChapitreALire;
}

void ecrireEnTete(ofstream& canalSortie, const string ENTETE, int nbLignesVideApresTitre)
{
	//                                   Table des matières                                   
	canalSortie <<setw((LARGEUR_PAGE -ENTETE.length())/2 ) << " " <<  ENTETE << endl;
}

void ecrireEnregistrement(ofstream& canalSortie, chapitre chapitreAEcrire, int numero)
{
	// Chapitre  1 : Introduction au C++.................................................1
	// Chapitre 10 : Introduction au C++.................................................1

	canalSortie << left << setw(COL1) << NOM_SECTION << right << setw(COL2) << numero;
	canalSortie << setw(COL3) << DEUX_POINTS;
	canalSortie << left << setfill(POINT_DE_SUITE) << setw(COL4) << chapitreAEcrire.nomDuChapitre;
	canalSortie << right << setw(COL5) << chapitreAEcrire.numeroPage << setfill(' ') << endl;
}
