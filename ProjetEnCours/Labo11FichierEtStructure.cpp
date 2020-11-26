// But : Programmer la fonctionnalité de générer une table des matières à la Word !!!!!
// Auteur : Karine Moreau
// Date : 2020

#include <iostream>
#include <fstream>				// Bibliothèque pour utiliser les fichiers dans un programme
#include "Labo11Fonctions.h"

using namespace std;			// Pour alléger le code et plus mettre std:: avant les cout, cin, endl, ...


int main()
{
	setlocale(LC_ALL, "");
	// Déclaration des constantes
	const string CHAPITRE = "DonneesChapitres.txt";			// Le nom du fichier qui fournit les informations de départ
	const string TDM = "TDM.txt";							// Le nom de fichier qui sera généré par le programme
	const string TITRE = "Table des matières";
	const string NOM_SECTION = "Chapitre";
	const char POINT_DE_SUITE = '.';
	const char DEUX_POINTS = ':';

	// Déclaration des variables au début du programme
	// 0. Dès que le programme utilise des fichiers sur le disque dur, il faut créer des canaux vers chacun de ces fichiers
	ofstream canalTDM;				// Canal en sortie, en output pour afficher dans un fichier : équivalent du cout pour afficher à l'écran
	ifstream canalChapitre;			// Canal en entrée, en input pour lire les informations dans le fichier : équivalent du cin pour lire sur le clavier
	// 1. Variables pour mémoriser les informations fournies par l'utilisateur et/ou en provenance du fichier d'entrée
	//string nomChapitre;			// Premier champ du fichier d'entrée : suite de caractères contenant des espaces ==> il faudra utiliser getline !!!!!
	//int numeroPage;				// Deuxième champ : il est séparé par un ; du champ précédent

	chapitre leChapitre;

	// 2. Les variables pour afficher ou calculer des résultats qui doivent généralement être initialisées dès le début du programme
	int numeroChapitre = 1;		// On s'apprête à afficher le premier chapitre
	// 3. Les variables intermédiaires ????


	// On va ouvrir le fichier de données à l'aide d'une fonction qui valide l'ouverture correcte du fichier ou affiche des messages d'erreur
	ouvrirFichierEntree(CHAPITRE, canalChapitre);			// On appelle la fonction et on lui donne les valeurs des paramètres

	// On va créer le fichier de sortie à l'aide d'une fonction
	creerFichierSortie(TDM, canalTDM);

	// On tente de lire un premier enregistrement (une première ligne) dans le fichier source à l'aide d'une fonction : ici c'est deux informations
	// Ici dans le fichier de données, il y a seulement deux informations différentes : nom du chapitre et le numéro de page
	// Mais s'il y avait 10 champs dans le fichier source, il faudrait passer 10 paramètres à la fonction lireEnregistrement
	// La liste des paramètres serait très longue ==> solution : on va passer un paquet d'information : on regroupe toute l'information dans une
	// structure. Une structure est une sorte d'enveloppe qui contiendra toutes les informations d'un même enregistrement
	lireEnregistrement(canalChapitre, leChapitre);
	leChapitre = lireEnregistrement(canalChapitre);













	return 0;
}