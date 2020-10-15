#include "Labo05MesFonctions.h"
#include <iostream>
using namespace std;

void afficherMenu()
{
	cout << "1. Travailleur Cadre" << endl;
	cout << "2. Travailleur � taux horaire" << endl;
	cout << "3. Travailleur � la commission" << endl;
	cout << "4. Travailleur � la pi�ce" << endl;
	cout << "q. Quitter le programme" << endl;

}

char validerChoixMenu(char Min, char Max, char quitter)
{
	// D�claration des variables
	char choixMenu;
	
	// Le programme doit demander � l'utilisateur son choix
	cout << "Votre choix --> ";
	cin >> choixMenu;


	// Le programme doit valider que le choix de l'utilisateur est permis, est valide
	// le type d'employe doit �tre compris entre 1 ET 4 OU �tre la lettre q minuscule  OU la lettre Q masjuscule
	// while (typeEmploye < CHOIX_MIN || typeEmploye > CHOIX_MAX && typeEmploye != 'q' && typeEmploye != 'Q')

	while (!(choixMenu >= Min && choixMenu <= Max || choixMenu == quitter ))
	{
		cout << "Erreur : Le choix ...." << endl;

		// Laisser le temps pour lire le message d'erreur

		// Effacer l'�cran

		// Le programme affiche un menu offrant les fonctions des employ�s et une option pour quitter
		afficherMenu();

		// Le programme doit demander � l'utilisateur son choix
		cout << "Votre choix --> ";
		cin >> choixMenu;
	}
	
	return choixMenu;
}
