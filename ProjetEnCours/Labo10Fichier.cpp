// But : Découvrir comment stocker de l'information dans des fichiers texte pour l'avoir rapidement en mémoire
// Auteur : Karine Moreau
// Date : 2020

#include <iostream>				// Bibliothèque pour utiliser les canaux standard : cin, cout, cerr
#include <fstream>				// Bibliothèque pour utiliser les fichiers sur le disque dur
using namespace std;			// Pour alléger le code et plus mettre std:: avant les cout, cin, endl, ...


int main()
{
	setlocale(LC_ALL, "");

	// Déclaration des constantes
	

	// Première partie : Créer le canal sur le fichier
	// 1. indiquer le nom du fichier
	const string FICHIER_ENTREE = "Donnees.txt";			// D'où proviennent les informations : en entrée

	// Déclaration des variables au début du programme
	// 2. Créer un canal de circulation des données : input
	ifstream ifDonnee;					// Nom du canal avec sa direction : input, c'est l'équivalent du cin 
										// mais pour lire les informations à partir d'un fichier. 
										// Le canal ne connait pas encore sa source, où il va puiser les informations


	// Pour accéder aux données enregistrées sur le disque dur, il faut créer un canal (une autoroute) vers chaque fichier
	// dont le programme aura besoin. Il faut préciser si sur ce canal on peut lire 
	// (lecture : on lit des informations sur le disque : input : 
    // ifstream : i  pour input, f pour file et stream pour canal) 
	// ou écrire (écriture : ecrire des nouvelles informations sur le disque dur : output :
    // ofstream : o pour output, f pour file et stream pour canal) 

	// 3. Associer le canal avec la source
	ifDonnee.open(FICHIER_ENTREE, ios::in);			// Premier paramètre : le nom du fichier sur le disque dur
													// Deuxième paramètre :  le mode d'ouverture du fichier : lecture : input

	// 4. Il faut s'assurer que le canal a pu s'ouvrir correctement sur le fichier. Le fichier peut ne pas exister sur le disque
	// Ou l'utilisateur n'a pas le droit, l'authorisation de lecture sur le fichier
	if (!ifDonnee)
	{
		cerr << "Erreur : Le fichier " << FICHIER_ENTREE << " n'a pas pu s'ouvrir correctement." << endl;
		cerr << "Veuillez vérifier l'existence de ce fichier sur le disque dur ou ";
		cerr << "assurez-vous d'avoir les droits nécessaires." << endl;
		system("pause");
		// On va quitter le programme, cela s'est mal passé, on quitte avec un code d'erreur : 400
		// Si on met return et qu'on est dans le main, on quitte le programme
		// Si on met return et qu'on est dans une fonction, on quitte seulement la fonction, pas le programme.
		// Alors pour forcer à quitter le programme, quelque soit l'endroit (fonction) où on est, on utilise : exit() avec un code
		// ou abort() sans code d'erreur.
		exit(400);
	}

	// Deuxième partie : Lire les informations qui sont sur le fichier
	// 1. Créer autant de variables qu'il y a de champs (colonne) dans le fichier
	// Ce sont les données, au lieu d'être fournies par l'utilisateur, elles sont fournies par le fichier
	string nomEtudiant;			// Champ 1 : le nom
	string prenomEtudiant;		// Colonne 2 du fichier
	int noteEval1;				// Champ 3 du fichier : int car c'est des valeurs entières
	int noteEval2;
	int noteEval3;

	ifDonnee >> nomEtudiant;
	ifDonnee >> prenomEtudiant;
	ifDonnee >> noteEval1;
	ifDonnee >> noteEval2;
	ifDonnee >> noteEval3;



	cout << "Voici les informations lues dans le fichier : " << endl;
	cout << "Nom " << nomEtudiant << endl;
	cout << "prénom " << prenomEtudiant << endl;
	cout << "note 1 : " << noteEval1 << endl;
	cout << "note 2 : " << noteEval2 << endl;
	cout << "note 3 : " << noteEval3 << endl;







	return 0;
}