// But : D�couvrir comment stocker de l'information dans des fichiers texte pour l'avoir rapidement en m�moire
// Auteur : Karine Moreau
// Date : 2020

#include <iostream>				// Biblioth�que pour utiliser les canaux standard : cin, cout, cerr
#include <fstream>				// Biblioth�que pour utiliser les fichiers sur le disque dur
using namespace std;			// Pour all�ger le code et plus mettre std:: avant les cout, cin, endl, ...


int main()
{
	setlocale(LC_ALL, "");

	// D�claration des constantes
	

	// Premi�re partie : Cr�er le canal sur le fichier
	// 1. indiquer le nom du fichier
	const string FICHIER_ENTREE = "Donnees.txt";			// D'o� proviennent les informations : en entr�e

	// D�claration des variables au d�but du programme
	// 2. Cr�er un canal de circulation des donn�es : input
	ifstream ifDonnee;					// Nom du canal avec sa direction : input, c'est l'�quivalent du cin 
										// mais pour lire les informations � partir d'un fichier. 
										// Le canal ne connait pas encore sa source, o� il va puiser les informations


	// Pour acc�der aux donn�es enregistr�es sur le disque dur, il faut cr�er un canal (une autoroute) vers chaque fichier
	// dont le programme aura besoin. Il faut pr�ciser si sur ce canal on peut lire 
	// (lecture : on lit des informations sur le disque : input : 
    // ifstream : i  pour input, f pour file et stream pour canal) 
	// ou �crire (�criture : ecrire des nouvelles informations sur le disque dur : output :
    // ofstream : o pour output, f pour file et stream pour canal) 

	// 3. Associer le canal avec la source
	ifDonnee.open(FICHIER_ENTREE, ios::in);			// Premier param�tre : le nom du fichier sur le disque dur
													// Deuxi�me param�tre :  le mode d'ouverture du fichier : lecture : input

	// 4. Il faut s'assurer que le canal a pu s'ouvrir correctement sur le fichier. Le fichier peut ne pas exister sur le disque
	// Ou l'utilisateur n'a pas le droit, l'authorisation de lecture sur le fichier
	if (!ifDonnee)
	{
		cerr << "Erreur : Le fichier " << FICHIER_ENTREE << " n'a pas pu s'ouvrir correctement." << endl;
		cerr << "Veuillez v�rifier l'existence de ce fichier sur le disque dur ou ";
		cerr << "assurez-vous d'avoir les droits n�cessaires." << endl;
		system("pause");
		// On va quitter le programme, cela s'est mal pass�, on quitte avec un code d'erreur : 400
		// Si on met return et qu'on est dans le main, on quitte le programme
		// Si on met return et qu'on est dans une fonction, on quitte seulement la fonction, pas le programme.
		// Alors pour forcer � quitter le programme, quelque soit l'endroit (fonction) o� on est, on utilise : exit() avec un code
		// ou abort() sans code d'erreur.
		exit(400);
	}

	// Deuxi�me partie : Lire les informations qui sont sur le fichier
	// 1. Cr�er autant de variables qu'il y a de champs (colonne) dans le fichier
	// Ce sont les donn�es, au lieu d'�tre fournies par l'utilisateur, elles sont fournies par le fichier
	string nomEtudiant;			// Champ 1 : le nom
	string prenomEtudiant;		// Colonne 2 du fichier
	int noteEval1;				// Champ 3 du fichier : int car c'est des valeurs enti�res
	int noteEval2;
	int noteEval3;

	ifDonnee >> nomEtudiant;
	ifDonnee >> prenomEtudiant;
	ifDonnee >> noteEval1;
	ifDonnee >> noteEval2;
	ifDonnee >> noteEval3;



	cout << "Voici les informations lues dans le fichier : " << endl;
	cout << "Nom " << nomEtudiant << endl;
	cout << "pr�nom " << prenomEtudiant << endl;
	cout << "note 1 : " << noteEval1 << endl;
	cout << "note 2 : " << noteEval2 << endl;
	cout << "note 3 : " << noteEval3 << endl;







	return 0;
}