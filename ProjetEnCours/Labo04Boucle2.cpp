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
using namespace std;			// Pour all�ger le code et plus mettre std:: avant les cout, cin, endl, ...


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
	cout << "1. Cadre" << endl;
	cout << "2. Travailleur � taux horaire" << endl;
	cout << "3. Travailleur � la commission" << endl;
	cout << "4. Travailleur � la pi�ce" << endl;
	cout << "q. Quitter le programme" << endl;


	// Le programme doit demander � l'utilisateur son choix
	cout << "Votre choix --> ";
	cin >> typeEmploye;


	// Le programme doit valider que le choix de l'utilisateur est permis, est valide
	// le type d'employe doit �tre compris entre 1 ET 4 OU �tre la lettre q minuscule  OU la lettre Q masjuscule
	// while (typeEmploye < CHOIX_MIN || typeEmploye > CHOIX_MAX && typeEmploye != 'q' && typeEmploye != 'Q')

	while (!(typeEmploye >= CHOIX_MIN && typeEmploye<= CHOIX_MAX || typeEmploye == 'q' || typeEmploye == 'Q'))
	{
		cout << "Erreur : Le choix ...." << endl;
		
		// Laisser le temps pour lire le message d'erreur

		// Effacer l'�cran

		// Le programme affiche un menu offrant les fonctions des employ�s et une option pour quitter
		cout << "1. Cadre" << endl;
		cout << "2. Travailleur � taux horaire" << endl;
		cout << "3. Travailleur � la commission" << endl;
		cout << "4. Travailleur � la pi�ce" << endl;
		cout << "q. Quitter le programme" << endl;

		
		// Le programme doit demander � l'utilisateur son choix
		cout << "Votre choix --> ";
		cin >> typeEmploye;

	}


	// Ici, le choix est correct, est compris entre 1 et 4 ou c'est la lettre q Q
	// Tant que l'utilisateur ne quitte pas, il n'a pas tap� q ET ni Q, le programme calcule la paie
	while (typeEmploye!='q' && typeEmploye!= 'Q')
	{
		// selon le type d'employ�
		switch (typeEmploye)
		{
			// 1. Cadre : montantPaie = salaireCadre;
		case '1':
			montantPaie = salaireCadre;
			break;
			// 2. Travailleur � taux horaire : 
					// si le nbHeure est inf�rieur ou �gal � TEMPS_SUPP montantPaie = tauxHoraire * nbHeures
					// sinon montantPaie = (nbHeures - TEMPS_SUPP) * TAUX_SUPP *tauxHoraire + tauxHoraire * TEMPS_SUPP

		case '2':
			if (nbHeures <= TEMPS_SUPP)
			{
				montantPaie = tauxHoraire * nbHeures;
			}
			else
			{
				montantPaie = (nbHeures - TEMPS_SUPP) * TAUX_SUPP * tauxHoraire + tauxHoraire * TEMPS_SUPP;
			}
			// 3. Travailleur � la commission : montantPaie = SALAIRE_FIXE + ventesHebdo * TAUX_VENTES
		case '3':
			montantPaie = SALAIRE_FIXE + ventesHebdo * TAUX_VENTES;
			// 4. Travailleur � la pi�ce : montantPaie = nbArticles * tauxArticle
		case '4':
			montantPaie = nbArticles * tauxArticle;
		}
			
		//le programme affiche le montant du salaire
		cout << "Le salaire de l'employ� est : " << montantPaie << endl;

		// Le programme affiche de nouveau le menu
			// Le programme affiche un menu offrant les fonctions des employ�s et une option pour quitter
		cout << "1. Cadre" << endl;
		cout << "2. Travailleur � taux horaire" << endl;
		cout << "3. Travailleur � la commission" << endl;
		cout << "4. Travailleur � la pi�ce" << endl;
		cout << "q. Quitter le programme" << endl;


		// Le programme doit demander � l'utilisateur son choix
		cout << "Votre choix --> ";
		cin >> typeEmploye;


		// Le programme doit valider que le choix de l'utilisateur est permis, est valide
		// le type d'employe doit �tre compris entre 1 ET 4 OU �tre la lettre q minuscule  OU la lettre Q masjuscule
		// while (typeEmploye < CHOIX_MIN || typeEmploye > CHOIX_MAX && typeEmploye != 'q' && typeEmploye != 'Q')

		while (!(typeEmploye >= CHOIX_MIN && typeEmploye <= CHOIX_MAX || typeEmploye == 'q' || typeEmploye == 'Q'))
		{
			cout << "Erreur : Le choix ...." << endl;

			// Laisser le temps pour lire le message d'erreur

			// Effacer l'�cran

			// Le programme affiche un menu offrant les fonctions des employ�s et une option pour quitter
			cout << "1. Cadre" << endl;
			cout << "2. Travailleur � taux horaire" << endl;
			cout << "3. Travailleur � la commission" << endl;
			cout << "4. Travailleur � la pi�ce" << endl;
			cout << "q. Quitter le programme" << endl;


			// Le programme doit demander � l'utilisateur son choix
			cout << "Votre choix --> ";
			cin >> typeEmploye;

		}


	}
	return 0;
}