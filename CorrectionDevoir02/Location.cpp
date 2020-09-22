// But : 
// Auteur : Karine Moreau
// Date : 2020-09-22
/*
�crire un programme pour calculer le montant qu�un individu devra d�bourser pour faire un voyage 
dans une automobile lou�e. L�algorithme tient compte du kilom�trage parcouru et de la dur�e du 
voyage qui sont soumises par le requ�rant.

Les diff�rentes sources de d�penses sont :
o Co�t de la location de 45$ par jour et comprend 250 km gratuits par jour.
o La consommation du v�hicule est 7.6 litres aux 100 km.
o 1 litre d�essence co�te 1.25$
o 0.05$ du kilom�tre est exig� pour chaque kilom�tre suppl�mentaire.

*/


#include <iostream>

int main()
{
	setlocale(LC_ALL, "");

	// Premi�re lecture de l'�nonc� : On recherche les informations que l'utilisateur doit 
	// fournir au programme. => cr�er les variables pour stocker ces infos

	// D�claration des variables
	int kmParcouru;					// kilom�trage parcouru 
	int nbJour;						// et de la dur�e du voyage

	// Deuxi�me lecture de l'�nonc� : On recherche les r�sultats � obtenir et � afficher � l'�cran
	float coutTotal;    // montant en dollars du voyage

	// Troisi�me lecture de l'�nonc� : On recherche les calculs interm�diaires pour obtenir le r�sultat 
	// final
	float coutLocation;			// Ou double est plus pr�cis
	float coutEssence;
	int kmSupp;
	float coutKmSupp;

	// Quatri�me lecture : On cherche les valeurs num�riques dans l'�nonc� pour d�clarer les constantes
	// avec le mot cl� const qu'il faudra initialiser d�s sa d�claration
	const float PRIX_LOCATION = 45;
	const int KM_GRATUIT = 250;
	const float CONSO_ESSENCE = 7.6 / 100;
	const float PRIX_ESSENCE = 1.25;
	const float PRIX_KM_SUPP = 0.05;

	// Cinqui�me lecture : Comment calculer le r�sultat final
	// coutTotal = coutLocation + CoutEssence + coutKmSupp
	// coutLocation = PRIX_LOCATION * nbJour
	// coutEssence = kmParcouru * CONSO_ESSENCE * PRIX_ESSENCE
	// Calculer les km suppl�mentaires
	// kmSupp = kmParcouru - KM_GRATUIT*nbJour
	// si kmSupp > 0	on a des km suppl�mentaires on calcule le co�t
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

	// demander � l'utilisateur les informations
	std::cout << "Veuillez entrer la dur�e de la location du v�hicule : ";
	std::cin >> nbJour;

	// On valide chaque saisie d'information
	if (nbJour <= 0)
	{
		std::cout << "Erreur : La dur�e de la location ne peut pas �tre n�gative ou �gale � 0.";
	}
	else
	{
		// On demande le nb km
		std::cout << "Veuillez entrer le nombre de kilom�tres parcourus : ";
		std::cin >> kmParcouru;

		// On valide l'information 
		if (kmParcouru < 0)
		{
			std::cout << "Erreur : le nombre de kilom�tres ne peut pas �tre n�gatif.";
		}
		else
		{
			// On calcule les couts
			coutLocation = PRIX_LOCATION * nbJour;
			coutEssence = kmParcouru * CONSO_ESSENCE * PRIX_ESSENCE;
			// Calculer les km suppl�mentaires
			kmSupp = kmParcouru - KM_GRATUIT * nbJour;
			// si kmSupp > 0	on a des km suppl�mentaires on calcule le co�t
			if (kmSupp > 0)
			{
				coutKmSupp = kmSupp * PRIX_KM_SUPP;
			}
			else
			{
				coutKmSupp = 0;
				// On veut afficher le nombre de km supp mais pas de valeur n�gatives, donc on le met � 0
				kmSupp = 0;
			}
			coutTotal = coutLocation + coutEssence + coutKmSupp;

			// On affiche le r�sultat final
			std::cout << "Facture de location de v�hicule" << std::endl << std::endl;
			std::cout << "D�tails des co�ts de la location :" << std::endl;
			std::cout << "Location du v�hicule       : " << nbJour << "*" << PRIX_LOCATION << "=" << coutLocation << std::endl;
			std::cout << "Consommation d'essence     : " << kmParcouru << "*" << CONSO_ESSENCE*100 << "/100*" << PRIX_ESSENCE<< "=" << coutEssence << std::endl;
			std::cout << "Kilom�tres suppl�mentaires : " << kmSupp << "*" << PRIX_KM_SUPP << "=" << coutKmSupp << std::endl;
			std::cout << "----------------------------------------------------------"<< std::endl;
			std::cout << "Co�t total 				 :	" << coutTotal << std::endl;
		}
	}

	return 0;
}