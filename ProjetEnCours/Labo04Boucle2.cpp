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
using namespace std;			// Pour alléger le code et plus mettre std:: avant les cout, cin, endl, ...


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
	cout << "1. Cadre" << endl;
	cout << "2. Travailleur à taux horaire" << endl;
	cout << "3. Travailleur à la commission" << endl;
	cout << "4. Travailleur à la pièce" << endl;
	cout << "q. Quitter le programme" << endl;


	// Le programme doit demander à l'utilisateur son choix
	cout << "Votre choix --> ";
	cin >> typeEmploye;


	// Le programme doit valider que le choix de l'utilisateur est permis, est valide
	// le type d'employe doit être compris entre 1 ET 4 OU être la lettre q minuscule  OU la lettre Q masjuscule
	// while (typeEmploye < CHOIX_MIN || typeEmploye > CHOIX_MAX && typeEmploye != 'q' && typeEmploye != 'Q')

	while (!(typeEmploye >= CHOIX_MIN && typeEmploye<= CHOIX_MAX || typeEmploye == 'q' || typeEmploye == 'Q'))
	{
		cout << "Erreur : Le choix ...." << endl;
		
		// Laisser le temps pour lire le message d'erreur

		// Effacer l'écran

		// Le programme affiche un menu offrant les fonctions des employés et une option pour quitter
		cout << "1. Cadre" << endl;
		cout << "2. Travailleur à taux horaire" << endl;
		cout << "3. Travailleur à la commission" << endl;
		cout << "4. Travailleur à la pièce" << endl;
		cout << "q. Quitter le programme" << endl;

		
		// Le programme doit demander à l'utilisateur son choix
		cout << "Votre choix --> ";
		cin >> typeEmploye;

	}


	// Ici, le choix est correct, est compris entre 1 et 4 ou c'est la lettre q Q
	// Tant que l'utilisateur ne quitte pas, il n'a pas tapé q ET ni Q, le programme calcule la paie
	while (typeEmploye!='q' && typeEmploye!= 'Q')
	{
		// selon le type d'employé
		switch (typeEmploye)
		{
			// 1. Cadre : montantPaie = salaireCadre;
		case '1':
			montantPaie = salaireCadre;
			break;
			// 2. Travailleur à taux horaire : 
					// si le nbHeure est inférieur ou égal à TEMPS_SUPP montantPaie = tauxHoraire * nbHeures
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
			// 3. Travailleur à la commission : montantPaie = SALAIRE_FIXE + ventesHebdo * TAUX_VENTES
		case '3':
			montantPaie = SALAIRE_FIXE + ventesHebdo * TAUX_VENTES;
			// 4. Travailleur à la pièce : montantPaie = nbArticles * tauxArticle
		case '4':
			montantPaie = nbArticles * tauxArticle;
		}
			
		//le programme affiche le montant du salaire
		cout << "Le salaire de l'employé est : " << montantPaie << endl;

		// Le programme affiche de nouveau le menu
			// Le programme affiche un menu offrant les fonctions des employés et une option pour quitter
		cout << "1. Cadre" << endl;
		cout << "2. Travailleur à taux horaire" << endl;
		cout << "3. Travailleur à la commission" << endl;
		cout << "4. Travailleur à la pièce" << endl;
		cout << "q. Quitter le programme" << endl;


		// Le programme doit demander à l'utilisateur son choix
		cout << "Votre choix --> ";
		cin >> typeEmploye;


		// Le programme doit valider que le choix de l'utilisateur est permis, est valide
		// le type d'employe doit être compris entre 1 ET 4 OU être la lettre q minuscule  OU la lettre Q masjuscule
		// while (typeEmploye < CHOIX_MIN || typeEmploye > CHOIX_MAX && typeEmploye != 'q' && typeEmploye != 'Q')

		while (!(typeEmploye >= CHOIX_MIN && typeEmploye <= CHOIX_MAX || typeEmploye == 'q' || typeEmploye == 'Q'))
		{
			cout << "Erreur : Le choix ...." << endl;

			// Laisser le temps pour lire le message d'erreur

			// Effacer l'écran

			// Le programme affiche un menu offrant les fonctions des employés et une option pour quitter
			cout << "1. Cadre" << endl;
			cout << "2. Travailleur à taux horaire" << endl;
			cout << "3. Travailleur à la commission" << endl;
			cout << "4. Travailleur à la pièce" << endl;
			cout << "q. Quitter le programme" << endl;


			// Le programme doit demander à l'utilisateur son choix
			cout << "Votre choix --> ";
			cin >> typeEmploye;

		}


	}
	return 0;
}