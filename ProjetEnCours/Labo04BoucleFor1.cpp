// But : Demander � l'utilisateur � quel �tage il veut se rendre. Et le programme affiche les diff�rents niveaux.
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


	cout << "Vous �tes sur l'�tage " << endl << ">>";

	for (int compteur = 0; compteur < etageCible; compteur++)
	{
		cout << compteur + 1 << endl;
		if (compteur+1 < etageCible)
		{
			cout << ">>";
		}
			
	}
	cout << "Les portes s'ouvrent, vous �tes rendu" << endl;









	return 0;
}