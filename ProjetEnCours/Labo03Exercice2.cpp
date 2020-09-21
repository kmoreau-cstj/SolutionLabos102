// But : Demander à l'utilisateur 5 nombres entiers. Le programme doit afficher LE plus grand
// Auteur : Karine Moreau
// Date : 2020-09-17

#include <iostream>

int main()
{ 
	setlocale(LC_ALL, "");

	// Déclaration des variables
	int nb1, nb2, nb3, nb4, nb5;
	int lePlusGrand;

	std::cout << "Veuillez entrer l'entier 1 : ";
	std::cin >> nb1;
	std::cout << "Veuillez entrer l'entier 2 : ";
	std::cin >> nb2;
	std::cout << "Veuillez entrer l'entier 3 : ";
	std::cin >> nb3;
	std::cout << "Veuillez entrer l'entier 4 : ";
	std::cin >> nb4;
	std::cout << "Veuillez entrer l'entier 5 : ";
	std::cin >> nb5;

	lePlusGrand = nb1;				// Je fais l'hypothèse que le nombre1 est le plus grand
	if (lePlusGrand < nb2)
		lePlusGrand = nb2;
	if (lePlusGrand < nb3)
		lePlusGrand = nb3;
	if (lePlusGrand < nb4)
		lePlusGrand = nb4; 
	if (lePlusGrand < nb5)
		lePlusGrand = nb5;

	std::cout << lePlusGrand << " est le plus grand.";


	/*
	// Il faut comparer les lePlus grand avec les 4 quatre autres nombres entre eux
	if (nb1 >= nb2 && nb1 >= nb3 )
	{
		std::cout << nb1 << " est le plus grand nombre.";
	}
	else 
		if (nb2 >= nb1 && nb2 >= nb3)
			std::cout << nb2 << " est le plus grand nombre.";
		else
			std::cout << nb3 << " est le plus grand nombre.";

	//std::cout << "Le plus grand des trois nombres est : " << ? ? ? ;
	*/

	return 0;
}

// Plan de tests
/*
	nb1	nb2	nb3			Résultat
	1	2	3			3
	1	3	2			3
	3	2	1			3
	1	1	3			3
	3	1	1			3		
	3	3	3			3
	3	3	4			4
	-1	-2	-3			-1
	0	1	3			3
	0	-1	-2			0
*/