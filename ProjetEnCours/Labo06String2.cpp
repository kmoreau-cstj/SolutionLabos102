// But :
// Auteur : Karine Moreau
// Date : 2020

#include <iostream>
#include <string>				// Biblioth�que contenant les fonctions sp�cifiques aux string : getline
using namespace std;			// Pour all�ger le code et plus mettre std:: avant les cout, cin, endl, ...


int main()
{
	setlocale(LC_ALL, "");

	// D�claration des variables au d�but du programme
	string salutation;

	// Pareil que pour les types de base
	// D�claration : type suivi du nom
	// Op�rateur de comparaison == != > < >= <= ordre alphab�tique
	// Op�rateur d'affectation = : salutation = "Salut"; 
	// cin >> salutation;
	// cout << salutation;

	// Diff�rence : c'est quand on veut mettre un espace dans la variable. La probl�matique vient du cin >> car il admet 
	// comme s�parateur l'espace, la tabulation ou en enter et surtout parce qu'il les laisse trainer dans la m�moire du
	// clavier
	// Si on veut des espaces, on ne peut plus utiliser cin >>, on doit utiliser getline et apr�s chaque cin >> on doit faire 
	// le m�nage dans la m�moire du clavier en utilisant cin.ignore() ou cin.ignore(1, '\n')

	cout << endl;
	cout << "Juste apr�s la d�claration : " << endl;
	cout << "Combien de caract�res contient la variable salutation : " << salutation.length() << endl;
	cout << "Quelle est la capacit� de la variable salutation : " << salutation.capacity() << endl;
	cout << "Quelle est la capacit� maximale de la variable salutation : " << salutation.max_size() << endl;
	cout << "Quelle est la taille de la variable salutation : " << salutation.size() << endl;


	salutation = "Bienvenue";
	cout << endl; 
	cout << "Juste apr�s l'initialisation : la variable contient " << salutation << endl;
	cout << "Combien de caract�res contient la variable salutation : " << salutation.length() << endl;
	cout << "Quelle est la capacit� de la variable salutation : " << salutation.capacity() << endl;
	cout << "Quelle est la capacit� maximale de la variable salutation : " << salutation.max_size() << endl;
	cout << "Quelle est la taille de la variable salutation : " << salutation.size() << endl;

	// On veut ajouter du texte � la fin de la variable salutation : concat�ner
	salutation += " � toi";				//salutation = salutation + " � toi";
	cout << endl;
	cout << "Juste apr�s la concat�nation : la variable contient " << salutation << endl;
	cout << "Combien de caract�res contient la variable salutation : " << salutation.length() << endl;
	cout << "Quelle est la capacit� de la variable salutation : " << salutation.capacity() << endl;
	cout << "Quelle est la capacit� maximale de la variable salutation : " << salutation.max_size() << endl;
	cout << "Quelle est la taille de la variable salutation : " << salutation.size() << endl;

	// On veut ajouter du texte � la fin de la variable salutation : concat�ner
	salutation += " et � tous les autres !";				
	cout << endl;
	cout << "Juste apr�s la deuxi�me concat�nation : la variable contient " << salutation << endl;
	cout << "Combien de caract�res contient la variable salutation : " << salutation.length() << endl;
	cout << "Quelle est la capacit� de la variable salutation : " << salutation.capacity() << endl;
	cout << "Quelle est la capacit� maximale de la variable salutation : " << salutation.max_size() << endl;
	cout << "Quelle est la taille de la variable salutation : " << salutation.size() << endl;

	cout << endl;
	cout << "Test de plusieurs fonctions sur les string" << endl;
	cout << "R�sultat de back : derni�re lettre de la variable salutation : " << salutation.back() << endl;
	cout << "R�sultat de front : premi�re lettre de la variable salutation :  " << salutation.front() << endl;
	cout << "La 3i�me lettre de la variable salutation : " << salutation.at(3-1) << endl;
	cout << "Afficher la premi�re lettre avec at : " << salutation.at(0) << endl;
	cout << "Afficher la derni�re lettre avec at : " << salutation.at(salutation.length()-1) << endl;

	salutation.erase(9,20);
	cout << endl;
	cout << "apr�s le erase : contenu de la variable salutation : " << salutation << endl;

	// On nettoie la variable
	salutation.clear();
	cout << endl;
	cout << "Juste apr�s le nettoyage : la variable contient " << salutation << endl;
	cout << "Combien de caract�res contient la variable salutation : " << salutation.length() << endl;
	cout << "Quelle est la capacit� de la variable salutation : " << salutation.capacity() << endl;
	cout << "Quelle est la capacit� maximale de la variable salutation : " << salutation.max_size() << endl;
	cout << "Quelle est la taille de la variable salutation : " << salutation.size() << endl;



	if (salutation.empty())
	{
		cout << "Il n'est pas possible d'afficher un caract�re de la chaine car elle est vide." << endl;
	}
	else
		cout << "R�sultat de back : derni�re lettre de la variable salutation : " << salutation.back() << endl;

	//salutation = "";
	// D�fi : afficher les lettres de salutation � la verticale
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