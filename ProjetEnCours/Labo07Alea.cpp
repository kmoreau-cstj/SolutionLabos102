// But : écrire un programme qui génère un nombre entier aléatoirement compris entre min et max
// Auteur : Karine Moreau
// Date : 2020-11-09

#include <iostream>
#include <ctime>				// ou time.h
#include "Labo07Fonctions.h"
using namespace std;			// Pour alléger le code et plus mettre std:: avant les cout, cin, endl, ...


int main()
{
	setlocale(LC_ALL, "");

	// Déclaration des variables au début du programme
	int alea;

	// On va changer la série des nombres aléatoires par défaut
	srand(time(NULL));		// s pour seed : graine : un numéro de ligne pour choisir une autre série
							// de nombres entre 0 et 32767 mélangés différemment
	//	srand doit être placé au début du main et pas dans la fonction genererAlea

	alea = rand();			// rand retourne un nombre random 

	cout << "Nombre aléatoire : " << alea << endl;

	for (int i = 0; i < 10; i++)
	{
		cout << "Alea#" << i + 1 << " : " << rand() << endl;
	}

	// on veut simuler le lancé d'un dé : 1 à 6
	for (int i = 0; i < 10; i++)
	{
		cout << "Lancé #" << i + 1 << " : " << genererAlea(1,6)  << endl;
		// nb%2 : 0 ou 1
		// nb%3 : 0 ou 1 ou 2
		// nb%4 : 0 à 3
		// nb%x : 0 à (x-1) 
		// nb%6 : 0 à 5 + 1 : 1 à 6
	}

	// On veut simuler le lancé de deux dés : min=2 à max=12
	for (int i = 0; i < 20; i++)
	{
		cout << "Somme des deux dès : " << genererAlea(2, 12) << endl;
		// nb%11 : 0 à 10 +2 : 2 à 12
	}

	// on veut simuler des nombres compris entre min=10 et max=20
	for (int i = 0; i < 20; i++)
	{
		cout << "Aléa #" << i + 1 << " : " << genererAlea(10, 20) << endl;
		// nb%11 + 10 = 0 à 10 +10 : 10 à 20
	}

	// on veut simuler des nombres compris entre min= 5 et max =20
	for (int i = 0; i < 20; i++)
	{
		cout << "Aléa #" << i + 1 << " : " << genererAlea(5, 20)  << endl;
		// nb%6 +15 : 0 et 5 +15 : 15 et 20
		// nb%14 +5 : 0 à 13 + 5  : 5 à 18
		// nb%16 +5 : 0 à 15 +5   : 5 à 20
 	}


	cout << "Valeur maximale d'un nombre aléatoire : " << RAND_MAX << endl;

	return 0;
}