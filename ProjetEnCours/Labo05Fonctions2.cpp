// But : Ecrire un programme qui demande à l'utilisateur un nombre. Le programme appelle une fonction pour calculer le carré de 
// ce nombre. Il affiche le résultat à l'écran. Le programme calcule et affiche à l'aide d'une fonction le cube du nombre.
// Le programme demande à l'utilisateur un nombre entier positif et fait appel à une fonction pour calculer la factorielle de ce nombre.
// Le programme affiche le résultat de la factorielle.
// ! 3! = 1*2*3 =6
// 4! = 1*2*3*4 = 24
// 5! = 1*2*3*4*5 = 120
// 0! = 1

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
	double grandNombre;

	/*
	cout << "Veuillez entrer un nombre pour calculer son carré : ";
	cin >> nombre;

	cout << "Voici le carré de " << nombre << " : " << calculerCarre(nombre) << endl;

	cout << "Voici le cube de " << nombre << " : " << calculerCube(nombre) << endl;

	grandNombre = nombre;

	cout << "Voici le cube de " << nombre << " : " << calculerCube(grandNombre) << endl;
	*/
	cout << "Veuillez entrer un nombre entier positif pour calculer sa factorielle : ";
	cin >> nombre;

	// Il faut s'assurer que le nombre est bien positif
	nombre = validerNombrePositif(nombre);

	cout << nombre << "! = " << calculerFactorielle(nombre) << endl;








	return 0;
}