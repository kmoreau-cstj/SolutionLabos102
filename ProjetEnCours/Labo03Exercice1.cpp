// But : Écrire un programme qui affiche un menu. Le programme demande à l'utilisateur son choix et
// il confirme l'opération, sinon il affiche un message d'erreur "Le choix doit être compris entre 1 et 6.
/*
	1. Addition
	2. Soustraction
	3. Multiplication
	4. Division
	5. Modulo
	6. Quitter !!!
*/

// Auteur : Karine Moreau
// Date : 2020-09-15

#include<iostream>


int main()
{
	setlocale(LC_ALL, "");
	// Déclaration des variables
	int choix;

	// Le programme affiche le menu
	std::cout << "1. Addition" << std::endl;
	std::cout << "2. Soustraction" << std::endl;
	std::cout << "3. Multiplication" << std::endl;
	std::cout << "4. Division" << std::endl;
	std::cout << "5. Modulo" << std::endl;
	std::cout << "6. Quitter" << std::endl;

	// Le programme demande le choix à l'utilisateur
	std::cout << "Votre choix --> ";
	std::cin >> choix;
	// Si le choix est compris entre 1 et 6, le programme confirme le choix en toute lettre
	if (choix >= 1)
	{
		if (choix <= 6)
		{
			if (choix == 1)
			{
				std::cout << "Addition";
			}
			if (choix == 2)
			{
				std::cout << "Soustraction";
			}
			if (choix == 3)
			{
				std::cout << "Multiplication";
			}
			if (choix == 4)
			{
				std::cout << "Division";
			}
			if (choix == 5)
			{
				std::cout << "Modulo";
			}
			if (choix == 6)
			{
				std::cout << "Quitter";
			}
		}
		// sinon, le programme affiche un message d'erreur
		else
			std::cout << "Le choix doit être compris entre 1 et 6";
	}
	else
		std::cout << "Le choix doit être compris entre 1 et 6";




	return 0;
}
