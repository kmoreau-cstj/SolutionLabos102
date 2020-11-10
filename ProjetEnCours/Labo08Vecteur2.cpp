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
	vector<int> vec{ 12,0,42,0,0,68,0,-15,89,0,0,0,13,27,52,2,0,7,0,0 };

	
	// 1.	Afficher la taille du vecteur.
	cout << "Taille du vecteur :" << vec.size() <<  endl;

	// 2.	Afficher le contenu de la première case de deux façons différentes.
	cout << "Façon 1 : Contenu de la première case : " << vec.front()<< endl;
	cout << "Façon 2 : Contenu de la première case : " << vec.at(0) << endl;


	// 	3.	Afficher le contenu de la dernière case de deux façons différentes.
	cout << "Façon 1 : Contenu de la dernière case : " << vec.back() <<  endl;
	cout << "Façon 2 : Contenu de la dernière case : " << vec[vec.size()-1] <<endl;
	cout << "Façon 3 : Contenu de la dernière case : " << vec.at(vec.size()-1) << endl;
	
	// 	4.	Afficher le nombre de cases qui contiennent une valeur nulle(0).
	int nbZero = 0;
	cout << "Nombre de cases qui contiennent la valeur zéro : " << endl;
	for (int i = 0; i < vec.size(); i++)
	{
		if (vec.at(i)== 0)
		{
			nbZero++;
		}
	}
	cout << "Le nombre de case contenant la valeur 0 est de :" << nbZero << endl;


	//  5.	Afficher le numéro de la case et son contenu sous la forme vec[#] = Valeur.


    //	6.	Afficher les cases du vecteur dont le contenu est pair.

	/*
		7.	Afficher le vecteur en commençant par la fin.
		8.	Afficher dans un premier temps uniquement les cases d'indice pair et dans un deuxième temps les cases d'indice impair.
	*/


	return 0;
}