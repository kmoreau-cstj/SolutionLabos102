// But : Écrire un programme qui demande à l'utilisateur une année contenant 4 chiffres. 
// Le programme appelle une fonction pour valider que l'année contient bien 4 chiffres.  La fonction retourne une année valide. 
// Ensuite le programme indique à l'utilisateur si l'année est bissextile ou non. Pour vérifier cette information, 
// le programme appelle la fonction etreBissextile. wiki pour savoir comment déterminer si une année est bissextile
// Auteur : Karine Moreau
// Date : 2020

#include <iostream>
#include "Labo05MesFonctions2.h"

using namespace std;			// Pour alléger le code et plus mettre std:: avant les cout, cin, endl, ...


int main()
{
	setlocale(LC_ALL, "");

	// Déclaration des variables au début du programme
	int annee;

	// Demander à l'utilisateur une année avec 4 chiffres
	cout << "Veuillez entrer une année au format aaaa : ";
	cin >> annee;

	// Tant que annee ne contient pas 4 chiffres la redemander à l'utilisateur en utilisant une fonction
	annee = validerAnnee(annee);


	// Le programme appelle la fonction etreBissextile et il affiche un message disant que l'année est bissextile ou pas.
	if (etreBissextile(annee))
	{
		cout << annee << " est bissextile." << endl;
	}
	else
	{
		cout << annee << " n'est pas bissextile." << endl;

	}








	return 0;
}