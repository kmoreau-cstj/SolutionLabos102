// But : Demander à l'utilisateur à quel étage il veut se rendre et quel accenseur il prend (1 étage impair, 2 étage pair) 
// Et le programme affiche les différents niveaux deux par deux.
// Auteur : Karine Moreau
// Date : 2020

#include <iostream>
using namespace std;			// Pour alléger le code et plus mettre std:: avant les cout, cin, endl, ...


int main()
{
	setlocale(LC_ALL, "");

	// Déclaration des variables au début du programme
	int etageCible;

	cout << "Indiquer l'étage à atteindre --> ";
	cin >> etageCible;

	cout << "Vous êtes au rez-de-chaussée" << endl;

	// Si l'étage cible est pair, l'utilisateur a emprunté l'ascenseur pair qui va aux étages 2, 4, 6, 8, ...
	if (etageCible %2 ==0)
	{
		for (int cpt = 0; cpt < etageCible; cpt=cpt+2)
		{
			cout << ">>" << cpt + 2 << endl;
		}
	}
	else
		// sinon, l'utilisateur a emprunté l'ascenseur impair qui va au étages 3, 5, 7, 9, ...
	{
		for (int cpt = 0; cpt < etageCible; cpt=cpt+2)
		{
			cout << ">>" << cpt + 1 << endl;
		}

	}

	cout << "Les portes s'ouvrent, vous êtes rendu." << endl;


	return 0;
}