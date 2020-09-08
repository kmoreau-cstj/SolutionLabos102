// But : Demander à l'utilisateur de fournir deux nombres entiers
//       et le programme affiche la somme de ces deux nombres
// Auteur : Karine Moreau
// Date : 2020-09-08


#include <iostream>			// Inclu le coffre à outils pour communiquer avec l'utilisateur : cout, cin



int main()
{
	setlocale(LC_ALL, "");			// Pour convertir correctement les accents de Windows à la console

	// Le programme a besoin de mémoriser deux nombres. Il doit réserver en mémoire vive des cases.
	// Pour déclarer (réserver) une variable (espace mémoire) : il faut indiquer deux informations :
	// 1. Le type de la variable : 
	//								entier : int : indique de réserver 4 octets : 12
	//								réel 10.99 : 0.1099 10 à la puissance 2: float (flottant) : 4 octets
	//																		 double : 8 octets, le nombre peut contenir 302 chiffres
	//								caractère : char (character) : 1 octet : 'A', 'y', '0', '1'
	//                              texte : string (chaine de caractères) 32 octets : "Bienvenue à tous !"
	//                              oui/non : bool (booléen) : 1 octet : true toute valeur différente de 0 , false = 0;
	// 2. le nom de la variable : ne doit pas commencer par un chiffre
	//                            ne doit pas contenir d'espace
	//                            Règle du professeur : le nom de la variable commence toujours par une minuscule
	//												    pas de caractère accentué, 
	//													les autre mots commencent par une majuscule, pas de souligné _

	
	// Déclarer deux entiers : et pour l'instant ces variables n'ont pas de valeur
	int nombre1;
	int nombre2;
	int somme;

	// Initialiser la variable en utilisant l'opérateur d'affectation = 
	// la variable est toujours située à gauche du signe = 
	// la valeur est toujours à droite du signe =. Peut être un nombre, un calcul, une formule, résultat d'une fonction
	// = : <-
	// destination = source;
	//nombre1 = 10;

	// On peut combiner la déclaration et l'initialisation
	//int nb1 = 10;

	// int entier1, entier2;
	
	/*
	char lettre;
	float reel;
	double grosNombre;
	string message;
	bool quitterProgramme;
	*/


	// On demande à l'utilisateur d'entrer la première valeur
	std::cout << "Veuillez entrer un nombre entier :";
	// Le programme doit lire sur le clavier la valeur et la stocker dans une variable
	std::cin >> nombre1;

	// On demande le deuxième nombre
	std::cout << "Veuillez entrer un deuxième nombre entier :";
	// On lit sur le clavier la valeur et on la stocke dans nombre2
	std::cin >> nombre2;



	// Le programme doit calculer la somme des deux nombres
	somme = nombre1 + nombre2;

	// Le programme communique le résultat à l'utilisateur
	std::cout << "La somme de " << nombre1 << " + " << nombre2 << " = " << somme;

	return 0;
}