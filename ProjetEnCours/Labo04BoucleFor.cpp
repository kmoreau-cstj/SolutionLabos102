// But : Demander à l'utilisateur à quel étage il veut se rendre. Et le programme affiche les différents niveaux.
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


	cout << "Vous êtes sur l'étage " << endl << ">>";

	for (int compteur = 0; compteur < etageCible; compteur++)
	{
		cout << compteur + 1 << endl;
		if (compteur+1 < etageCible)
		{
			cout << ">>";
		}
			
	}
	cout << "Les portes s'ouvrent, vous êtes rendu" << endl;









	return 0;
}