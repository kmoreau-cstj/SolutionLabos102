// But : 
// Auteur : Karine Moreau
// Date : 2020-09-22
/*
Écrire un programme pour calculer le montant qu’un individu devra débourser pour faire un voyage 
dans une automobile louée. L’algorithme tient compte du kilométrage parcouru et de la durée du 
voyage qui sont soumises par le requérant.

Les différentes sources de dépenses sont :
o Coût de la location de 45$ par jour et comprend 250 km gratuits par jour.
o La consommation du véhicule est 7.6 litres aux 100 km.
o 1 litre d’essence coûte 1.25$
o 0.05$ du kilomètre est exigé pour chaque kilomètre supplémentaire.

*/


#include <iostream>

int main()
{
	setlocale(LC_ALL, "");

	// Première lecture de l'énoncé : On recherche les informations que l'utilisateur doit 
	// fournir au programme. => créer les variables pour stocker ces infos

	// Déclaration des variables
	int kmParcouru;					// kilométrage parcouru 
	int nbJour;						// et de la durée du voyage

	// Deuxième lecture de l'énoncé : On recherche les résultats à obtenir et à afficher à l'écran
	float coutTotal;    // montant en dollars du voyage

	// Troisième lecture de l'énoncé : On recherche les calculs intermédiaires pour obtenir le résultat 
	// final
	float coutLocation;			// Ou double est plus précis
	float coutEssence;
	int kmSupp;
	float coutKmSupp;

	// Quatrième lecture : On cherche les valeurs numériques dans l'énoncé pour déclarer les constantes
	// avec le mot clé const qu'il faudra initialiser dès sa déclaration
	const float PRIX_LOCATION = 45;
	const int KM_GRATUIT = 250;
	const float CONSO_ESSENCE = 7.6 / 100;
	const float PRIX_ESSENCE = 1.25;
	const float PRIX_KM_SUPP = 0.05;

	// Cinquième lecture : Comment calculer le résultat final
	// coutTotal = coutLocation + CoutEssence + coutKmSupp
	// coutLocation = PRIX_LOCATION * nbJour
	// coutEssence = kmParcouru * CONSO_ESSENCE * PRIX_ESSENCE
	// Calculer les km supplémentaires
	// kmSupp = kmParcouru - KM_GRATUIT*nbJour
	// si kmSupp > 0	on a des km supplémentaires on calcule le coût
			// coutkmSupp = kmSupp * PRIX_KM_SUPP
	// sinon
			// coutkmSupp = 0

	/*
	plan de tests
	nbJours	kmParcouru	coutLocation	coutEssence				kmSupp			coutKmSupp	coutTotal	
	0		Erreur
	-10		Erreur
	1		-1			Erreur
	1		0			45*1=45			0						0-250*1= -250	0			45+0+0=45			
	1		250			45*1 = 45		250*0.076*1.25=23.75		0			0			45+23.75+0=68.75
	1		350			45*1 = 45		350*0.076*1.25=33.25	350-250*1=100	100*0.05= 5	45+33.25+5=83.25
	10		3000		45*10 = 450		3000*0.076*1.25=285		3000-250*10=500	500*0.05=25	450+285+25=760


	*/

	// demander à l'utilisateur les informations
	std::cout << "Veuillez entrer la durée de la location du véhicule : ";
	std::cin >> nbJour;

	// On valide chaque saisie d'information
	if (nbJour <= 0)
	{
		std::cout << "Erreur : La durée de la location ne peut pas être négative ou égale à 0.";
	}
	else
	{
		// On demande le nb km
		std::cout << "Veuillez entrer le nombre de kilomètres parcourus : ";
		std::cin >> kmParcouru;

		// On valide l'information 
		if (kmParcouru < 0)
		{
			std::cout << "Erreur : le nombre de kilomètres ne peut pas être négatif.";
		}
		else
		{
			// On calcule les couts
			coutLocation = PRIX_LOCATION * nbJour;
			coutEssence = kmParcouru * CONSO_ESSENCE * PRIX_ESSENCE;
			// Calculer les km supplémentaires
			kmSupp = kmParcouru - KM_GRATUIT * nbJour;
			// si kmSupp > 0	on a des km supplémentaires on calcule le coût
			if (kmSupp > 0)
			{
				coutKmSupp = kmSupp * PRIX_KM_SUPP;
			}
			else
			{
				coutKmSupp = 0;
				// On veut afficher le nombre de km supp mais pas de valeur négatives, donc on le met à 0
				kmSupp = 0;
			}
			coutTotal = coutLocation + coutEssence + coutKmSupp;

			// On affiche le résultat final
			std::cout << "Facture de location de véhicule" << std::endl << std::endl;
			std::cout << "Détails des coûts de la location :" << std::endl;
			std::cout << "Location du véhicule       : " << nbJour << "*" << PRIX_LOCATION << "=" << coutLocation << std::endl;
			std::cout << "Consommation d'essence     : " << kmParcouru << "*" << CONSO_ESSENCE*100 << "/100*" << PRIX_ESSENCE<< "=" << coutEssence << std::endl;
			std::cout << "Kilomètres supplémentaires : " << kmSupp << "*" << PRIX_KM_SUPP << "=" << coutKmSupp << std::endl;
			std::cout << "----------------------------------------------------------"<< std::endl;
			std::cout << "Coût total 				 :	" << coutTotal << std::endl;
		}
	}

	return 0;
}