// But : Écrire un programme qui affiche un message à l'écran et apprendre à gérer les versions du code
// avec l'application git et de le publier dans le nuage avec GitHub
// Auteur : Karine Moreau
// Date : 2020-09-03

#include <iostream>				// Intègre un coffre à outils (cout, cin, ...) pour communiquer avec l'utilisateur 

int main(/*liste des paramètres éventuels*/)
{			// Un bloc d'instructions

	// Pour gérer efficacement la conversion des caractères accentués
	setlocale(LC_ALL, "");

	// Afficher le message à l'écran
	std::cout << "Bienvenue à tous !";

	return 0;
}
