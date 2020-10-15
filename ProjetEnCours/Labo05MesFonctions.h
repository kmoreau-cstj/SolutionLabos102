// Cette instruction s'assure que les fonctions ne sont ajout�es qu'une seule fois dans le projet
#pragma once


// Dans ce fichier, on va lister toutes les fonctions qu'on veut rendre disponibles au programmeur
// On va �crire pour chaque fonction son prototype : typeDeLaFonction nomDeLaFonction (liste des param�tres);
// Cela revient � d�clarer l'existence de la fonction

void afficherMenu();

char validerChoixMenu(char Min, char Max, char quitter);
