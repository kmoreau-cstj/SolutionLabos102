// But : demander � l'utilisateur d'entrer deux entiers. Le programme doit dire si le premier nombre
//       est multiple du deuxi�me. 
// par exemple : 6 et 3 : 6 = 2 * 3 reste 0 : 6 est multiple de 3
// par exemple : 7 et 4 : 7 = 1 * 4 reste 3 : 7 n'est pas un multiple de 4
// Auteur : Karine Moreau
// Date : 2020-09-14

#include <iostream>

int main()
{
	setlocale(LC_ALL, "");
	// D�claration des variables
	int nombre1;
	int nombre2;



	// demander � l'utilisateur d'entrer deux entiers
	std::cout << "Veuillez entrer un premier entier :";
	std::cin >> nombre1;

	std::cout << "Veuillez entrer un deuxi�me entier :";
	std::cin >> nombre2;

	// Le programme doit dire si le premier nombre est multiple du deuxi�me
	// Une autre fa�on de l'exprimer est de dire si le premier nombre est DIVISIBLE par le deuxi�me
	// Attention Divisible ne veut pas dire Divis� par le deuxi�me nombre
	// Il faut que le reste de la division soit �gal � 0

	// AVANT DE DIVISER il faut s'assurer que le deuxi�me nombre n'est pas �gal � 0 
	// Sinon PLANTAGE du programme
	if (nombre2 == 0)
	{
		std::cout << "ERREUR : Le deuxi�me nombre ne peut pas �tre �gal � z�ro.";
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