// But :
// Auteur : Karine Moreau
// Date : 2020

#include <iostream>
#include <time.h>
using namespace std;			// Pour alléger le code et plus mettre std:: avant les cout, cin, endl, ...


int main()
{
	setlocale(LC_ALL, "");

	// Déclaration des constantes
	const int NB_CHANCES = 5;

	// Déclaration des variables au début du programme
	int nombre;
	int nbEssais = 1;					// Le nombre d'essais utilisés

	int random; // permet de mémoriser le nombre choisi aléatoirement par l’ordinateur
	srand(time(0)); // pour activer l’aléatoire dans le programme
	random = rand() % 101; // l’ordinateur calcule un nombre aléatoire entre 0 et 100 et le stocke dans iRandom

	cout << random << endl;

	// AVANT la boucle il faut que les variables de boucle soient initialisées
	cout << "Vous devez deviner un nombre choisi au hasard entre 0 et 100." << endl;
	cout << "Essai #" << nbEssais << endl;
	cout << "Veuillez entrer un nombre compris entre 0 et 100 : ";
	cin >> nombre;
	//On s'assure que le nombre est bien compris entre 0 et 100
	while (!(nombre >= 0 && nombre <= 100))
	{
		cout << "erreur : le nombre doit être compris entre 0 et 100.";
		// A LA FIN de la boucle, la variable de boucle, ici, nombre, doit impérativement changer
		cout << "Veuillez entrer un nombre compris entre 0 et 100 : ";
		cin >> nombre;
	}


	// Il faut déterminer quand le programme doit s'arrêter
	// Si l'utilisateur a trouvé le bon nombre ou qu'il a epuisé toutes les chances
	while (!(nombre == random || nbEssais == NB_CHANCES))
	{
		// Si on est dans la boucle, l'utilisateur n'a pas gagné et n'a pas encore perdu
		cout << "Ce n'est pas le bon nombre" << endl;

		if (nombre > random)
		{
			cout << "votre nombre est trop grand" << endl;
		}
		else
		{
			cout << "votre nombre est trop petit" << endl;
		}

		// A LA FIN de la boucle, les varaibles de boucle DOIVENT etre réinitialisées
		nbEssais++;
		cout << "Essai #" << nbEssais << endl;
		cout << "Veuillez entrer un nombre compris entre 0 et 100 : ";
		cin >> nombre;
		//On s'assure que le nombre est bien compris entre 0 et 100
		while (!(nombre >= 0 && nombre <= 100))
		{
			cout << "erreur : le nombre doit être compris entre 0 et 100.";
			// A LA FIN de la boucle, la variable de boucle, ici, nombre, doit impérativement changer
			cout << "Veuillez entrer un nombre compris entre 0 et 100 : ";
			cin >> nombre;
		}

	}

	// Quand on sort de la boucle, il y a deux cas possibles : il a trouvé le bon nombre ou il a épuisé toutes les chances
	if (nombre == random)
	{
		cout << "Bravo vous avez trouvé le bon nombre en " << nbEssais << " essais !" << endl;
	}
	else
	{
		cout << "Dommage, le nombre était " << random << endl;
	}

	return 0;
}

