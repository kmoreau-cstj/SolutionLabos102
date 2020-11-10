// But : Comprendre et manipuler des vecteurs
// Un vecteur est une suite cons�cutive de cases m�moire du m�me type : un regroupement de variable de m�me type
// Auteur : Karine Moreau
// Date : 2020-11-10

#include <iostream>
#include <vector>				// Pour utiliser le type vector dans le programme
using namespace std;			// Pour all�ger le code et plus mettre std:: avant les cout, cin, endl, ...


int main()
{
	setlocale(LC_ALL, "");

	// D�claration des variables au d�but du programme
	int nbElement = 15;
	int nbEntier;
	int contenu;

	vector<int>	vecEntier;					// On vient de cr�er un vecteur vide de int. 
	vector<float> vecDeReel(8);				// on appelle le constructeur de vector et on lui passe en param�tre 
											// le nombre d'�l�ments que contiendra le vecteur. Chaque �l�ment sera initialis� � 0
	// d�claration et Initialisation d'un vecteur
	vector<double> vecDeDouble(nbElement, 0.05);
											// On appelle sur surcharge du constructeur cette fois-ci avec deux param�tres
											// le nombre d'�l�ments et la valeur avec laquelle chaque �l�ment sera initialis�
	vector<char> vecDeVoyelle{ 'a', 'e', 'i', 'o', 'u', 'y', 'A', 'E', 'I','O', 'U', 'Y' };
											// On cr�e un vecteur de 6 �l�ments qui ont tous une valeur diff�rente qui est 
	                                        //�num�r�e entre des accolades s�par�e par des virgules
	
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
		cout << "Entrer la valeur enti�re #" << i + 1 << " : ";
		cin >> contenu;
		// Il faut ajouter un �l�ment � la fin du vecteur et lui mettre la valeur dans la nouvelle case
		vecEntier.push_back(contenu);
	}

	for (int i = 0; i < vecEntier.size(); i++)
	{
		cout << "Contenu de la case #" << i + 1 << " : " << vecEntier.at(i) << endl;
	}

	// Afficher le contenu du vecteur de r�el
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

	// Afficher pour v�rifier
	for (int i = 0; i < vecDeReel.size(); i++)
	{
		cout << "Valeur #" << i + 1 << " : " << vecDeReel.at(i) << endl;
	}













	return 0;
}