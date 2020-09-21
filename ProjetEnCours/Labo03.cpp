// But : utiliser les instructions conditionnelles
// Exemple : Si le nombre est 10 alors c'est gagné, sinon c'Est c'est 20 alors deuxième chance,
//           sinon c'est perdu
// Auteur : Karine Moreau
// Date : 2020-09-15

#include <iostream>

int main()
{
	setlocale(LC_ALL, "");
	// Déclarer une variable et on l'initialise avec l'opérateur = d'affectation
	int nombre = 25;

	// Instructions conditionnelles : if ... else en utilisant des opérateurs de comparaison (< > <= >= == !=)
	if (nombre == 10)
	{
		std::cout << "Vous avez gagné !";
		std::cout << "Félicitations";
	}
	else
		if (nombre == 20)
			std::cout << "Vous avez droit à une seconde chance.";
		else
			std::cout << "Vous avez perdu.";


	return 0;
}

/*
Plan de tests
Nombre							Affichage à l'écran
5								perdu
10								gagné !
15								perdu
20								seconde chance
25								perdu
0								perdu
-5								perdu

*/