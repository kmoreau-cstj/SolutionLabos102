// But : L'utilisateur sohaite prendre l'ascenseur. On suppose qu'il est à l'étage 1. On lui demande quel étage il veut atteindre.
// Le programme affiche l'étage où il est rendu et indique quand les portes s'ouvrent et que l'utilisateur est arrivé à destination.
// Auteur : Karine Moreau
// Date : 2020

#include <iostream>

using namespace std;				// Pour éviter de répéter le std:: devant les instructions comme cout, cin, endl, ...


int main()
{
	setlocale(LC_ALL, "");

	// Déclaration des variables
	int etageArrivee;


	cout << "Indiquez l'étage à atteindre -->";
	cin >> etageArrivee;

	cout << "Vous êtes à l'étage 1, vous montez dans l'ascenseur..." << endl;

	// Pour répéter les étages que l'on gravit, on utilise une boucle for
	/*
	for (size_t i = 0; i < length; i++)
	{
	}
	size_t i = 0;	site_t doit être remplacé par un type de variable (char, int, float, double, bool) la plupart du temps c'est un int
					i est le nom de la variable mais il est modifiable, c'est un compteur. On change le nom et on fait TAB, il se change aux
					deux autres endroits
					=0, En informatique, on commence à compter à partir de 0. Mais on peut changer la valeur de départ. Elle peut être 1, 4, 10
					cette instruction est exécutée une seule fois et toujours avant de commencer la boucle
	i < length;		c'est une condition pour continuer la boucle. Tant que la condition est vraie, il recommence le bloc d'instructions
					Length est la valeur d'arrivée, la valeur d'arrêt. L'opérateur de comparaison peut être <, <=, >, >=, ==, !=
					ATTENTION : Si le compteur (i) commence à 0 alors on doit mettre < inférieur strictement à la valeur finale
					ATTENTION : si le compteur (i) commencer à 1 alors on doit mettre <= inférieur ou égal à la valeur finale
					Length est généralement une valeur qui a été demandée à l'utilisateur donc une variable, 
					ou une constante fixée par le programmeur
					La condition est évaluée à chaque fois avant d'exécuter le bloc d'instruction. Si elle est vraie, le bloc est exécuté, sinon
					on va à l'instruction qui suit la boucle for, après l'accolade fermante

	i++				A la fin de l'exécution du bloc, la valeur du compteur (i) DOIT être modifiée pour que la condition puisse devenir fausse à
					un moment donné.
					++ signifie augmenter la valeur de la variable de 1. i++ : i = i + 1
					ATTENTION : Si la condtion utilise < ou <=, le i doit AUGMENTER ++
					ATTENTION : si la condition utilise > ou >= , le i doit DIMINUER --
					On peut aussi augmenter ou diminuer d'une valeur différente de 1,  i = i + 5
	
	*/


	for (int numEtage = 1; numEtage <= etageArrivee; numEtage++)
	{
		cout << "Vous êtes à l'étage " << numEtage << endl;
	}

	cout << "Vous êtes arrivé, les portes s'ouvrent ..." << endl;

	return 0;
}