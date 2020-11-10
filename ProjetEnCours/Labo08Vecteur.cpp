// But : Comprendre et manipuler des vecteurs
// Un vecteur est une suite consécutive de cases mémoire du même type : un regroupement de variable de même type
// Auteur : Karine Moreau
// Date : 2020-11-10

#include <iostream>
#include <vector>				// Pour utiliser le type vector dans le programme
using namespace std;			// Pour alléger le code et plus mettre std:: avant les cout, cin, endl, ...


int main()
{
	setlocale(LC_ALL, "");

	// Déclaration des variables au début du programme
	int nbElement = 15;
	int nbEntier;
	int contenu;

	vector<int>	vecEntier;					// On vient de créer un vecteur vide de int. 
	vector<float> vecDeReel(8);				// on appelle le constructeur de vector et on lui passe en paramètre 
											// le nombre d'éléments que contiendra le vecteur. Chaque élément sera initialisé à 0
	// déclaration et Initialisation d'un vecteur
	vector<double> vecDeDouble(nbElement, 0.05);
											// On appelle sur surcharge du constructeur cette fois-ci avec deux paramètres
											// le nombre d'éléments et la valeur avec laquelle chaque élément sera initialisé
	vector<char> vecDeVoyelle{ 'a', 'e', 'i', 'o', 'u', 'y', 'A', 'E', 'I','O', 'U', 'Y' };
											// On crée un vecteur de 6 éléments qui ont tous une valeur différente qui est 
	                                        //énumérée entre des accolades séparée par des virgules
	
	// Afficher le contenu d'un vecteur
	cout << "Contenu du vecteur vecDeVoyelle :" << endl;
	for (int i = 0; i < vecDeVoyelle.size(); i++)
	{
		cout << "Case#" << i << " : " << vecDeVoyelle.at(i) << endl;
		cout << "Case#" << i << " : " << vecDeVoyelle[i] << endl;
	}


	// On tente d'afficher un vecteur vide ????
	cout << "Contenu du vecEntier : " << endl;

	if (vecEntier.empty())
	{
		cout << "Le vecteur est vide." << endl;
	}
	else
		for (int i = 0; i < vecEntier.size(); i++)
		{
			cout << vecEntier[i] << endl;
		}




	// Ajouter des valeurs dans un vecteur
	cout << "Combien d'entiers voulez-vous : ";
	cin >> nbEntier;

	for (int i = 0; i < nbEntier; i++)
	{
		cout << "Entrer la valeur entière #" << i + 1 << " : ";
		cin >> contenu;
		// Il faut ajouter un élément à la fin du vecteur et lui mettre la valeur dans la nouvelle case
		vecEntier.push_back(contenu);
	}

	for (int i = 0; i < vecEntier.size(); i++)
	{
		cout << "Contenu de la case #" << i + 1 << " : " << vecEntier.at(i) << endl;
	}

	// Afficher le contenu du vecteur de réel
	for (int i = 0; i < vecDeReel.size(); i++)
	{
		cout << vecDeReel.at(i) << endl;
	}

	// Modifier les valeurs dans le vecteur vecDeReel
	for (int i = 0; i < vecDeReel.size(); i++)
	{
		cout << "Entrez la valeur#" << i + 1 << " : ";
		cin >> vecDeReel.at(i);
	}

	// Afficher pour vérifier
	for (int i = 0; i < vecDeReel.size(); i++)
	{
		cout << "Valeur #" << i + 1 << " : " << vecDeReel.at(i) << endl;
	}













	return 0;
}