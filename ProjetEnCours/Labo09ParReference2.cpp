// But : Demander � l'utilisateur deux valeurs enti�res que le programme stocke dans valeur1 et valeur2. 
//       Le programme appelle une fonction qui �change les valeurs donc dans valeur1 on aura la valeur2 
//       et dans valeur2 on aura valeur1
// Auteur : Karine Moreau
// Date : 2020

#include <iostream>
#include <vector>
#include "Labo06Fonctions.h"
#include "Labo09Fonctions.h"
using namespace std;			// Pour all�ger le code et plus mettre std:: avant les cout, cin, endl, ...


int main()
{
	setlocale(LC_ALL, "");
	int valeur1 = 25;
	int valeur2 = 100;

	/*
	cout << "Dans la fonction qui appelle faireUnTest " << endl;
	cout << "valeur 1 : " << valeur1 << endl;
	cout << "valeur 2 : " << valeur2 << endl;

	cout << "appel de la fonction faireUnTest :" << endl;
	//faireUnTest(valeur1, valeur2);			// ici c'est l'appel de la fonction : pour l'ex�cuter
	//faireUnTest(25, 100);								// Le deuxi�me param�tre doit �tre ABOSLUMENT une variable
	//faireUnTest(valeur1 * 2 + 1, valeur2 * 3 - 1);	// qui occupe un espace en m�moire	
	//faireUnTest(sqrt(valeur1), sqrt(valeur2));

	faireUnTest2(valeur1, valeur2);

	cout << "Dans la fonction qui appelle faireUnTest, apr�s l'ex�cution de la fonction " << endl;
	cout << "valeur 1 : " << valeur1 << endl;
	cout << "valeur 2 : " << valeur2 << endl;
	*/
	// D�claration des variables au d�but du programme
	vector<int> vec{ 12,0,42 }; // ,0,0,68,0,-15,89,0,0,0,13,27,52,2,0,7,0,0};
	vector<int> vecVide;

	// Afficher le contenu du vecteur � l'aide d'une fonction

	afficherContenuVecteur(vec);
	cout << "Ajouter 5 valeurs dans vecVide" << endl;
	ajouterValeurALaFinVecteur(vecVide, 5);
	cout << "Ajouter 3 valeurs dans vec" << endl;
	ajouterValeurALaFinVecteur(vec, 3);
	cout << "Contenu de vec Vide apr�s ajout :" << endl;
	afficherContenuVecteur(vecVide);
	cout << "Contenu de vec apr�s ajout :" << endl;
	afficherContenuVecteur(vec);


	// 1. �crivez une fonction qui saisit les valeurs dans un vecteur tant que l�utilisateur n�a pas entr� la valeur 
	// pass�e en param�tre pour mettre fin � la saisie, par exemple -1.
	saisirValeurVecteur(vec, -1);
	afficherContenuVecteur(vec);
	saisirValeurVecteur(vecVide, -999);
	afficherContenuVecteur(vecVide);


	return 0;
}