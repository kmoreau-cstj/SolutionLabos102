#include "Labo11-ListeMateriel.h"

void lireEnregistrement(ifstream& canal, Materiel& unMateriel)
{
	/*
	string typeDeMateriel;
	int quantite;
	string description;
	float cout;
	string dateAchat;
	*/
	
	// PC:2:HP Compaq Elite 8300:856.25:24-12-2015:
	// utiliser un getline pour chaque champ de type string pour lire un string avec des espaces
	// utiliser les >> pour les champs de type char, int, float, double

	getline(canal, unMateriel.typeDeMateriel, ':');
	canal >> unMateriel.quantite;
	// Les becs de canards laissent trainer ses s�parateurs (espace, \t et les \n) et les caract�res pas lisibles pour le type
	// Apr�s chaque bec canard, il faut ignorer la pr�sence du d�limitateur avec ignore
	canal.ignore(1,':');
	getline(canal, unMateriel.description, ':');
	canal >> unMateriel.cout;
	// Apr�s chaque bec canard, il faut ignorer la pr�sence du d�limitateur avec ignore
	canal.ignore(1, ':');
	getline(canal, unMateriel.dateAchat, ':');
	// A la fin de l'enregistrement, il y en retour � la ligne, il faut l'ignorer
	canal.ignore(1, '\n');

	cout << "A la fin de la fonction" << unMateriel.typeDeMateriel << " " << unMateriel.description << " " << unMateriel.cout << endl;


}
