// But :
// Auteur : Karine Moreau
// Date : 2020

#include <iostream>
#include <string>				// Bibliothèque contenant les fonctions spécifiques aux string : getline
using namespace std;			// Pour alléger le code et plus mettre std:: avant les cout, cin, endl, ...


int main()
{
	setlocale(LC_ALL, "");

	// Déclaration des variables au début du programme
	string salutation;

	// Pareil que pour les types de base
	// Déclaration : type suivi du nom
	// Opérateur de comparaison == != > < >= <= ordre alphabétique
	// Opérateur d'affectation = : salutation = "Salut"; 
	// cin >> salutation;
	// cout << salutation;

	// Différence : c'est quand on veut mettre un espace dans la variable. La problématique vient du cin >> car il admet 
	// comme séparateur l'espace, la tabulation ou en enter et surtout parce qu'il les laisse trainer dans la mémoire du
	// clavier
	// Si on veut des espaces, on ne peut plus utiliser cin >>, on doit utiliser getline et après chaque cin >> on doit faire 
	// le ménage dans la mémoire du clavier en utilisant cin.ignore() ou cin.ignore(1, '\n')

	cout << endl;
	cout << "Juste après la déclaration : " << endl;
	cout << "Combien de caractères contient la variable salutation : " << salutation.length() << endl;
	cout << "Quelle est la capacité de la variable salutation : " << salutation.capacity() << endl;
	cout << "Quelle est la capacité maximale de la variable salutation : " << salutation.max_size() << endl;
	cout << "Quelle est la taille de la variable salutation : " << salutation.size() << endl;


	salutation = "Bienvenue";
	cout << endl; 
	cout << "Juste après l'initialisation : la variable contient " << salutation << endl;
	cout << "Combien de caractères contient la variable salutation : " << salutation.length() << endl;
	cout << "Quelle est la capacité de la variable salutation : " << salutation.capacity() << endl;
	cout << "Quelle est la capacité maximale de la variable salutation : " << salutation.max_size() << endl;
	cout << "Quelle est la taille de la variable salutation : " << salutation.size() << endl;

	// On veut ajouter du texte à la fin de la variable salutation : concaténer
	salutation += " à toi";				//salutation = salutation + " à toi";
	cout << endl;
	cout << "Juste après la concaténation : la variable contient " << salutation << endl;
	cout << "Combien de caractères contient la variable salutation : " << salutation.length() << endl;
	cout << "Quelle est la capacité de la variable salutation : " << salutation.capacity() << endl;
	cout << "Quelle est la capacité maximale de la variable salutation : " << salutation.max_size() << endl;
	cout << "Quelle est la taille de la variable salutation : " << salutation.size() << endl;

	// On veut ajouter du texte à la fin de la variable salutation : concaténer
	salutation += " et à tous les autres !";				
	cout << endl;
	cout << "Juste après la deuxième concaténation : la variable contient " << salutation << endl;
	cout << "Combien de caractères contient la variable salutation : " << salutation.length() << endl;
	cout << "Quelle est la capacité de la variable salutation : " << salutation.capacity() << endl;
	cout << "Quelle est la capacité maximale de la variable salutation : " << salutation.max_size() << endl;
	cout << "Quelle est la taille de la variable salutation : " << salutation.size() << endl;

	cout << endl;
	cout << "Test de plusieurs fonctions sur les string" << endl;
	cout << "Résultat de back : dernière lettre de la variable salutation : " << salutation.back() << endl;
	cout << "Résultat de front : première lettre de la variable salutation :  " << salutation.front() << endl;
	cout << "La 3ième lettre de la variable salutation : " << salutation.at(3-1) << endl;
	cout << "Afficher la première lettre avec at : " << salutation.at(0) << endl;
	cout << "Afficher la dernière lettre avec at : " << salutation.at(salutation.length()-1) << endl;

	salutation.erase(9,20);
	cout << endl;
	cout << "après le erase : contenu de la variable salutation : " << salutation << endl;

	// On nettoie la variable
	salutation.clear();
	cout << endl;
	cout << "Juste après le nettoyage : la variable contient " << salutation << endl;
	cout << "Combien de caractères contient la variable salutation : " << salutation.length() << endl;
	cout << "Quelle est la capacité de la variable salutation : " << salutation.capacity() << endl;
	cout << "Quelle est la capacité maximale de la variable salutation : " << salutation.max_size() << endl;
	cout << "Quelle est la taille de la variable salutation : " << salutation.size() << endl;



	if (salutation.empty())
	{
		cout << "Il n'est pas possible d'afficher un caractère de la chaine car elle est vide." << endl;
	}
	else
		cout << "Résultat de back : dernière lettre de la variable salutation : " << salutation.back() << endl;

	//salutation = "";
	// Défi : afficher les lettres de salutation à la verticale
	/*
	S		// front()  // at(0)
	a					// at(1)
	l					// at(2)
	u					// at(3)
	t		// back()	// at(length()-1)
	*/
	for (int position = 0; position < salutation.length(); position++)
	{
		cout << salutation.at(position) << endl;
	}



	return 0;
}