// But : Demander à l'utilisateur de taper deux nombres entiers et le programme dit s'ils sont pareils
//       ou pas
// Auteur : Karine Moreau
// Date : 2020-09-11

// Les opérateurs de comparaison
// Mathématique						Informatique C++
// égal =							==
// Plus grand strictement que >		>
// Plus petit strictement que <		<
// différent						!=		Le point d'exclamation veut dire PAS
// Plus grand ou égal				>=
// Plus petit ou égal				<=

#include <iostream>					// Pour communiquer avec l'utilisateur

void main()
{
	setlocale(LC_ALL, "");			// Pour afficher correctement les accents dans la console

	// Déclaration des variables
	int nombre1, nombre2;				// Pour se souvenir des deux valeurs fournies par l'utilisateur

	// Le programme doit afficher un message pour inviter l'utilisateur à entrer un nombre entier
	std::cout << "Veuillez entrer un nombre entier : ";
	// Le programme doit lire le nombre qui a été tapé au clavier
	std::cin >> nombre1;

	std::cout << "Veuillez entrer le deuxième nombre entier :";
	std::cin >> nombre2;

	// Le programme compare les deux valeurs et SI elles sont égales, il affiche qu'elles sont pareilles
	// SINON, il dit qu'elles ne sont pas pareilles
	if (nombre1 == nombre2)							// If est suivi de parenthèses mais ce n'est pas une fonction
							// Dans les parenthèses on écrit la condition avec un opérateur de comparaison
							// Après la parenthèse fermante, il N'y a JAMAIS de point-virgule;
	{				// On ouvre un deuxième bloc d'instructions qui sera exécuté si la condition est vraie
		std::cout << nombre1 << " est pareil que " << nombre2 << std::endl;
	}
	else            // ATTENTION : il n'y a rien après le else, pas de parenthèse
	{
		std::cout << nombre1 << " n'est pas pareil que " << nombre2 << std::endl;
	}

	if (nombre1 > nombre2)
	{
		std::cout << nombre1 << " est plus grand strictement que " << nombre2;
	}
	else
	{
		std::cout << nombre2 << " est plus grand ou égal à " << nombre1;
	}
}

// Plan de tests
/*
nombre1						nombre2					résultat escompté
15							12						15 n'est pas pareil que 12
													15 est plus grand strictement que 12
10							10						10 est pareil que 10
													10 est plus grand ou égal à 10
-1							0						-1 n'est pas pareil que 0
													0 est plus grand ou égal à -1
-2							-2						-2 est pareil que -2
													-2 est plus grand ou égal à -2

*/