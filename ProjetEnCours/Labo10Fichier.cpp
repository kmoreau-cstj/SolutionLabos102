// But : D�couvrir comment stocker de l'information dans des fichiers texte pour l'avoir rapidement en m�moire
// Auteur : Karine Moreau
// Date : 2020

#include <iostream>				// Biblioth�que pour utiliser les canaux standard : cin, cout, cerr
#include <iomanip>				// Biblioht�que de fonctions pour formater l'affichage des donn�es (alignement (droite ou gauche),
								// l'affichage du nombre de chiffres apr�s la virgule, la largeur des colonnes, le caract�re de remplissage, ...)
#include <fstream>				// Biblioth�que pour utiliser les fichiers sur le disque dur
using namespace std;			// Pour all�ger le code et plus mettre std:: avant les cout, cin, endl, ...


int main()
{
	setlocale(LC_ALL, "");

	// D�claration des constantes
	const int COL1 = 20;
	const int COL2 = 20;
	const int COL3 = 10;
	const int COL4 = 10;
	const int COL5 = 10;
	const int COL6 = 10;
	const int COL7 = 10;

	const int LIGNE = COL1 + COL2 + COL3 + COL4 + COL5 + COL6 + COL7;
	const string TITRE = "R�sultats du cours de programmation structur�e";
	/*
----------------------------------------------------------------------------------
                  R�sultats du cours de programmation structur�e
----------------------------------------------------------------------------------
Nom             Pr�nom              Eval 1    Eval 2    Eval 3     Total R�sultats 
----------------------------------------------------------------------------------
	
	*/

	// Premi�re partie : Cr�er le canal sur le fichier
	// 1. indiquer le nom du fichier
	const string FICHIER_ENTREE = "Donnees.txt";			// D'o� proviennent les informations : en entr�e
	const string FICHIER_RESULTAT = "Resultats.txt";

	// D�claration des variables au d�but du programme
	// 2. Cr�er un canal de circulation des donn�es : input
	ifstream ifDonnee;					// Nom du canal avec sa direction : input, c'est l'�quivalent du cin 
										// mais pour lire les informations � partir d'un fichier. 
										// Le canal ne connait pas encore sa source, o� il va puiser les informations
	ofstream ofResultat;				// Ce canal part de la m�moire vive et va vers un fichier sur le disque dur. Il �crit


	// Pour acc�der aux donn�es enregistr�es sur le disque dur, il faut cr�er un canal (une autoroute) vers chaque fichier
	// dont le programme aura besoin. Il faut pr�ciser si sur ce canal on peut lire 
	// (lecture : on lit des informations sur le disque : input : 
    // ifstream : i  pour input, f pour file et stream pour canal) 
	// ou �crire (�criture : ecrire des nouvelles informations sur le disque dur : output :
    // ofstream : o pour output, f pour file et stream pour canal) 

	// 3. Associer le canal avec la source
	ifDonnee.open(FICHIER_ENTREE, ios::in);			// Premier param�tre : le nom du fichier sur le disque dur
													// Deuxi�me param�tre :  le mode d'ouverture du fichier : lecture : input
	ofResultat.open(FICHIER_RESULTAT, ios::out);	// Le mode ios::out cr�e le fichier Resultats.txt et il �crase s'il existe d�j�

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
	if (!ofResultat)
	{
		cerr << "Erreur : Le fichier " << FICHIER_RESULTAT << " n'a pas pu �tre cr��." << endl;
		cerr << "Veuillez v�rifier l'espace disponible sur le disque dur ou ";
		cerr << "assurez-vous d'avoir les droits n�cessaires." << endl;
		system("pause");
		exit(900);
	}

	// Ici, les deux canaux sont bien ouverts: ici on a l'�quivalent du cin (ifDonnee) et du cout (ofResultat) 
	// mais en provenance ou � destination du disque dur

	// Ici on peut �crire l'en-t�te du fichier de r�sultats
	// Faire une ligne de pointill�s
	// setw : set : param�trer, w : width : largeur d'une colonne. La largeur de la colonne est pass�e en param�tre
/*
----------------------------------------------------------------------------------
				  R�sultats du cours de programmation structur�e
----------------------------------------------------------------------------------
Nom             Pr�nom              Eval 1    Eval 2    Eval 3     Total R�sultats
----------------------------------------------------------------------------------
*/
	ofResultat << setfill('-') << setw(LIGNE) << "-" << setfill(' ') << endl;
	ofResultat << setw((LIGNE - TITRE.size()) / 2) << " " << TITRE << endl;

	ofResultat << setfill('-') << setw(LIGNE) << "-" << setfill(' ') << endl;
	ofResultat << left << setw(COL1) << "Nom" << setw(COL2) << "Pr�nom" << right << setw(COL3) << "Eval 1" << setw(COL4) << "Eval 2";
	ofResultat << setw(COL5) << "Eval 3" << setw(COL6) << "Total" << left << setw(COL7) << " R�sultats" << right << endl;
	ofResultat << setfill('-') << setw(LIGNE) << "-" << setfill(' ') << endl;



	// Deuxi�me partie : Lire les informations qui sont sur le fichier
	// 1. Cr�er autant de variables qu'il y a de champs (colonne) dans le fichier
	// Ce sont les donn�es, au lieu d'�tre fournies par l'utilisateur, elles sont fournies par le fichier
	string nomEtudiant;			// Champ 1 : le nom
	string prenomEtudiant;		// Colonne 2 du fichier
	float noteEval1;				// Champ 3 du fichier : int car c'est des valeurs enti�res
	float noteEval2;
	float noteEval3;
	// 2. les r�sultats � calculer ou � afficher : il faut en g�n�ral initialiser ces variables
	float noteFinale = 0;				// Au d�part ou si pas de donn�es dans le fichier, la note finale est de 0;
	int nbEtudiant = 0;				// Au d�part du programme ou si le fichier est vide, il n'y a pas d'�tudiant, donc 0
	float moyenne = 0;
	// Au d�part du programme ou si pas de donn�es dans le fichier, on ne peut pas d�terminer le max, le min et le meilleur Etudiant
	float noteMax;
	float noteMin;
	string meilleurEtudiant;
	string resultat;

	// La lecture des informations permet de mettre � jour le eof
	// Ici On TENTE de lire des informations, si cela ne fonctionne pas eof sera � vrai, sinon il sera � faux
	// AVANT LA BOUCLE : il faut initialiser la variable de boucle : ici on le fait en tentant une lecture dans le fichier
	ifDonnee >> nomEtudiant;
	ifDonnee >> prenomEtudiant;
	ifDonnee >> noteEval1;
	ifDonnee >> noteEval2;
	ifDonnee >> noteEval3;

	// Lors de la lecture du premier enregistrement, on peut d�terminer le min et le max
	if (!ifDonnee.eof())
	{
		noteFinale = noteEval1 + noteEval2 + noteEval3;
		noteMin = noteFinale;
		noteMax = noteFinale;
		meilleurEtudiant = prenomEtudiant + " " + nomEtudiant;
	}




	// Tant que la fin du fichier n'a pas �t� atteinte, on traite les informations qui ont �t� lues dans le fichier
	while (!ifDonnee.eof())					// eof est une fonction qui indique si la fin du fichier a �t� rencontr�e
											// End Of File (eof)
	{
		// Ici il y avait des informations � lire dans le fichier, on peut les traiter (faire des calculs, afficher, ...)
		// On peut faire toutes sortes de traitement sur les donn�es qui ont �t� lues
		// On va calculer la note finale de chaque �tudiant
		noteFinale = noteEval1 + noteEval2 + noteEval3;
		// Dire si l'�tudiant a r�ussi ou non le cours
		if (noteFinale >= 60)
			resultat = " Succ�s";
		else
			resultat = " Echec";
		// On veut afficher les nombres r�els avec deux chiffres apr�s la virgule
		// fixed permet � la virgule de ne plus changer de place. 
		// SI fixed a �t� utilis�, ALORS setprecision indique le nombre de chiffres apr�s la virgule
		ofResultat << fixed << setprecision(2);
		ofResultat << left << setw(COL1) << nomEtudiant << setw(COL2) << prenomEtudiant << right << setw(COL3) << noteEval1 << setw(COL4) << noteEval2;
		ofResultat << setw(COL5) << noteEval3 << setw(COL6) << noteFinale << left << setw(COL7) << resultat << right << endl;

		// Mettre � jour la moyenne, la somme dans un premier temps
		moyenne = moyenne + noteFinale;
		nbEtudiant++;
		// Il faut s'assurer que le max et le meilleur �tudiant n'a pas chang�
		if (noteFinale > noteMax)
		{
			noteMax = noteFinale;
			meilleurEtudiant = prenomEtudiant + " " + nomEtudiant;
		}
		if (noteFinale < noteMin)
		{
			noteMin = noteFinale;
		}

		// A LA FIN DE LA BOUCLE  : il faut r�initialiser la variable de boucle : On tente de lire le prochain enregistrement
		ifDonnee >> nomEtudiant;
		ifDonnee >> prenomEtudiant;
		ifDonnee >> noteEval1;
		ifDonnee >> noteEval2;
		ifDonnee >> noteEval3;
	}

	// APR�S la boucle
	// Ici tous les enregistrements ont �t� trait�s. Mais il se peut qu'il reste d'autres calculs � faire
	// On voudrait afficher la moyenne du groupe : 

	// On doit s'assurer si on peut calculer la moyenne, il faut au moins un �tudiant
	if (nbEtudiant > 0)
	{
		moyenne = moyenne / nbEtudiant;
		ofResultat << "La moyenne du groupe est : " << moyenne << endl;
		// On voudrait connaitre la note la plus haute et le nom et pr�nom de l'�tudiant (id�e de Mika�l)
		ofResultat << "La note la plus haute est : " << noteMax << " obtenue par " << meilleurEtudiant << endl;
		// On voudrait connaitre la note la plus basse
		ofResultat << "La note la plus basse est : " << noteMin << endl;
		// On voudrait connaitre le nombre d'�tudiants dans le groupe
		ofResultat << "Le groupe contient " << nbEtudiant << " �tudiants" << endl;
	}
	else
	{
		cout << "Le fichier de donn�es est vide" << endl;
	}

		// Ici on a lu tous les enregistrements, on a atteint la fin du fichier
	cout << "Fin du fichier" << endl;
	// Il faut fermer le fichier
	ifDonnee.close();
	ofResultat.close();				// Fermer le canal d'�criture force le syst�me d'exploitation � bien �crire les donn�es sur le disque

	return 0;
}