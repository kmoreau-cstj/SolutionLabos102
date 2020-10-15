// But :
/*
Une compagnie rémunère ses employés selon leur fonction. Ils peuvent être
1. cadres (recevant un salaire hebdomadaire fixe),
2. travailleurs à tarif horaire (recevant un taux horaire fixe régulier pour les 40 premières heures 
   et un taux horaire temps et demi soit 1.5 fois le taux horaire régulier pour les heures supplémentaires)
3. travailleurs à la commission (recevant 250$ plus 5.7% de leurs ventes hebdomadaires brutes)
4. travailleur à la pièce (recevant un taux fixe d'argent pour chaque article produit; 
   chaque travailleur à la pièce de cette compagnie ne travaille que sur un seul type d'article)
q. pour quitter

Écrivez un programme qui calcule la paie pour chaque employé. 
Vous ne connaissez pas à l'avance le nombre d'employés. 
Chaque type d'employés possède son propre code de paie : 
   le code de paie 1 représente les cadres, 
   le code de paie 2 représente les travailleurs à tarif horaire, 
   le code de paie 3 représente les travailleurs à la commission et 
   le code de paie 4 représente les travailleurs à la pièce.

Utilisez une structure switch pour calculer la paie de chaque employé en fonction du code de paie de cet employé.
A l'intérieur du switch, invitez l'utilisateur à entrer les faits appropriés requis par votre programme 
pour calculer la paie de chaque employé en fonction du code de paie de l'employé.

*/


// Auteur : Karine Moreau
// Date : 2020

#include <iostream>
#include "Labo05MesFonctions.h"	// Attention les bibliothèques personnelles doivent être indiquées entre guillemets

using namespace std;			// Pour alléger le code et plus mettre std:: avant les cout, cin, endl, ...

// Fonction : pour créer une fonction il faut 3 informations
// 1. il faut indiquer le type ce que la fonction va retourner (int, char, float, double, bool, string, void) 
// 2. le nom de la fonction (ne commence pas par un chiffre, pas d'espace, pas d'accent) : 
//    sera un verbe à l'infinitif suivi d'un complément : calculerMax, afficherMenu, afficherResultat, validerNombre, etrePair, etreMultiple
// 3. la liste des paramètres qui doit être entre parenthèses même s'il n'y a pas de paramètres
//    Les paramètres vont influencer le comportement de la fonction. On doit donner le type et le nom du paramètre.
//    les paramètres sont séparés par une virgule
//    (type_parametre1 nom_parametre1, type_parametre2 nom_parametre2, ...)



// bool etrePair(int nombre)
// void afficherMenu()
// int calculerMax (int nb1, int nb2, int nb3)
// int calculerMax (int combienDeNombre)
// int validerNombre(int nb, int min, int max)


// pour mettre en place des fonctions il y a trois étapes
// 1. il faut déclarer l'existence de la fonction dans un fichier d'en-tête, un fichier avec une extension .h (header)
// 		type nomDeLaFonction(la liste des paramètres);

// 2. Il faut développer le code de la fonction dans un fichier .cpp différent de celui qui contient le main
// type nomDeLaFonction(la liste des paramètres)
//{
		//mettre les instructions de la fonction
//}

// 3. On utilise les fonctions dans le .cpp du main. Pour cela il faudra inclure le fichier .h dans le programme principal
//#include "mesFonctions.h"

// et dans le code, il faudra appeler la fonction on donne le nom de la fonction et la liste des paramètres






