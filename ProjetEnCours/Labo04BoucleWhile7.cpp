// But : 
/*
Les conducteurs se soucient du kilom�trage parcouru par leurs automobiles. 
Un conducteur d�cide d'enregistrer la quantit� de kilom�tres parcourus et la quantit� de litres utilis�s � chaque plein d'essence.
D�veloppez un programme afin d'entrer les quantit�s de kilom�tres parcourus et de litres utilis�s � chaque plein d'essence.
Le programme doit calculer et afficher le taux de litres aux 100 kilom�tres obtenu entre chaque plein d'essence.
Apr�s avoir trait� toutes les informations, le programme doit calculer le taux combin� de litres aux 100 kilom�tres pour les pleins
d'essence. Le programme s'arr�te si le conducteur entre -1 comme nombre de litres
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
	float tauxAu100Km; // Nombres de litres *100 divis� par nombres de kilom�tres.
	float sommeDesTaux = 0; // Au d�part on a pas de nombre de litres, pas de kilom�tres, donc pas de taux, donc la somme est � 0.
	float cumul = 0; // Somme des taux divis�e par le nombre de fois qu'il a rentr� un nombre de litres
	int nbFois = 0; // Au d�part l'utililsateur n'a saisie aucun nombre de litre, donc �gale 0.

	cout << " Veuillez entrer un nombre de Litres d'essence";
	cin >> litresEssence;

	// tant que le nombre de litres n'est pas �gal � moins 1, on redemande le nombre de litres.

	while (litresEssence != -1)
	{

		cout << " Veuillez entrer un nombre de nombre de Kilom�tres";
		cin >> nbKilometres;

		// Calculer le taux au 100 kilom�tres.

		tauxAu100Km = ((litresEssence * 100) / nbKilometres);
		cout << tauxAu100Km << endl;

		// on cumule le taux au 100 kilom�tres.

		sommeDesTaux = tauxAu100Km + sommeDesTaux;
		//Ajuster le nomnre de fois.

		nbFois = nbFois + 1;


		cout << " Veuillez entrer un nombre de Litres d'essence";
		cin >> litresEssence;

	}

	// afficher ici le cumul.




	return 0;
}

