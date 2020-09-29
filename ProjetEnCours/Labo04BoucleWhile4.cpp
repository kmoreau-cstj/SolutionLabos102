// But : Écrire un programme qui affiche un menu. Le programme demande à l'utilisateur son choix et tant que l'utilisateur ne quitte
// pas il affiche de nouveau le menu
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

#include <iostream>


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

	// Tant que l'utilisateur ne choisit pas de quitter, le programme affiche de nouveau le menu
	while (choix !=6)
	{
	

		
		
		
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
	}

	// Si le programme arrive là, c'est que le choix == 6
	std::cout << "Vous avez choisi de quitter" << std::endl;
	


	return 0;
}
