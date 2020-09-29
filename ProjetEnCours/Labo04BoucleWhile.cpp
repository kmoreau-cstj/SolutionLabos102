// But : le programme affiche les 10 premiers entiers positifs
// Auteur : Karine Moreau
// Date : 2020-09-29

#include <iostream>
using namespace std;			// Pour all�ger le code et plus mettre std:: avant les cout, cin, endl, ...

int main()
{
	setlocale(LC_ALL, "");

	// declaration de constante

	// D�claration des variables au d�but du programme

	/*
	for (Etape d'initialisation de la variable de boucle (int i = 0), est faite une seule fois avant le bloc d'instructions
		Etape la condition(i < FIN) doit �tre vraie pour rentrer dans le bloc d'instructions, 
		elle est v�rifi�e avant d'entrer dans le bloc 
		Etape de r�initilisation de la variable de boucle(i++ ou i = i +2), elle DOIT changer de valeur i++
		elle est ex�cut�e � la fin du bloc d'instruction)
	{

	}

	*/
	for (int compteur = 0; compteur < 10; compteur++)
	{
		cout << compteur << endl;
	}

	// Etape de d�claration et initialisation de la variable de boucle
	int compteur = 0;

	// Etape de la condition doit �tre vraie pour rentrer dans la boucle
	while (compteur < 10)
	{
		cout << compteur << endl;

		// Etape de r�initialisation variable de boucle pour que la condition devienne fausse
		compteur++;
	}

	

	return 0;
}