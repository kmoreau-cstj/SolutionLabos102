// But :
// Auteur : Karine Moreau
// Date : 2020

#include <iostream>
#include <time.h>
using namespace std;			// Pour all�ger le code et plus mettre std:: avant les cout, cin, endl, ...


int main()
{
	setlocale(LC_ALL, "");

	// D�claration des constantes
	const int NB_CHANCES = 5;

	// D�claration des variables au d�but du programme
	int nombre;
	int nbEssais = 1;					// Le nombre d'essais utilis�s

	int random; // permet de m�moriser le nombre choisi al�atoirement par l�ordinateur
	srand(time(0)); // pour activer l�al�atoire dans le programme
	random = rand() % 101; // l�ordinateur calcule un nombre al�atoire entre 0 et 100 et le stocke dans iRandom

	cout << random << endl;

	// AVANT la boucle il faut que les variables de boucle soient initialis�es
	cout << "Vous devez deviner un nombre choisi au hasard entre 0 et 100." << endl;
	cout << "Essai #" << nbEssais << endl;
	cout << "Veuillez entrer un nombre compris entre 0 et 100 : ";
	cin >> nombre;
	//On s'assure que le nombre est bien compris entre 0 et 100
	while (!(nombre >= 0 && nombre <= 100))
	{
		cout << "erreur : le nombre doit �tre compris entre 0 et 100.";
		// A LA FIN de la boucle, la variable de boucle, ici, nombre, doit imp�rativement changer
		cout << "Veuillez entrer un nombre compris entre 0 et 100 : ";
		cin >> nombre;
	}


	// Il faut d�terminer quand le programme doit s'arr�ter
	// Si l'utilisateur a trouv� le bon nombre ou qu'il a epuis� toutes les chances
	while (!(nombre == random || nbEssais == NB_CHANCES))
	{
		// Si on est dans la boucle, l'utilisateur n'a pas gagn� et n'a pas encore perdu
		cout << "Ce n'est pas le bon nombre" << endl;

		if (nombre > random)
		{
			cout << "votre nombre est trop grand" << endl;
		}
		else
		{
			cout << "votre nombre est trop petit" << endl;
		}

		// A LA FIN de la boucle, les varaibles de boucle DOIVENT etre r�initialis�es
		nbEssais++;
		cout << "Essai #" << nbEssais << endl;
		cout << "Veuillez entrer un nombre compris entre 0 et 100 : ";
		cin >> nombre;
		//On s'assure que le nombre est bien compris entre 0 et 100
		while (!(nombre >= 0 && nombre <= 100))
		{
			cout << "erreur : le nombre doit �tre compris entre 0 et 100.";
			// A LA FIN de la boucle, la variable de boucle, ici, nombre, doit imp�rativement changer
			cout << "Veuillez entrer un nombre compris entre 0 et 100 : ";
			cin >> nombre;
		}

	}

	// Quand on sort de la boucle, il y a deux cas possibles : il a trouv� le bon nombre ou il a �puis� toutes les chances
	if (nombre == random)
	{
		cout << "Bravo vous avez trouv� le bon nombre en " << nbEssais << " essais !" << endl;
	}
	else
	{
		cout << "Dommage, le nombre �tait " << random << endl;
	}

	return 0;
}

