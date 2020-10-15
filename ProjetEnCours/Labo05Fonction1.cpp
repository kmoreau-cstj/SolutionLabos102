// But :
/*
Une compagnie r�mun�re ses employ�s selon leur fonction. Ils peuvent �tre
1. cadres (recevant un salaire hebdomadaire fixe),
2. travailleurs � tarif horaire (recevant un taux horaire fixe r�gulier pour les 40 premi�res heures 
   et un taux horaire temps et demi soit 1.5 fois le taux horaire r�gulier pour les heures suppl�mentaires)
3. travailleurs � la commission (recevant 250$ plus 5.7% de leurs ventes hebdomadaires brutes)
4. travailleur � la pi�ce (recevant un taux fixe d'argent pour chaque article produit; 
   chaque travailleur � la pi�ce de cette compagnie ne travaille que sur un seul type d'article)
q. pour quitter

�crivez un programme qui calcule la paie pour chaque employ�. 
Vous ne connaissez pas � l'avance le nombre d'employ�s. 
Chaque type d'employ�s poss�de son propre code de paie : 
   le code de paie 1 repr�sente les cadres, 
   le code de paie 2 repr�sente les travailleurs � tarif horaire, 
   le code de paie 3 repr�sente les travailleurs � la commission et 
   le code de paie 4 repr�sente les travailleurs � la pi�ce.

Utilisez une structure switch pour calculer la paie de chaque employ� en fonction du code de paie de cet employ�.
A l'int�rieur du switch, invitez l'utilisateur � entrer les faits appropri�s requis par votre programme 
pour calculer la paie de chaque employ� en fonction du code de paie de l'employ�.

*/


// Auteur : Karine Moreau
// Date : 2020

#include <iostream>
#include "Labo05MesFonctions.h"	// Attention les biblioth�ques personnelles doivent �tre indiqu�es entre guillemets

using namespace std;			// Pour all�ger le code et plus mettre std:: avant les cout, cin, endl, ...

// Fonction : pour cr�er une fonction il faut 3 informations
// 1. il faut indiquer le type ce que la fonction va retourner (int, char, float, double, bool, string, void) 
// 2. le nom de la fonction (ne commence pas par un chiffre, pas d'espace, pas d'accent) : 
//    sera un verbe � l'infinitif suivi d'un compl�ment : calculerMax, afficherMenu, afficherResultat, validerNombre, etrePair, etreMultiple
// 3. la liste des param�tres qui doit �tre entre parenth�ses m�me s'il n'y a pas de param�tres
//    Les param�tres vont influencer le comportement de la fonction. On doit donner le type et le nom du param�tre.
//    les param�tres sont s�par�s par une virgule
//    (type_parametre1 nom_parametre1, type_parametre2 nom_parametre2, ...)



// bool etrePair(int nombre)
// void afficherMenu()
// int calculerMax (int nb1, int nb2, int nb3)
// int calculerMax (int combienDeNombre)
// int validerNombre(int nb, int min, int max)


// pour mettre en place des fonctions il y a trois �tapes
// 1. il faut d�clarer l'existence de la fonction dans un fichier d'en-t�te, un fichier avec une extension .h (header)
// 		type nomDeLaFonction(la liste des param�tres);

// 2. Il faut d�velopper le code de la fonction dans un fichier .cpp diff�rent de celui qui contient le main
// type nomDeLaFonction(la liste des param�tres)
//{
		//mettre les instructions de la fonction
//}

// 3. On utilise les fonctions dans le .cpp du main. Pour cela il faudra inclure le fichier .h dans le programme principal
//#include "mesFonctions.h"

// et dans le code, il faudra appeler la fonction on donne le nom de la fonction et la liste des param�tres






