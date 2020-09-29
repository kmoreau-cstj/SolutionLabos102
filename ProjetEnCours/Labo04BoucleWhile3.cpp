// But : Demander à l'utilisateur à quel niveau il se trouve et à quel niveau il veut aller.
// Et le programme affiche les différents niveaux.
// Auteur : Karine Moreau
// Date : 2020

#include <iostream>
using namespace std;			// Pour alléger le code et plus mettre std:: avant les cout, cin, endl, ...


int main()
{
	setlocale(LC_ALL, "");

	// Déclaration des variables au début du programme
	int etageCible;
	int etageDepart;
	int cpt;


	cout << "Indiquer l'étage de départ  --> ";
	cin >> etageDepart;

	cout << "Indiquer l'étage à atteindre --> ";
	cin >> etageCible;

	cout << "Vous êtes à l'étage " << etageDepart <<  endl;

	cpt = etageDepart;

	// 
	if (etageCible > etageDepart)
	{
		
		while ( cpt <= etageCible) 
		{
			cout << ">>" << cpt << endl;
			cpt++;
		}
	}
	else
	{
	
		while ( cpt >= etageCible )
		{
			cout << ">>" << cpt << endl;
			cpt--;
		}

	}

	cout << "Les portes s'ouvrent, vous êtes rendu." << endl;


	return 0;
}