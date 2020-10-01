// But : Écrire un programme qui demande à l'utilisateur une lettre de l'alphabet. Tant que ce n'est pas une lettre il la redemande.
// Auteur : Karine Moreau
// Date : 2020-10-01

#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "");
	// Déclaration des variables
	
	char lettre;


	// AVANT la boucle, la variable doit être initialisée = mettre une valeur. 
	// Comment mettre une valeur
	// lettre = 'a';			c'est le programmeur qui met la valeur
	// cin >> lettre;			c'est l'utilisateur qui met la valeur


	cout << " Veuiller entrer une lettre :";
	cin >> lettre;

	while (!(lettre >= 'a' && lettre <= 'z' || lettre >= 'A' && lettre <= 'Z'))
	{
		cout << " ERREUR vous n'avez pas choisi une lettre ";

		// A LA FIN de la boucle, la variable doit être réinitialisée
		cout << " Veuiller entrer une lettre :";
		cin >> lettre;
	}
	cout << " vous avez rentré une lettre ";

	


	return 0;
}
