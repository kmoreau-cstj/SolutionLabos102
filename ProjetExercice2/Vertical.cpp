// But : Demander à l'utilisateur un nombre positif composé de 5 chiffres et de l'afficher verticalement à l'écran
//       ou de signaler un erreur dans le nombre
// Auteur : Karine Moreau
// Date 2020-09-14

#include <iostream>



int main()
{
	setlocale(LC_ALL, "");

	// Déclaration des variables
	int nombre;

	std::cout << "veuillez entrer un nombre composé de 5 chiffres :";
	std::cin >> nombre;

	// Le programme doit vérifier que le nombre a bien 5 chiffres. (fr)
	// (math) : 10 000 <= nombre < 100 000
	// (info)
	if (nombre < 10000)
	{
		std::cout << "Erreur : " << nombre << " a moins de 5 chiffres ou est négatif.";
	}
	else     // ici le nombre a au moins 5 chiffres
	{
		// On doit s'assurer que le nombre a exactement 5 chiffres : < 100 000
		if (nombre >= 100000)
		{
			std::cout << "Erreur : " << nombre << " a plus de 5 chiffres.";
		}
		else       // le nombre est compris entre 10 000 et 99 999
		{
			std::cout << nombre << " a bien 5 chiffres.";

			// Le programme affiche le nombre décomposé de façon verticale
			// 12345 = 1 * 10 000 + 2 * 1 000 + 3 * 100 + 4 * 10 + 5 * 1
			std::cout << std::endl << nombre / 10000;
			std::cout << std::endl << nombre / 1000 % 10;
			std::cout << std::endl << nombre / 100 % 10;
			std::cout << std::endl << nombre / 10 % 10;
			std::cout << std::endl << nombre / 1 % 10 ;
		}
	}

	return 0;
}

/* 
plan de tests
nombre						Résultat à l'écran
12							12 a moins de 5 chiffres
123							123 a moins de 5 chiffres
123456						123456 a plus de 5 chiffres
-12345						-12345 a moins de 5 chiffres ou est négatif
12345						12345 a bien 5 chiffres


*/