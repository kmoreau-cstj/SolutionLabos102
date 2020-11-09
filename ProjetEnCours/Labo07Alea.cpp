// But : �crire un programme qui g�n�re un nombre entier al�atoirement compris entre min et max
// Auteur : Karine Moreau
// Date : 2020-11-09

#include <iostream>
#include <ctime>				// ou time.h
#include "Labo07Fonctions.h"
using namespace std;			// Pour all�ger le code et plus mettre std:: avant les cout, cin, endl, ...


int main()
{
	setlocale(LC_ALL, "");

	// D�claration des variables au d�but du programme
	int alea;

	// On va changer la s�rie des nombres al�atoires par d�faut
	srand(time(NULL));		// s pour seed : graine : un num�ro de ligne pour choisir une autre s�rie
							// de nombres entre 0 et 32767 m�lang�s diff�remment
	//	srand doit �tre plac� au d�but du main et pas dans la fonction genererAlea

	alea = rand();			// rand retourne un nombre random 

	cout << "Nombre al�atoire : " << alea << endl;

	for (int i = 0; i < 10; i++)
	{
		cout << "Alea#" << i + 1 << " : " << rand() << endl;
	}

	// on veut simuler le lanc� d'un d� : 1 � 6
	for (int i = 0; i < 10; i++)
	{
		cout << "Lanc� #" << i + 1 << " : " << genererAlea(1,6)  << endl;
		// nb%2 : 0 ou 1
		// nb%3 : 0 ou 1 ou 2
		// nb%4 : 0 � 3
		// nb%x : 0 � (x-1) 
		// nb%6 : 0 � 5 + 1 : 1 � 6
	}

	// On veut simuler le lanc� de deux d�s : min=2 � max=12
	for (int i = 0; i < 20; i++)
	{
		cout << "Somme des deux d�s : " << genererAlea(2, 12) << endl;
		// nb%11 : 0 � 10 +2 : 2 � 12
	}

	// on veut simuler des nombres compris entre min=10 et max=20
	for (int i = 0; i < 20; i++)
	{
		cout << "Al�a #" << i + 1 << " : " << genererAlea(10, 20) << endl;
		// nb%11 + 10 = 0 � 10 +10 : 10 � 20
	}

	// on veut simuler des nombres compris entre min= 5 et max =20
	for (int i = 0; i < 20; i++)
	{
		cout << "Al�a #" << i + 1 << " : " << genererAlea(5, 20)  << endl;
		// nb%6 +15 : 0 et 5 +15 : 15 et 20
		// nb%14 +5 : 0 � 13 + 5  : 5 � 18
		// nb%16 +5 : 0 � 15 +5   : 5 � 20
 	}


	cout << "Valeur maximale d'un nombre al�atoire : " << RAND_MAX << endl;

	return 0;
}