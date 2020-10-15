// Cette instruction s'assure que les fonctions ne sont ajoutées qu'une seule fois dans le projet
#pragma once


// Dans ce fichier, on va lister toutes les fonctions qu'on veut rendre disponibles au programmeur
// On va écrire pour chaque fonction son prototype : typeDeLaFonction nomDeLaFonction (liste des paramètres);
// Cela revient à déclarer l'existence de la fonction

void afficherMenu();

char validerChoixMenu(char Min, char Max, char quitter);
