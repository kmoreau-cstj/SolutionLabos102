// But : Comparer deux nombres entre eux, fournis par l'utilisateur
// Auteur : Karine Moreau
// Date : 2020-09-10


#include <iostream>

void main()
{
	setlocale(LC_ALL, "");			// Pour convertir correctement les accents dans la console

	// Ici, au début du programme, on va déclarer les variables nécessaires au programme
	int nb1;
	int nb2;

	// Le programme demande deux entiers à l'utilisateur
	// On invite l'utilisateur à entrer un entier
	std::cout << "Veuillez entrer un nombre entier :";
	// Le programme doit lire la réponse sur le clavier
	std::cin >> nb1;

	// On demande un deuxième nombre entier
	std::cout << "Veuillez entrer un deuxième nombre entier :";
	std::cin >> nb2;

	// Ici on a deux valeurs entières dans nb1 et nb2, ces variables ont été initialisées par l'utilisateur

	// Les opérateurs de comparaison en C++ sont :
	// == permet de tester l'égalité entre deux valeurs nb1 % 2 == nb2 * 2 
	// != permet de tester l'inégalité entre deux valeurs nb1 != nb2
	// > permet de tester si une valeur est plus grande strictement qu'une autre nb1 > nb2
	// < permet de tester si une valeur est plus petite strictement qu'une autre nb1 < nb2
	// >= plus grand ou égal : nb1 >= nb2
	// <= plus petit ou égal : nb1 <= nb2

	// Le programme indique si les valeurs sont égales
	// si (condition avec un opérateur de comparaison)
	if (nb1 == nb2)
	{
		std::cout << nb1 << " est égal à " << nb2 << ". ";

	}
	else 
	{
		std::cout << nb1 << " n'est pas égal à " << nb2 << ". ";
	}

	// Est-ce que nb1 est plus grand que nb2 ?
	if (nb1 % nb2 == 0)
	{	// Bloc d'instructions exécuté si la condition est vraie
		std::cout << nb1 << " est plus grand que " << nb2 << ". ";
	}
	else
	{
		std::cout << nb1 << " n'est pas plus grand que " << nb2 << ". ";
	}


}



// Le plan de test
/*
nb1		nb2			résultat
10		8			10 n'est pas égal à 8, 10 est plus grand que 8
15		15			15 est égal à 15. 15 n'est pas plus grand que 15
-1		0			-1 n'est pas égal à 0. -1 n'est pas plus grand que 0
-2		-2			-2 est égal à -2. -2 n'est pas plus grand que -2

*/