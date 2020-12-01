// But : Programmer la fonctionnalit� de g�n�rer une table des mati�res � la Word !!!!!
// Auteur : Karine Moreau
// Date : 2020

#include <iostream>
#include <fstream>				// Biblioth�que pour utiliser les fichiers dans un programme
#include "Labo11Fonctions.h"

using namespace std;			// Pour all�ger le code et plus mettre std:: avant les cout, cin, endl, ...


int main()
{
	setlocale(LC_ALL, "");
	// D�claration des constantes
	const string CHAPITRE = "DonneesChapitres.txt";			// Le nom du fichier qui fournit les informations de d�part
	const string TDM = "TDM.txt";							// Le nom de fichier qui sera g�n�r� par le programme
	



	// D�claration des variables au d�but du programme
	// 0. D�s que le programme utilise des fichiers sur le disque dur, il faut cr�er des canaux vers chacun de ces fichiers
	ofstream canalTDM;				// Canal en sortie, en output pour afficher dans un fichier : �quivalent du cout pour afficher � l'�cran
	ifstream canalChapitre;			// Canal en entr�e, en input pour lire les informations dans le fichier : �quivalent du cin pour lire sur le clavier
	// 1. Variables pour m�moriser les informations fournies par l'utilisateur et/ou en provenance du fichier d'entr�e
	//string nomChapitre;			// Premier champ du fichier d'entr�e : suite de caract�res contenant des espaces ==> il faudra utiliser getline !!!!!
	//int numeroPage;				// Deuxi�me champ : il est s�par� par un ; du champ pr�c�dent

	chapitre leChapitre;

	// 2. Les variables pour afficher ou calculer des r�sultats qui doivent g�n�ralement �tre initialis�es d�s le d�but du programme
	int numeroChapitre = 1;		// On s'appr�te � afficher le premier chapitre
	// 3. Les variables interm�diaires ????


	// On va ouvrir le fichier de donn�es � l'aide d'une fonction qui valide l'ouverture correcte du fichier ou affiche des messages d'erreur
	ouvrirFichierEntree(CHAPITRE, canalChapitre);			// On appelle la fonction et on lui donne les valeurs des param�tres

	// On va cr�er le fichier de sortie � l'aide d'une fonction
	creerFichierSortie(TDM, canalTDM);

	// Ici, comme le fichier de sortie existe, on va �crire l'en-t�te � l'aide d'une fonction
	ecrireEnTete(canalTDM, TITRE, 3 /* indique le nombre de lignes vides apr�s le titre*/ );

	// On TENTE de lire un premier enregistrement (une premi�re ligne) dans le fichier source � l'aide d'une fonction : ici c'est deux informations
	// Ici dans le fichier de donn�es, il y a seulement deux informations diff�rentes : nom du chapitre et le num�ro de page
	// Mais s'il y avait 10 champs dans le fichier source, il faudrait passer 10 param�tres � la fonction lireEnregistrement
	// La liste des param�tres serait tr�s longue ==> solution : on va passer un paquet d'information : on regroupe toute l'information dans une
	// structure. Une structure est une sorte d'enveloppe qui contiendra toutes les informations d'un m�me enregistrement
	lireEnregistrement(canalChapitre, leChapitre);

	// On s'assure qu'il y a bien des informations dans la variable leChapitre
	// Tant que la fin du fichier n'a pas �t� atteinte, on peut lire les enregistrements suivants
	while (!canalChapitre.eof())
	{
		// Chapitre 1  : Introduction au C++.................................................1
		// On va formater l'affichage du titre pour obtenir la table des mati�res
		ecrireEnregistrement(canalTDM, leChapitre, numeroChapitre);

		// On pr�pare � afficher le prochain chapitre, on augmente le num�ro du chapitre
		numeroChapitre++;

		// A LA FIN de la boucle, il faut r�initialiser la variable de boucle : eof : 
		// il faut TENTER de lire l'enregistrement suivant

		leChapitre = lireEnregistrement(canalChapitre);
	}


	// Il faut fermer les fichiers
	canalChapitre.close();
	canalTDM.close();














	return 0;
}