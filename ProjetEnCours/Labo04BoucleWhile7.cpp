// But : 
/*
Les conducteurs se soucient du kilométrage parcouru par leurs automobiles. 
Un conducteur décide d'enregistrer la quantité de kilomètres parcourus et la quantité de litres utilisés à chaque plein d'essence.
Développez un programme afin d'entrer les quantités de kilomètres parcourus et de litres utilisés à chaque plein d'essence.
Le programme doit calculer et afficher le taux de litres aux 100 kilomètres obtenu entre chaque plein d'essence.
Après avoir traité toutes les informations, le programme doit calculer le taux combiné de litres aux 100 kilomètres pour les pleins
d'essence. Le programme s'arrête si le conducteur entre -1 comme nombre de litres
plan de tests :
nb_litres	nb_km		taux aux 100km				moyenne des taux aux 100km
12.8		28			45.71						Faire la somme	et compter 1
10.3		200			5.15						Faire la somme	et compter 2
5			120			4.17						Faire la somme	et compter 3
-1													18.34  la somme / compteur

autre plan de tests
-1													?????

*/
// Auteur : Karine Moreau
// Date : 2020-10-01

#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "");
	// declaration de variables
	int nbKilometres;
	float litresEssence;
	float tauxAu100Km; // Nombres de litres *100 divisé par nombres de kilomètres.
	float sommeDesTaux = 0; // Au départ on a pas de nombre de litres, pas de kilomètres, donc pas de taux, donc la somme est à 0.
	float cumul = 0; // Somme des taux divisée par le nombre de fois qu'il a rentré un nombre de litres
	int nbFois = 0; // Au départ l'utililsateur n'a saisie aucun nombre de litre, donc égale 0.

	cout << " Veuillez entrer un nombre de Litres d'essence";
	cin >> litresEssence;

	// tant que le nombre de litres n'est pas égal à moins 1, on redemande le nombre de litres.

	while (litresEssence != -1)
	{

		cout << " Veuillez entrer un nombre de nombre de Kilomètres";
		cin >> nbKilometres;

		// Calculer le taux au 100 kilomètres.

		tauxAu100Km = ((litresEssence * 100) / nbKilometres);
		cout << tauxAu100Km << endl;

		// on cumule le taux au 100 kilomètres.

		sommeDesTaux = tauxAu100Km + sommeDesTaux;
		//Ajuster le nomnre de fois.

		nbFois = nbFois + 1;


		cout << " Veuillez entrer un nombre de Litres d'essence";
		cin >> litresEssence;

	}

	// afficher ici le cumul.




	return 0;
}

