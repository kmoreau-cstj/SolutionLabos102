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
	// 2. les résultats à calculer ou à afficher : il faut en général initialiser ces variables
	int noteFinale = 0;				// Au départ ou si pas de données dans le fichier, la note finale est de 0;
	int nbEtudiant = 0;				// Au départ du programme ou si le fichier est vide, il n'y a pas d'étudiant, donc 0
	float moyenne = 0;
	// Au départ du programme ou si pas de données dans le fichier, on ne peut pas déterminer le max, le min et le meilleur Etudiant
	int noteMax;
	int noteMin;
	string meilleurEtudiant;

	// La lecture des informations permet de mettre à jour le eof
	// Ici On TENTE de lire des informations, si cela ne fonctionne pas eof sera à vrai, sinon il sera à faux
	// AVANT LA BOUCLE : il faut initialiser la variable de boucle : ici on le fait en tentant une lecture dans le fichier
	ifDonnee >> nomEtudiant;
	ifDonnee >> prenomEtudiant;
	ifDonnee >> noteEval1;
	ifDonnee >> noteEval2;
	ifDonnee >> noteEval3;

	// Lors de la lecture du premier enregistrement, on peut déterminer le min et le max
	if (!ifDonnee.eof())
	{
		noteFinale = noteEval1 + noteEval2 + noteEval3;
		noteMin = noteFinale;
		noteMax = noteFinale;
		meilleurEtudiant = prenomEtudiant + " " + nomEtudiant;
	}




	// Tant que la fin du fichier n'a pas été atteinte, on traite les informations qui ont été lues dans le fichier
	while (!ifDonnee.eof())					// eof est une fonction qui indique si la fin du fichier a été rencontrée
											// End Of File (eof)
	{
		// Ici il y avait des informations à lire dans le fichier, on peut les traiter (faire des calculs, afficher, ...)
		cout << "Voici les informations lues dans le fichier : " << endl;
		cout << "Nom " << nomEtudiant << endl;
		cout << "prénom " << prenomEtudiant << endl;
		cout << "note 1 : " << noteEval1 << endl;
		cout << "note 2 : " << noteEval2 << endl;
		cout << "note 3 : " << noteEval3 << endl;
		// On peut faire toutes sortes de traitement sur les données qui ont été lues
		// On va calculer la note finale de chaque étudiant
		noteFinale = noteEval1 + noteEval2 + noteEval3;
		cout << "note finale : " << noteFinale << endl;
		// Dire si l'étudiant a réussi ou non le cours
		if (noteFinale >= 60)
			cout << "Félicitations ! Vous avez réussi le cours" << endl;
		else
			cout << "Désolé, malgré tous vos efforts, il faudra reprendre le cours." << endl;
		// Mettre à jour la moyenne, la somme dans un premier temps
		moyenne = moyenne + noteFinale;
		nbEtudiant++;
		// Il faut s'assurer que le max et le meilleur étudiant n'a pas changé
		if (noteFinale > noteMax)
		{
			noteMax = noteFinale;
			meilleurEtudiant = prenomEtudiant + " " + nomEtudiant;
		}
		if (noteFinale < noteMin)
		{
			noteMin = noteFinale;
		}




		// A LA FIN DE LA BOUCLE  : il faut réinitialiser la variable de boucle : On tente de lire le prochain enregistrement
		ifDonnee >> nomEtudiant;
		ifDonnee >> prenomEtudiant;
		ifDonnee >> noteEval1;
		ifDonnee >> noteEval2;
		ifDonnee >> noteEval3;
	}

	// APRÈS la boucle
	// Ici tous les enregistrements ont été traités. Mais il se peut qu'il reste d'autres calculs à faire
	// On voudrait afficher la moyenne du groupe : 

	// On doit s'assurer si on peut calculer la moyenne, il faut au moins un étudiant
	if (nbEtudiant > 0)
	{
		moyenne = moyenne / nbEtudiant;
		cout << "La moyenne du groupe est : " << moyenne << endl;
		// On voudrait connaitre la note la plus haute et le nom et prénom de l'étudiant (idée de Mikaël)
		cout << "La note la plus haute est : " << noteMax << " obtenue par " << meilleurEtudiant << endl;
		// On voudrait connaitre la note la plus basse
		cout << "La note la plus basse est : " << noteMin << endl;
		// On voudrait connaitre le nombre d'étudiants dans le groupe
		cout << "Le groupe contient " << nbEtudiant << " étudiants" << endl;
	}
	else
	{
		cout << "Le fichier de données est vide" << endl;
	}





	// Ici on a lu tous les enregistrements, on a atteint la fin du fichier
	cout << "Fin du fichier" << endl;
	// Il faut fermer le fichier
	ifDonnee.close();

	return 0;
}