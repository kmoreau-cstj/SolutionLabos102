// But : Description du programme
// Auteur : Karine Moreau
// Date : 2019


#include "Labo11-ListeMateriel.h"


int main()
{
	setlocale(LC_ALL, "");

	//déclaration des variables locales
	// le nom des fichiers sur le disque dur
	const string NOM_FICHIER_ENTREE="ListeMateriel.txt";
	const string NOM_FICHIER_SORTIE="Inventaire.txt";

	// Les canaux de communication en entrée et en sortie
	ifstream ifFichierEntree;
	ofstream ofFichierSortie;

	// Déclare les variables pour lire l'enregistrement dans le fichier
	Materiel leMateriel;

	// Variables pour le total et la quantité d'équipements
	float total = 0;
    int nbQuantite = 0;


	// On tente d'ouvrir le fichier d'entrée
	ifFichierEntree.open(NOM_FICHIER_ENTREE, ios::in);
	if(!ifFichierEntree)
	{
		cerr << "Erreur : Le fichier " << NOM_FICHIER_ENTREE << " n'a pas pu s'ouvrir" << endl;
		system("pause");
		exit (1);
	}

	// On tente de créer le fichier de sortie
	ofFichierSortie.open(NOM_FICHIER_SORTIE, ios::out);
	if(!ofFichierSortie)
	{
		cerr << "Erreur : Le fichier " << NOM_FICHIER_SORTIE << " n'a pas pu se créer" << endl;
		system("pause");
		exit (2);
	}

	// Écrit l'en-tête du fichier de sortie
	//ecrireEntête(ofFichierSortie);

	// Lire le premier enregistrement
	lireEnregistrement(ifFichierEntree, leMateriel);

	while(!ifFichierEntree.eof())
	{
		cout << leMateriel.typeDeMateriel << " " << leMateriel.description << " " << leMateriel.cout << endl;
		// Écrire l'enregistrement dans le fichier de sortie
		//ecrireEnregistrement(ofFichierSortie, leMateriel,  nbQuantite, total);

		// Lire l'enregistrement suivant
		lireEnregistrement(ifFichierEntree, leMateriel);

	}

	// Écrire le pied de l'état avec le total de l'inventaire et le nombre total d'équipements
	//ecrirePiedPage(ofFichierSortie, nbQuantite, total);

	cout << "la fin du fichier d'entrée est atteinte" <<endl;
	
	// Fermeture des fichiers
	ifFichierEntree.close();
	ofFichierSortie.close();

	system("PAUSE");
	return 0;

}












