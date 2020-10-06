// But : L'utilisateur sohaite prendre l'ascenseur. On suppose qu'il est � l'�tage 1. On lui demande quel �tage il veut atteindre.
// Le programme affiche l'�tage o� il est rendu et indique quand les portes s'ouvrent et que l'utilisateur est arriv� � destination.
// Auteur : Karine Moreau
// Date : 2020

#include <iostream>

using namespace std;				// Pour �viter de r�p�ter le std:: devant les instructions comme cout, cin, endl, ...


int main()
{
	setlocale(LC_ALL, "");

	// D�claration des variables
	int etageArrivee;


	cout << "Indiquez l'�tage � atteindre -->";
	cin >> etageArrivee;

	cout << "Vous �tes � l'�tage 1, vous montez dans l'ascenseur..." << endl;

	// Pour r�p�ter les �tages que l'on gravit, on utilise une boucle for
	/*
	for (size_t i = 0; i < length; i++)
	{
	}
	size_t i = 0;	site_t doit �tre remplac� par un type de variable (char, int, float, double, bool) la plupart du temps c'est un int
					i est le nom de la variable mais il est modifiable, c'est un compteur. On change le nom et on fait TAB, il se change aux
					deux autres endroits
					=0, En informatique, on commence � compter � partir de 0. Mais on peut changer la valeur de d�part. Elle peut �tre 1, 4, 10
					cette instruction est ex�cut�e une seule fois et toujours avant de commencer la boucle
	i < length;		c'est une condition pour continuer la boucle. Tant que la condition est vraie, il recommence le bloc d'instructions
					Length est la valeur d'arriv�e, la valeur d'arr�t. L'op�rateur de comparaison peut �tre <, <=, >, >=, ==, !=
					ATTENTION : Si le compteur (i) commence � 0 alors on doit mettre < inf�rieur strictement � la valeur finale
					ATTENTION : si le compteur (i) commencer � 1 alors on doit mettre <= inf�rieur ou �gal � la valeur finale
					Length est g�n�ralement une valeur qui a �t� demand�e � l'utilisateur donc une variable, 
					ou une constante fix�e par le programmeur
					La condition est �valu�e � chaque fois avant d'ex�cuter le bloc d'instruction. Si elle est vraie, le bloc est ex�cut�, sinon
					on va � l'instruction qui suit la boucle for, apr�s l'accolade fermante

	i++				A la fin de l'ex�cution du bloc, la valeur du compteur (i) DOIT �tre modifi�e pour que la condition puisse devenir fausse �
					un moment donn�.
					++ signifie augmenter la valeur de la variable de 1. i++ : i = i + 1
					ATTENTION : Si la condtion utilise < ou <=, le i doit AUGMENTER ++
					ATTENTION : si la condition utilise > ou >= , le i doit DIMINUER --
					On peut aussi augmenter ou diminuer d'une valeur diff�rente de 1,  i = i + 5
	
	*/


	for (int numEtage = 1; numEtage <= etageArrivee; numEtage++)
	{
		cout << "Vous �tes � l'�tage " << numEtage << endl;
	}

	cout << "Vous �tes arriv�, les portes s'ouvrent ..." << endl;

	return 0;
}