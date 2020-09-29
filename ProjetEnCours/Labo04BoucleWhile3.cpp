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
	int cpt;


	cout << "Indiquer l'�tage de d�part  --> ";
	cin >> etageDepart;

	cout << "Indiquer l'�tage � atteindre --> ";
	cin >> etageCible;

	cout << "Vous �tes � l'�tage " << etageDepart <<  endl;

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

	cout << "Les portes s'ouvrent, vous �tes rendu." << endl;


	return 0;
}