// But : demander à l'utilisateur d'entrer deux entiers. Le programme doit dire si le premier nombre
//       est multiple du deuxième. 
// par exemple : 6 et 3 : 6 = 2 * 3 reste 0 : 6 est multiple de 3
// par exemple : 7 et 4 : 7 = 1 * 4 reste 3 : 7 n'est pas un multiple de 4
// Auteur : Karine Moreau
// Date : 2020-09-14

#include <iostream>

int main()
{
	setlocale(LC_ALL, "");
	// Déclaration des variables
	int nombre1;
	int nombre2;



	// demander à l'utilisateur d'entrer deux entiers
	std::cout << "Veuillez entrer un premier entier :";
	std::cin >> nombre1;

	std::cout << "Veuillez entrer un deuxième entier :";
	std::cin >> nombre2;

	// Le programme doit dire si le premier nombre est multiple du deuxième
	// Une autre façon de l'exprimer est de dire si le premier nombre est DIVISIBLE par le deuxième
	// Attention Divisible ne veut pas dire Divisé par le deuxième nombre
	// Il faut que le reste de la division soit égal à 0

	// AVANT DE DIVISER il faut s'assurer que le deuxième nombre n'est pas égal à 0 
	// Sinon PLANTAGE du programme
	if (nombre2 == 0)
	{
		std::cout << "ERREUR : Le deuxième nombre ne peut pas être égal à zéro.";
	}
	else
	{
		if (nombre1 % nombre2 == 0)
		{
			std::cout << nombre1 << " est multiple de " << nombre2;
		}
		else
		{
			std::cout << nombre1 << " n'est pas multiple de " << nombre2;
		}
	}
	return 0;

}