int main()
{
	setlocale(LC_ALL, "");

	// D�claration des constantes
	const float TEMPS_SUPP = 40;
	const float TAUX_SUPP = 1.5;
	const float SALAIRE_FIXE = 250;
	const float TAUX_VENTES = 5.7 / 100;
	const char CHOIX_MIN = '1';
	const char CHOIX_MAX = '4';

	// D�claration des variables au d�but du programme : celles fournies par l'utilisateur
	float nbHeures;
	float tauxHoraire;
	float ventesHebdo;
	int nbArticles;
	float tauxArticle;
	float salaireCadre;
	char typeEmploye;

	// D�claration des variables pour m�moriser les r�sultats que le programme doit afficher
	float montantPaie;

	// D�terminer les formules de calculs � faire
	// 1. Cadre : montantPaie = salaireCadre;
	// 2. Travailleur � taux horaire : 
	// si le nbHeure est inf�rieur ou �gal � TEMPS_SUPP montantPaie = tauxHoraire * nbHeures
	// sinon montantPaie = (nbHeures - TEMPS_SUPP) * TAUX_SUPP *tauxHoraire + tauxHoraire * TEMPS_SUPP
	// 3. Travailleur � la commission : montantPaie = SALAIRE_FIXE + ventesHebdo * TAUX_VENTES
	// 4. Travailleur � la pi�ce : montantPaie = nbArticles * tauxArticle


	// Le programme affiche un menu offrant les fonctions des employ�s et une option pour quitter
	// Ici on appelle la fonction pour qu'elle puisse s'ex�cuter
	afficherMenu();

	// Le programme doit demander � l'utilisateur son choix
	// ici on appelle la fonction : on doit lui donner les valeurs des param�tres et on doit m�moriser la valeur de retour de la fonction
	typeEmploye = validerChoixMenu(CHOIX_MIN, CHOIX_MAX, 'q');

	// Ici, le choix est correct, est compris entre 1 et 4 ou c'est la lettre q Q
	// Tant que l'utilisateur ne quitte pas, il n'a pas tap� q ET ni Q, le programme calcule la paie
	while (typeEmploye!='q' && typeEmploye!= 'Q')
	{
		// selon le type d'employ�
		switch (typeEmploye)
		{
			// 1. Cadre : montantPaie = salaireCadre;
		case '1':
			cout << "Veuillez entrer le salaire du cadre : " << endl;
			cin >> salaireCadre;
			montantPaie = salaireCadre;
			break;
			// 2. Travailleur � taux horaire : 
					// si le nbHeure est inf�rieur ou �gal � TEMPS_SUPP montantPaie = tauxHoraire * nbHeures
					// sinon montantPaie = (nbHeures - TEMPS_SUPP) * TAUX_SUPP *tauxHoraire + tauxHoraire * TEMPS_SUPP

		case '2':
			cout << "Veuillez entrer le nombre d'heures travaill�es cette semaine : ";
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
			// 3. Travailleur � la commission : montantPaie = SALAIRE_FIXE + ventesHebdo * TAUX_VENTES
		case '3':
			cout << "Veuillez entrer le montant des ventes : " << endl;
			cin >> ventesHebdo;

			montantPaie = SALAIRE_FIXE + ventesHebdo * TAUX_VENTES;
			break;
			// 4. Travailleur � la pi�ce : montantPaie = nbArticles * tauxArticle
		case '4':
			cout << "Veuillez entrer le nombre d'articles fabriqu�s cette semaine : ";
			cin >> nbArticles;
			cout << "Veuillez entrer le taux de l'article : ";
			cin >> tauxArticle;

			montantPaie = nbArticles * tauxArticle;
			break;
		} // fin du switch
			
		//le programme affiche le montant du salaire
		cout << "Le salaire de l'employ� est : " << montantPaie << endl;

		// Le programme affiche de nouveau le menu
			// Le programme affiche un menu offrant les fonctions des employ�s et une option pour quitter
		afficherMenu();

		// Le programme doit demander � l'utilisateur son choix
		typeEmploye = validerChoixMenu(CHOIX_MIN, CHOIX_MAX, 'q');
				
	}
	return 0;
}