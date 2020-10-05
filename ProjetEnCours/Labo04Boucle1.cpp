// But : demander � l'utilisateur un nombre entier compris entre 5 et 20. Le programme doit valider le nombre, le redemande si le nombre n'est pas compris entre
// 5 et 20.

// Le programme affiche un carr� rempli d'�toile en alternance de la fa�on suivante

// exemple si le nombre vaut 8, le programme affiche le carr� :
/*

* * * * * * * *					8 �toiles (* suivie d'un espace)
 * * * * * * *					un espace suivi de 7 �toiles (* suivie d'un espace)
* * * * * * * *					8 �toiles (* suivie d'un espace)
 * * * * * * *					un espace suivi de 7 �toiles (* suivie d'un espace)
* * * * * * * *
 * * * * * * *
* * * * * * * *
 * * * * * * *


 au total il y a 8 lignes


*/

// Auteur : Karine Moreau
// Date : 2020-10-05

#include <iostream>
using namespace std;			// Pour all�ger le code et plus mettre std:: avant les cout, cin, endl, ...


int main()
{
	setlocale(LC_ALL, "");

	// D�claration des constantes
	const int MIN = 5;
	const int MAX = 20;
	// D�claration des variables au d�but du programme
	int nbEtoile;


	// Le programme demande � l'utilisateur un nombre compris entre 5 et 20
	cout << "Veuillez entrer un nombre compris entre " << MIN << " et " << MAX << " : ";
	cin >> nbEtoile;
	// Le programme s'assure que le nombre est compris entre 5 et 20
	while (!(nbEtoile >= MIN && nbEtoile <= MAX))
	{
		cout << "Erreur : le nombre doit �tre compris entre " << MIN << " et " << MAX << "." << endl;
		system("pause");			// Pour laisser le temps � l'utilisateur de lire le message
		system("cls");				// Pour effacer l'�cran CLear Screen

		// Le programme demande � l'utilisateur un nombre compris entre 5 et 20
		cout << "Veuillez entrer un nombre compris entre " << MIN << " et " << MAX << " : ";
		cin >> nbEtoile;
	}
	// Ici le nombre est bien compris entre 5 et 20
	// Le programme peut dessiner les �toiles en alternance
	for (int ligne = 0; ligne < nbEtoile; ligne++)			// Pour compter les lignes qui sont dessin�es
	{
		// Ici on doit alterner soit * suivi d'espace ou un seul espace
		if (ligne % 2 == 0)
		{
			cout << "* ";
		}
		else
			cout << " ";
		
		for (int colonne = 0; colonne < nbEtoile-1; colonne++)		// Chaque ligne a au moins 7 �toiles
		{
			cout << "* ";
		}
		cout << endl;
	}



	return 0;
}