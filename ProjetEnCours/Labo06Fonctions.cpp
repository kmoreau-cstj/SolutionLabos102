#include "Labo06Fonctions.h"
#include<iostream>
#include <string>

using namespace std;


int lireEntier()
{
	string clavier;
	
	getline(cin, clavier, '\n');	// getline va permettre de lire et supprimer tout ce qu'il y a dans la mémoire du clavier
// Problème, si la variable clavier ne commence pas par des chiffres, stoi plante le programme.
// Avant d'utiliser stoi, il faut s'assurer que la variable clavier n'est pas vide, 
// qu'elle commence par un chiffre positif ou négatif
	while (!(!clavier.empty() && ((clavier.front() >= '0' && clavier.front() <= '9')
		|| (clavier.length() > 1 && clavier.front() == '-' && clavier.at(1) >= '0' && clavier.at(1) <= '9'))))
	{
		// on veut un chiffre positif ou un chiffre négatif : le signe moins le premier caractère et le deuxième chiffre 
		// doit être entre 0 et 9)
		cout << "Erreur : Vous devez taper des chiffres." << endl;
		cout << "Veuillez entrer un nombre entier :";
		//cin >> nombre;
		getline(cin, clavier, '\n');	// getline va permettre de lire et supprimer tout ce qu'il y a dans la mémoire du clavier
	}

	// Quand on sort de la boucle, on est sûr que clavier commence par un chiffre, on peut le convertir

	return stoi(clavier);			// s pour string to et i pour integer permet de convertir la chaine passée 
									// en paramètre en valeur entière
	// On constate que si on tape un caractère qui n'est pas un chiffre (0 à 9), le programme part en boucle infinie
	// Pour corriger ce problème, on va toujours lire le clavier avec un getline et on stocke l'information dans un string
	// Et ensuite on convertit la chaine de caractères en entier ou en float ou double

    
}

double lireReel()
{
	string clavier;

	getline(cin, clavier, '\n');	// getline va permettre de lire et supprimer tout ce qu'il y a dans la mémoire du clavier
// Problème, si la variable clavier ne commence pas par des chiffres, stoi plante le programme.
// Avant d'utiliser stoi, il faut s'assurer que la variable clavier n'est pas vide, 
// qu'elle commence par un chiffre positif ou négatif
	while (!(!clavier.empty() && ((clavier.front() >= '0' && clavier.front() <= '9')
		|| (clavier.length() > 1 && clavier.front() == '-' && clavier.at(1) >= '0' && clavier.at(1) <= '9'))))
	{
		// on veut un chiffre positif ou un chiffre négatif : le signe moins le premier caractère et le deuxième chiffre 
		// doit être entre 0 et 9)
		cout << "Erreur : Vous devez taper des chiffres." << endl;
		cout << "Veuillez entrer un nombre réel :";
		//cin >> nombre;
		getline(cin, clavier, '\n');	// getline va permettre de lire et supprimer tout ce qu'il y a dans la mémoire du clavier
	}

	// Quand on sort de la boucle, on est sûr que clavier commence par un chiffre, on peut le convertir

	return stod(clavier);			// s pour string to et i pour integer permet de convertir la chaine passée 
									// en paramètre en valeur entière
	// On constate que si on tape un caractère qui n'est pas un chiffre (0 à 9), le programme part en boucle infinie
	// Pour corriger ce problème, on va toujours lire le clavier avec un getline et on stocke l'information dans un string
	// Et ensuite on convertit la chaine de caractères en entier ou en float ou double


}

char lireCaractere()
{
	// Déclaration des variables
	string clavier;

	getline(cin, clavier, '\n');
	
	// Il faut juste s'assurer que la chaine contient au moins un caractère
	while (clavier.empty())
	{
		cout << "Erreur : Vous devez taper au moins un caractère." << endl;
		cout << "Veuillez entrer un caractère :" << endl;
		getline(cin, clavier, '\n');
	}

	// Ici on est sûr d'avoir ou moins un caractère.

	return clavier.front();
}
