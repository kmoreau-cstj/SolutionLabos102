#pragma once				// les include du fichier .h ne seront fait qu'une seule fois


// Faire la liste des fonctions disponibles
int calculerCarre(int entier);

// On surcharge (la fonction porte le m�me nom d'une autre), la liste des param�tres doit juste diff�rer � un endroit,
// sur le type des param�tres ou le nombre de param�tre
int calculerCube(int nb);
double calculerCube(double nb);