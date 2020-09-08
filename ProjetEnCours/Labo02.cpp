// But : Demander � l'utilisateur de fournir deux nombres entiers
//       et le programme affiche la somme de ces deux nombres
// Auteur : Karine Moreau
// Date : 2020-09-08


#include <iostream>			// Inclu le coffre � outils pour communiquer avec l'utilisateur : cout, cin



int main()
{
	setlocale(LC_ALL, "");			// Pour convertir correctement les accents de Windows � la console

	// Le programme a besoin de m�moriser deux nombres. Il doit r�server en m�moire vive des cases.
	// Pour d�clarer (r�server) une variable (espace m�moire) : il faut indiquer deux informations :
	// 1. Le type de la variable : 
	//								entier : int : indique de r�server 4 octets : 12
	//								r�el 10.99 : 0.1099 10 � la puissance 2: float (flottant) : 4 octets
	//																		 double : 8 octets, le nombre peut contenir 302 chiffres
	//								caract�re : char (character) : 1 octet : 'A', 'y', '0', '1'
	//                              texte : string (chaine de caract�res) 32 octets : "Bienvenue � tous !"
	//                              oui/non : bool (bool�en) : 1 octet : true toute valeur diff�rente de 0 , false = 0;
	// 2. le nom de la variable : ne doit pas commencer par un chiffre
	//                            ne doit pas contenir d'espace
	//                            R�gle du professeur : le nom de la variable commence toujours par une minuscule
	//												    pas de caract�re accentu�, 
	//													les autre mots commencent par une majuscule, pas de soulign� _

	
	// D�clarer deux entiers : et pour l'instant ces variables n'ont pas de valeur
	int nombre1;
	int nombre2;
	int somme;

	// Initialiser la variable en utilisant l'op�rateur d'affectation = 
	// la variable est toujours situ�e � gauche du signe = 
	// la valeur est toujours � droite du signe =. Peut �tre un nombre, un calcul, une formule, r�sultat d'une fonction
	// = : <-
	// destination = source;
	//nombre1 = 10;

	// On peut combiner la d�claration et l'initialisation
	//int nb1 = 10;

	// int entier1, entier2;
	
	/*
	char lettre;
	float reel;
	double grosNombre;
	string message;
	bool quitterProgramme;
	*/


	// On demande � l'utilisateur d'entrer la premi�re valeur
	std::cout << "Veuillez entrer un nombre entier :";
	// Le programme doit lire sur le clavier la valeur et la stocker dans une variable
	std::cin >> nombre1;

	// On demande le deuxi�me nombre
	std::cout << "Veuillez entrer un deuxi�me nombre entier :";
	// On lit sur le clavier la valeur et on la stocke dans nombre2
	std::cin >> nombre2;



	// Le programme doit calculer la somme des deux nombres
	somme = nombre1 + nombre2;

	// Le programme communique le r�sultat � l'utilisateur
	std::cout << "La somme de " << nombre1 << " + " << nombre2 << " = " << somme;

	return 0;
}