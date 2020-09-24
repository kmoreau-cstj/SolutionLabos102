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
	cout << "Indiquer l'étage de départ  --> ";
	cin >> etageDepart;

	cout << "Indiquer l'étage à atteindre --> ";
	cin >> etageCible;

	cout << "Vous êtes à l'étage " << etageDepart <<  endl;

	// 
	if (etageCible > etageDepart)
	{
		for (int cpt = etageDepart; cpt <= etageCible; cpt++)
		{
			cout << ">>" << cpt << endl;
		}
	}
	else
		// sinon, l'utilisateur a emprunté l'ascenseur impair qui va au étages 3, 5, 7, 9, ...
	{
		for (int cpt = etageDepart; cpt >= etageCible; cpt--)
		{
			cout << ">>" << cpt << endl;
		}

	}

	cout << "Les portes s'ouvrent, vous êtes rendu." << endl;


	return 0;
}