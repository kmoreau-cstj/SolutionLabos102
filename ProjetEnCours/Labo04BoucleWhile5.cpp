// But : Écrire un programme qui affiche un menu. Le programme demande à l'utilisateur son choix et 
// tant que l'utilisateur ne donne pas le choix correct, un choix qui est compris entre 1 et 6, il le redemande à l'utilisateur
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
using namespace std;

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

	//tant que l'utilisateur ne donne pas le choix correct, un choix qui est compris entre 1 et 6, il le redemande à l'utilisateur

	while (!(choix >= 1 && choix<=6)) // while (choix < 1 || choix > 6  )
	{
		cout << "Erreur : Le choix doit être compris entre 1 et 6." << endl;
		system("pause");

		system("cls");				// cls : Clear screen
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

	// Si le programme arrive là, c'est que le choix est bien compris entre 1 et 6
	std::cout << "Vous avez fait le bon choix" << std::endl;
	


	return 0;
}
