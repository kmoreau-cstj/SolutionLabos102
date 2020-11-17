// But : Faire des fonctions avec des param�tres par r�f�rence
// Auteur : Karine Moreau
// Date : 2020-11-12

#pragma once
#include <vector>
using namespace std;
// Pour passer des param�tres � une fonction, il y a deux m�thodes, ou deux fa�ons, deux types d'autorisation
// en fran�ais :				Le param�tre est pass� par r�f�rence			Le param�tre est pass� par copie, par valeur
// en informatique :			le param�tre est en �criture					Le param�tre est en lecture
// en C++ :						avec &											sans &
// Raison d'utiliser :			1. on a plusieurs valeurs � retourner
//								2. On ne veut pas utiliser le return :
//								   fonction de type void
//								3. On ne veut pas recopier un param�tre qui est gros
//                                 pour r�duire le temps de copie et d'espace 
//                                 m�moire => dangereux, car le param�tre est en �criture
//                                 pour prot�ger la valeur, ont met const devant le type : const int&

void faireUnTest(int paramParCopie, int& paramParReference);
void faireUnTest2(int paramParCopie, const int& paramParReferenceGros);

void echangerValeur(int& nb1, int& nb2);
void afficherContenuVecteur(vector<int> vec);
void ajouterValeurALaFinVecteur(vector<int>& vec, int nbElement);

void saisirValeurVecteur(vector<int>& vec, int quitter);

// Ici pas le choix de la &(par r�f�rence) car on modifie le contenu du vecteur
void saisirEmployeVente(vector<string>& vecEmploye, vector<float>& vecVentes, string quitter);

// Ici on choisit par r�f�rence pour des questions de rapidit� (pas de recopie) et d'�conomie sur la m�moire
void afficherEmployeVente(const vector<string>& vecEmploye, const vector<float>& vecVentes);
void afficherSalaireEmploye(vector<string> vecEmploye, vector<float>vecVentes);
float calculerSalaireEmploye(const vector<float>& vecVentes, int numeroCase, float salaireFixe, float pourcentage);


