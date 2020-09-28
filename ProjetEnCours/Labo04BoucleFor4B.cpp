// But :
/*
�crivez un programme qui lit 50 nombres et qui d�termine et affiche la plus grande valeur.
Le programme doit utiliser trois variables :
Compteur: Variable comptant jusqu'� 50
Nombre : Le nombre entr� par l'utilisateur
Max : La plus grande valeur de tous les nombres
*/
// Auteur : Karine Moreau
// Date : 2020-09-28

/*


si valeurDepart est plus petite que la valeurFin, alors l'op�rateur de comparaison dans la condition doit �tre plus petit que 
et le compteur doit augmenter

for (int compteur = valeurDepart; compteur < valeurFin; compteur++)
{

}
for (int compteur = valeurDepart; compteur < valeurFin; compteur = compteur + 2)
{

}
si valeurDepart est plus grande que la valeurFin, alors l'op�rateur de comparaison dans la condition doit �tre plus grand que
et le compteur doit diminuer

for (int compteur = valeurDepart; compteur > valeurFin; compteur--)
{

}
for (int compteur = valeurDepart; compteur > valeurFin; compteur = compteur - 2)
{

}


const int NB_FOIS = 5;
on veut compter 5 fois : 
1 � 5
for (int compteur=1; compteur<=NB_FOIS; compteur++ )
0 � 4
for (int compteur=0; compteur < NB_FOIS;compteur++)
5 � 1
for(int compteur=NB_FOIS; compteur>=1; compteur--)
5 � 1
for (int compteur=NB_FOIS; compteur>0; compteur--)

*/




#include <iostream>
using namespace std;			// Pour all�ger le code et plus mettre std:: avant les cout, cin, endl, ...


int main()
{
	setlocale(LC_ALL, "");

	//D�claration des constantes
	const int COMBIEN_DE_NOMBRE = 5;
	//D�claration des varaibles au d�but du programme
	int nombre;
	int max;



	for (int compteur = 0; compteur < COMBIEN_DE_NOMBRE; compteur++)
	{
		cout << "Veuillez entrer le nombre entier " << compteur + 1 << " : ";
		cin >> nombre;

		// Si c'est le prmi�re nombre ou si les nombres suivants sont plus grands que le max, alors le maximum est le nouveau nombre
		if (compteur == 0 || nombre > max )
		{
			max = nombre;
		}

	}

	cout << "Le maximum est : " << max;

	return 0;
}