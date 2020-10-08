// But : La consommation d’électricité est calculée à partir du relevé effectué sur le compteur. 
// L’utilisateur indique au programme l’ancien relevé et le nouveau. 
// Le programme calcule la différence et doit appliquer un facteur multiplicateur fixé à 40 pour obtenir le nombre de kWh consommés
// par le client. Les 30 premiers kWh par jour sont facturés à 0,0545 $ par kWh. 
// L’excédent est facturé à 0,0751 $ par kWh.
// Auteur : Karine Moreau
// Date : 2020

#include <iostream>
using namespace std;			// Pour alléger le code et plus mettre std:: avant les cout, cin, endl, ...


int main()
{
	setlocale(LC_ALL, "");

	// Déclaration des constantes
	const int PREMIER_KWH = 30;
	const float TARIF_BAS = 0.0545;
	const float TARIF_HAUT = 0.0751;
	const int FACTEUR = 40;


	
	// Déclaration des variables pour les informations fournies par l'utilisateur
	int ancien;
	int nouveau;
	int nbJours;

	// Déclaration des variables pour les résultats que le programme doit afficher
	int difference;
	int nbKWh;
	float montantPremier;
	float montantExcedent;
	float totalConsommation;

	// Les calculs : les formules
	// difference = nouveau - ancien
	// nbKWh = difference * FACTEUR
	// montantPremier, cela dépendant si la consommation est supérieure à 30 kwh par 
	// si nbKWh < nbJours * PREMIER_KWH alors montantPremier = nbkwh * TARIF_BAS; et montantExcedent = 0;
	// sinon montantPremier = nbJours * PREMIER_KWH * TARIF_BAS; et montantExcedent = (nbKWh - nbJours * PREMIER_KWH) * TARIF_HAUT
	// totalConsommation = montantPremier + montantExcedent

	// Déroulement du programme
	cout << "Veuillez entrer le nombre de jours : ";
	cin >> nbjours;
	// Validation ???? on pourrait s'assurer que le nombre de jours est positifs

	cout << "Veuillez entrer l'ancien rélevé : " <<endl;
	cin >> ancien;
	cout << "Veuillez entrer le nouveau rélevé : " << endl;
	cin >> nouveau;

	// Validation ???   il faut s'assurer que le nouveau soit plus grand que l'ancien
	while (ancien > nouveau)
	{
		cout << "erreur : ..." << endl;

		cout << "Veuillez entrer l'ancien rélevé : " << endl;
		cin >> ancien;
		cout << "Veuillez entrer le nouveau rélevé : " << endl;
		cin >> nouveau;
	}

	// Faire les calculs
	difference = nouveau - ancien;
	nbKWh = difference * FACTEUR;
	// montantPremier, cela dépendant si la consommation est supérieure à 30 kwh par 
	if (nbKWh < nbJours * PREMIER_KWH)
	{
		montantPremier = nbkwh * TARIF_BAS;
		montantExcedent = 0;
	}
	else
	{
		montantPremier = nbJours * PREMIER_KWH * TARIF_BAS;
		montantExcedent = (nbKWh - nbJours * PREMIER_KWH) * TARIF_HAUT;
	}


	totalConsommation = montantPremier + montantExcedent;

	// Afficher les résultats








	return 0;
}