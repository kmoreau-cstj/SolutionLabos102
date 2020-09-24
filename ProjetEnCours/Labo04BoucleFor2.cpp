// But : Demander � l'utilisateur � quel �tage il veut se rendre et quel accenseur il prend (1 �tage impair, 2 �tage pair) 
// Et le programme affiche les diff�rents niveaux deux par deux.
// Auteur : Karine Moreau
// Date : 2020

#include <iostream>
using namespace std;			// Pour all�ger le code et plus mettre std:: avant les cout, cin, endl, ...


int main()
{
	setlocale(LC_ALL, "");

	// D�claration des variables au d�but du programme
	int etageCible;

	cout << "Indiquer l'�tage � atteindre --> ";
	cin >> etageCible;

	cout << "Vous �tes au rez-de-chauss�e" << endl;

	// Si l'�tage cible est pair, l'utilisateur a emprunt� l'ascenseur pair qui va aux �tages 2, 4, 6, 8, ...
	if (etageCible %2 ==0)
	{
		for (int cpt = 0; cpt < etageCible; cpt=cpt+2)
		{
			cout << ">>" << cpt + 2 << endl;
		}
	}
	else
		// sinon, l'utilisateur a emprunt� l'ascenseur impair qui va au �tages 3, 5, 7, 9, ...
	{
		for (int cpt = 0; cpt < etageCible; cpt=cpt+2)
		{
			cout << ">>" << cpt + 1 << endl;
		}

	}

	cout << "Les portes s'ouvrent, vous �tes rendu." << endl;


	return 0;
}