int main()
{
	setlocale(LC_ALL, "");

	// Déclaration des constantes
	const float TEMPS_SUPP = 40;
	const float TAUX_SUPP = 1.5;
	const float SALAIRE_FIXE = 250;
	const float TAUX_VENTES = 5.7 / 100;
	const char CHOIX_MIN = '1';
	const char CHOIX_MAX = '4';

	// Déclaration des variables au début du programme : celles fournies par l'utilisateur
	float nbHeures;
	float tauxHoraire;
	float ventesHebdo;
	int nbArticles;
	float tauxArticle;
	float salaireCadre;
	char typeEmploye;

	// Déclaration des variables pour mémoriser les résultats que le programme doit afficher
	float montantPaie;

	// Déterminer les formules de calculs à faire
	// 1. Cadre : montantPaie = salaireCadre;
	// 2. Travailleur à taux horaire : 
	// si le nbHeure est inférieur ou égal à TEMPS_SUPP montantPaie = tauxHoraire * nbHeures
	// sinon montantPaie = (nbHeures - TEMPS_SUPP) * TAUX_SUPP *tauxHoraire + tauxHoraire * TEMPS_SUPP
	// 3. Travailleur à la commission : montantPaie = SALAIRE_FIXE + ventesHebdo * TAUX_VENTES
	// 4. Travailleur à la pièce : montantPaie = nbArticles * tauxArticle


	// Le programme affiche un menu offrant les fonctions des employés et une option pour quitter
	// Ici on appelle la fonction pour qu'elle puisse s'exécuter
	afficherMenu();

	// Le programme doit demander à l'utilisateur son choix
	// ici on appelle la fonction : on doit lui donner les valeurs des paramètres et on doit mémoriser la valeur de retour de la fonction
	typeEmploye = validerChoixMenu(CHOIX_MIN, CHOIX_MAX, 'q');

	// Ici, le choix est correct, est compris entre 1 et 4 ou c'est la lettre q Q
	// Tant que l'utilisateur ne quitte pas, il n'a pas tapé q ET ni Q, le programme calcule la paie
	while (typeEmploye!='q' && typeEmploye!= 'Q')
	{
		// selon le type d'employé
		switch (typeEmploye)
		{
			// 1. Cadre : montantPaie = salaireCadre;
		case '1':
			cout << "Veuillez entrer le salaire du cadre : " << endl;
			cin >> salaireCadre;
			montantPaie = salaireCadre;
			break;
			// 2. Travailleur à taux horaire : 
					// si le nbHeure est inférieur ou égal à TEMPS_SUPP montantPaie = tauxHoraire * nbHeures
					// sinon montantPaie = (nbHeures - TEMPS_SUPP) * TAUX_SUPP *tauxHoraire + tauxHoraire * TEMPS_SUPP

		case '2':
			cout << "Veuillez entrer le nombre d'heures travaillées cette semaine : ";
			cin >> nbHeures;
			cout << "Veuillez entrer le taux horaire : ";
			cin >> tauxHoraire;

			if (nbHeures <= TEMPS_SUPP)
			{
				montantPaie = tauxHoraire * nbHeures;
			}
			else
			{
				montantPaie = (nbHeures - TEMPS_SUPP) * TAUX_SUPP * tauxHoraire + tauxHoraire * TEMPS_SUPP;
			}
			break;
			// 3. Travailleur à la commission : montantPaie = SALAIRE_FIXE + ventesHebdo * TAUX_VENTES
		case '3':
			cout << "Veuillez entrer le montant des ventes : " << endl;
			cin >> ventesHebdo;

			montantPaie = SALAIRE_FIXE + ventesHebdo * TAUX_VENTES;
			break;
			// 4. Travailleur à la pièce : montantPaie = nbArticles * tauxArticle
		case '4':
			cout << "Veuillez entrer le nombre d'articles fabriqués cette semaine : ";
			cin >> nbArticles;
			cout << "Veuillez entrer le taux de l'article : ";
			cin >> tauxArticle;

			montantPaie = nbArticles * tauxArticle;
			break;
		} // fin du switch
			
		//le programme affiche le montant du salaire
		cout << "Le salaire de l'employé est : " << montantPaie << endl;

		// Le programme affiche de nouveau le menu
			// Le programme affiche un menu offrant les fonctions des employés et une option pour quitter
		afficherMenu();

		// Le programme doit demander à l'utilisateur son choix
		typeEmploye = validerChoixMenu(CHOIX_MIN, CHOIX_MAX, 'q');
				
	}
	return 0;
}