// But :
// DEmander à l'utilisateur un nombre compris entre 1 et 70. Si le nombre est bien compris entre 1 et 70, alors afficher autant
// d'étoiles que le nombre choisi. Sinon afficher Erreur

/* le plan de tests
entier							résultat
4								4 : ****
10								10 : **********
71								71 : Erreur
1								1 : *
-5								-5 : Erreur
0								0 : Erreur

*/




// Auteur : Karine Moreau
// Date : 2020-09-28



#include <iostream>
using namespace std;			// Pour alléger le code et plus mettre std:: avant les cout, cin, endl, ...


int main()
{
	setlocale(LC_ALL, "");

	// declaration de constante
	const int NB_MIN = 5;
	const int NB_MAX = 100;
	const char MOTIF = '-';
	// Déclaration des variables au début du programme
	int nbEtoiles;
	cout << "entrer un nombre entier : ";
	cin >> nbEtoiles;
	if (nbEtoiles >= NB_MIN && nbEtoiles <= NB_MAX)
	{
		cout << nbEtoiles << " : ";
		for (int numEtoile = 0; numEtoile < nbEtoiles; numEtoile++)
		{
			cout << MOTIF;
		}
	}
	else
	{
		cout << nbEtoiles << " : erreur le nombre n'est pas compris entre " << NB_MIN << " et " << NB_MAX;
	}

	return 0;
}