// But : Ecrire un programme qui demande à l'utilisateur un nombre. Le programme appelle une fonction pour calculer le carré de 
// ce nombre. Il affiche le résultat à l'écran. Le programme calcule et affiche à l'aide d'une fonction le cube du nombre
// Auteur : Karine Moreau
// Date : 2020-10-26

#include <iostream>
#include "Labo05MesFonctions2.h"
using namespace std;			// Pour alléger le code et plus mettre std:: avant les cout, cin, endl, ...


int main()
{
	setlocale(LC_ALL, "");

	// Déclaration des variables au début du programme
	int nombre;

	cout << "Veuillez entrer un nombre pour calculer son carré : ";
	cin >> nombre;

	cout << "Voici le carré de " << nombre << " : " << calculerCarre(nombre) << endl;

	cout << "Voici le cube de " << nombre << " : " << calculerCube(nombre) << endl;








	return 0;
}