// But :
/*
Écrivez un programme qui lit 50 nombres et qui détermine et affiche la plus grande valeur.
Le programme doit utiliser trois variables :
Compteur: Variable comptant jusqu'à 50
Nombre : Le nombre entré par l'utilisateur
Max : La plus grande valeur de tous les nombres
*/
// Auteur : Karine Moreau
// Date : 2020-09-28

/*


si valeurDepart est plus petite que la valeurFin, alors l'opérateur de comparaison dans la condition doit être plus petit que 
et le compteur doit augmenter

for (int compteur = valeurDepart; compteur < valeurFin; compteur++)
{

}
for (int compteur = valeurDepart; compteur < valeurFin; compteur = compteur + 2)
{

}
si valeurDepart est plus grande que la valeurFin, alors l'opérateur de comparaison dans la condition doit être plus grand que
et le compteur doit diminuer

for (int compteur = valeurDepart; compteur > valeurFin; compteur--)
{

}
for (int compteur = valeurDepart; compteur > valeurFin; compteur = compteur - 2)
{

}


const int NB_FOIS = 5;
on veut compter 5 fois : 
1 à 5
for (int compteur=1; compteur<=NB_FOIS; compteur++ )
0 à 4
for (int compteur=0; compteur < NB_FOIS;compteur++)
5 à 1
for(int compteur=NB_FOIS; compteur>=1; compteur--)
5 à 1
for (int compteur=NB_FOIS; compteur>0; compteur--)

*/




#include <iostream>
using namespace std;			// Pour alléger le code et plus mettre std:: avant les cout, cin, endl, ...


int main()
{
	setlocale(LC_ALL, "");

	//Déclaration des constantes
	const int COMBIEN_DE_NOMBRE = 5;
	//Déclaration des varaibles au début du programme
	int nombre;
	int max;



	for (int compteur = 0; compteur < COMBIEN_DE_NOMBRE; compteur++)
	{
		cout << "Veuillez entrer le nombre entier " << compteur + 1 << " : ";
		cin >> nombre;

		// Si c'est le prmière nombre ou si les nombres suivants sont plus grands que le max, alors le maximum est le nouveau nombre
		if (compteur == 0 || nombre > max )
		{
			max = nombre;
		}

	}

	cout << "Le maximum est : " << max;

	return 0;
}