// But : Demander à l'utilisateur deux valeurs entières que le programme stocke dans valeur1 et valeur2. 
//       Le programme appelle une fonction qui échange les valeurs donc dans valeur1 on aura la valeur2 
//       et dans valeur2 on aura valeur1
// Auteur : Karine Moreau
// Date : 2020

#include <iostream>
#include <vector>
#include "Labo06Fonctions.h"
#include "Labo09Fonctions.h"
using namespace std;			// Pour alléger le code et plus mettre std:: avant les cout, cin, endl, ...


int main()
{
	setlocale(LC_ALL, "");

	// Déclaration des variables au début du programme
	vector<int> vec{ 12,0,42,0,0,68,0,-15,89,0,0,0,13,27,52,2,0,7,0,0};
	vector<int> vecVide;


	// Afficher le contenu du vecteur à l'aide d'une fonction
	afficherContenuVecteur(vec);
	cout << "Ajouter 5 valeurs dans vecVide" << endl;
	ajouterValeurALaFinVecteur(vecVide, 5);
	cout << "Ajouter 3 valeurs dans vec" << endl;
	ajouterValeurALaFinVecteur(vec, 3);
	cout << "Contenu de vec Vide après ajout :" << endl;
	afficherContenuVecteur(vecVide);
	cout << "Contenu de vec après ajout :" << endl;
	afficherContenuVecteur(vec);


	return 0;
}