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
	// Les becs de canards laissent trainer ses séparateurs (espace, \t et les \n) et les caractères pas lisibles pour le type
	// Après chaque bec canard, il faut ignorer la présence du délimitateur avec ignore
	canal.ignore(1,':');
	getline(canal, unMateriel.description, ':');
	canal >> unMateriel.cout;
	// Après chaque bec canard, il faut ignorer la présence du délimitateur avec ignore
	canal.ignore(1, ':');
	getline(canal, unMateriel.dateAchat, ':');
	// A la fin de l'enregistrement, il y en retour à la ligne, il faut l'ignorer
	canal.ignore(1, '\n');

	cout << "A la fin de la fonction" << unMateriel.typeDeMateriel << " " << unMateriel.description << " " << unMateriel.cout << endl;


}
