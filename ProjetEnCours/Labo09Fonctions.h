// But : Faire des fonctions avec des paramètres par référence
// Auteur : Karine Moreau
// Date : 2020-11-12

#pragma once
#include <vector>
using namespace std;
// Pour passer des paramètres à une fonction, il y a deux méthodes, ou deux façons, deux types d'autorisation
// en français :				Le paramètre est passé par référence			Le paramètre est passé par copie, par valeur
// en informatique :			le paramètre est en écriture					Le paramètre est en lecture
// en C++ :						avec &											sans &
// Raison d'utiliser :			1. on a plusieurs valeurs à retourner
//								2. On ne veut pas utiliser le return :
//								   fonction de type void
//								3. On ne veut pas recopier un paramètre qui est gros
//                                 pour réduire le temps de copie et d'espace 
//                                 mémoire => dangereux, car le paramètre est en écriture
//                                 pour protéger la valeur, ont met const devant le type : const int&

void faireUnTest(int paramParCopie, int& paramParReference);
void faireUnTest2(int paramParCopie, const int& paramParReferenceGros);

void echangerValeur(int& nb1, int& nb2);
void afficherContenuVecteur(vector<int> vec);
void ajouterValeurALaFinVecteur(vector<int>& vec, int nbElement);

void saisirValeurVecteur(vector<int>& vec, int quitter);

// Ici pas le choix de la &(par référence) car on modifie le contenu du vecteur
void saisirEmployeVente(vector<string>& vecEmploye, vector<float>& vecVentes, string quitter);

// Ici on choisit par référence pour des questions de rapidité (pas de recopie) et d'économie sur la mémoire
void afficherEmployeVente(const vector<string>& vecEmploye, const vector<float>& vecVentes);
void afficherSalaireEmploye(vector<string> vecEmploye, vector<float>vecVentes);
float calculerSalaireEmploye(const vector<float>& vecVentes, int numeroCase, float salaireFixe, float pourcentage);


