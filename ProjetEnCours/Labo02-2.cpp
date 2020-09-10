// But : Comparer deux nombres entre eux, fournis par l'utilisateur
// Auteur : Karine Moreau
// Date : 2020-09-10


#include <iostream>

void main()
{
	setlocale(LC_ALL, "");			// Pour convertir correctement les accents dans la console

	// Ici, au d�but du programme, on va d�clarer les variables n�cessaires au programme
	int nb1;
	int nb2;

	// Le programme demande deux entiers � l'utilisateur
	// On invite l'utilisateur � entrer un entier
	std::cout << "Veuillez entrer un nombre entier :";
	// Le programme doit lire la r�ponse sur le clavier
	std::cin >> nb1;

	// On demande un deuxi�me nombre entier
	std::cout << "Veuillez entrer un deuxi�me nombre entier :";
	std::cin >> nb2;

	// Ici on a deux valeurs enti�res dans nb1 et nb2, ces variables ont �t� initialis�es par l'utilisateur

	// Les op�rateurs de comparaison en C++ sont :
	// == permet de tester l'�galit� entre deux valeurs nb1 % 2 == nb2 * 2 
	// != permet de tester l'in�galit� entre deux valeurs nb1 != nb2
	// > permet de tester si une valeur est plus grande strictement qu'une autre nb1 > nb2
	// < permet de tester si une valeur est plus petite strictement qu'une autre nb1 < nb2
	// >= plus grand ou �gal : nb1 >= nb2
	// <= plus petit ou �gal : nb1 <= nb2

	// Le programme indique si les valeurs sont �gales
	// si (condition avec un op�rateur de comparaison)
	if (nb1 == nb2)
	{
		std::cout << nb1 << " est �gal � " << nb2 << ". ";

	}
	else 
	{
		std::cout << nb1 << " n'est pas �gal � " << nb2 << ". ";
	}

	// Est-ce que nb1 est plus grand que nb2 ?
	if (nb1 % nb2 == 0)
	{	// Bloc d'instructions ex�cut� si la condition est vraie
		std::cout << nb1 << " est plus grand que " << nb2 << ". ";
	}
	else
	{
		std::cout << nb1 << " n'est pas plus grand que " << nb2 << ". ";
	}


}



// Le plan de test
/*
nb1		nb2			r�sultat
10		8			10 n'est pas �gal � 8, 10 est plus grand que 8
15		15			15 est �gal � 15. 15 n'est pas plus grand que 15
-1		0			-1 n'est pas �gal � 0. -1 n'est pas plus grand que 0
-2		-2			-2 est �gal � -2. -2 n'est pas plus grand que -2

*/