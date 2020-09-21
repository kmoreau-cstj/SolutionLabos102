// But : Demander � l'utilisateur une lettre et dire si c'est une voyelle ou une consonne
// Auteur : Karine Moreau
// Date : 2020-09-21
/*
char permet de m�moriser un caract�re

pour �crire a en C++ std::cout << 'a' ; il faut mettre le caract�re entre apostrophe '
"a" est diff�rent de 'a' : le premier c'est une chaine de caract�res (string) et le deuxi�me, un seul et unique caract�re


char lettre = '0';

*/

#include <iostream>

void main()
{
	setlocale(LC_ALL, "");

	// D�claration des variables
	char lettre;

	// DEmander � l'utilisateur une lettre
	std::cout << "Veuillez entrer une lettre de l'alphabet :";
	std::cin >> lettre;

	// On v�rifie que l'utilisateur a bien entr� une lettre de l'alphabet
	if (lettre >= 'A' && lettre <= 'Z' || lettre >= 'a' && lettre <= 'z')
	{
		// Le programme affiche si la lettre est une voyelle ou une consonne
		switch (lettre)
		{
		case 'a':
		case 'A':
		case 'e':
		case 'E':
		case 'i':
		case 'I':
		case 'o':
		case 'O':
		case 'u':
		case 'U':
		case 'y':
		case 'Y':
			std::cout << lettre << " est une voyelle";
			break;
		default:
			std::cout << lettre << " est une consonne";
			break;
		}
	}
	else
		std::cout << lettre << " n'est pas une lettre de l'alphabet";
}

/*
Plan de tests

B			consonne
A			voyelle
n			consonne
y			voyelle
0			Erreur : ce n'est pas une lettre de l'alphabet
+			Erreur : ce n'est pas une lettre de l'alphabet
z			consonne

*/