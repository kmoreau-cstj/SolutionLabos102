// But : Ecrire un programme qui demande � l'utilisateur un nombre. Le programme appelle une fonction pour calculer le carr� de 
// ce nombre. Il affiche le r�sultat � l'�cran. Le programme calcule et affiche � l'aide d'une fonction le cube du nombre
// Auteur : Karine Moreau
// Date : 2020-10-26

#include <iostream>
#include "Labo05MesFonctions2.h"
using namespace std;			// Pour all�ger le code et plus mettre std:: avant les cout, cin, endl, ...


int main()
{
	setlocale(LC_ALL, "");

	// D�claration des variables au d�but du programme
	int nombre;

	cout << "Veuillez entrer un nombre pour calculer son carr� : ";
	cin >> nombre;

	cout << "Voici le carr� de " << nombre << " : " << calculerCarre(nombre) << endl;

	cout << "Voici le cube de " << nombre << " : " << calculerCube(nombre) << endl;








	return 0;
}