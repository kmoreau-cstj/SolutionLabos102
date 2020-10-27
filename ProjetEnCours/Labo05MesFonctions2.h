#pragma once				// les include du fichier .h ne seront fait qu'une seule fois


// Faire la liste des fonctions disponibles
int calculerCarre(int entier);

// On surcharge (la fonction porte le même nom d'une autre), la liste des paramètres doit juste différer à un endroit,
// sur le type des paramètres ou le nombre de paramètre
int calculerCube(int nb);
double calculerCube(double nb);