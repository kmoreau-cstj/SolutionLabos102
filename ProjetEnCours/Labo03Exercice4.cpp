// But : 
/*
Ecrire un programme qui permet lire entier nb et affiche, selon sa valeur, un seul et unique message parmi les 4 suivants :
• nb est un multiple de 2.
• nb est un multiple de 3.
• nb est a la fois multiple de 2 et de 3.
• nb n'est ni multiple de 2, ni de 3

*/

/*
plan de tests
nb					résultat
2 = 2*1				2 est multiple de 2		: il faut que le reste de la division entière par 2 soit = à 0
3 = 3*1				3 est multiple de 3
4 = 2*2				4 est multiple de 2
5					5 n'est ni un multiple de 2, ni de 3
6 = 2*3				6 est multiple de 2 et de 3
7
8
9
15
12
-12
0
-7

*/

#include <iostream>

void main()
{
	setlocale(LC_ALL, "");
	// Déclaration des variables
	int nb;

	// Demander à l'utilisateur un nombre entier
	std::cout << "Veuillez entrer un entier :";
	std::cin >> nb;

	if (nb % 2 == 0 && nb % 3 == 0)
	{
		std::cout << nb << " est multiple de 2 et est multiple de 3" << std::endl;
	}
	else
	{
		if (nb % 2 == 0)
		{
			std::cout << nb << " est multiple de 2" << std::endl;
		}
		else
		{ 
			if (nb % 3 == 0)
			{
				std::cout << nb << " est multiple de 3" << std::endl;
			}
			else

			{
				std::cout << nb << " n'est ni multiple de 2 ni multiple de 3" << std::endl;
			}
		} 
	} // fin du premier else
}