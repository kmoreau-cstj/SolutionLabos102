// But : �crire un programme qui demande � l'utilisateur une ann�e contenant 4 chiffres. 
// Le programme appelle une fonction pour valider que l'ann�e contient bien 4 chiffres.  La fonction retourne une ann�e valide. 
// Ensuite le programme indique � l'utilisateur si l'ann�e est bissextile ou non. Pour v�rifier cette information, 
// le programme appelle la fonction etreBissextile. wiki pour savoir comment d�terminer si une ann�e est bissextile
// Auteur : Karine Moreau
// Date : 2020

#include <iostream>
#include "Labo05MesFonctions2.h"

using namespace std;			// Pour all�ger le code et plus mettre std:: avant les cout, cin, endl, ...


int main()
{
	setlocale(LC_ALL, "");

	// D�claration des variables au d�but du programme
	int annee;

	// Demander � l'utilisateur une ann�e avec 4 chiffres
	cout << "Veuillez entrer une ann�e au format aaaa : ";
	cin >> annee;

	// Tant que annee ne contient pas 4 chiffres la redemander � l'utilisateur en utilisant une fonction
	annee = validerAnnee(annee);


	// Le programme appelle la fonction etreBissextile et il affiche un message disant que l'ann�e est bissextile ou pas.
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