// But : Demander � l'utilisateur � quel niveau il se trouve et � quel niveau il veut aller.
// Et le programme affiche les diff�rents niveaux.
// Auteur : Karine Moreau
// Date : 2020

#include <iostream>
using namespace std;			// Pour all�ger le code et plus mettre std:: avant les cout, cin, endl, ...


int main()
{
	setlocale(LC_ALL, "");

	// D�claration des variables au d�but du programme
	int etageCible;
	int etageDepart;
	cout << "Indiquer l'�tage de d�part  --> ";
	cin >> etageDepart;

	cout << "Indiquer l'�tage � atteindre --> ";
	cin >> etageCible;

	cout << "Vous �tes � l'�tage " << etageDepart <<  endl;

	// 
	if (etageCible > etageDepart)
	{
		for (int cpt = etageDepart; cpt <= etageCible; cpt++)
		{
			cout << ">>" << cpt << endl;
		}
	}
	else
		// sinon, l'utilisateur a emprunt� l'ascenseur impair qui va au �tages 3, 5, 7, 9, ...
	{
		for (int cpt = etageDepart; cpt >= etageCible; cpt--)
		{
			cout << ">>" << cpt << endl;
		}

	}

	cout << "Les portes s'ouvrent, vous �tes rendu." << endl;


	return 0;
}