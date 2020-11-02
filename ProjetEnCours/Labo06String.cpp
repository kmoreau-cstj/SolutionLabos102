// But :
// Auteur : Karine Moreau
// Date : 2020

#include <iostream>
#include <string>				// Biblioth�que contenant les fonctions sp�cifiques aux string
using namespace std;			// Pour all�ger le code et plus mettre std:: avant les cout, cin, endl, ...


int main()
{
	setlocale(LC_ALL, "");

	// D�claration des variables au d�but du programme
	// Quels sont les types de bases des variables : int, float, bool, char, double
	int nombre(10);			// type () : on appelle le constructeur des int, dans les parenth�ses on peut mettre la valeur
	int entier = 15;
	int nb1, nb2, nb3;
	nb1 = 7;	
	// On ajoute un type complexe : string, une suite de char
	string prenom;
	string salutation("Bonjour � tous !"); // string est objet qui a un constructeur (sa job est de cr�er et initialiser une variable)
	string adresse;
	string poeme;


	// il faut donner une valeur � la variable : initialiser la variable
	entier = 15;				// Ici en utilisant l'op�rateur d'affectation
	prenom = "Karine";

	// on affiche le contenu de la variable
	cout << "Le nombre est " << nombre << endl;
	cout << salutation  << " et particuli�rement � " << prenom << endl;

	// On veut demander � l'utilisateur de taper la valeur
	cout << "Veuillez entrer un nombre : ";
	cin >> nombre;			// Les becs de canard laissent dans la m�moire du clavier les s�parateurs comme espace, tabulation et enter
	// il faut faire le m�nage apr�s le passage de cin >>
	cin.ignore();			// cette fonction va effacer un caract�re dans la m�moire du clavier
							// La fonction ignore prend deux param�tres, mais ils ne sont pas obligatoires 
							// car ils ont une valeur par d�faut qui est 1 caract�re et n'importe quel caract�re
	//cin.ignore(1, '\n');	// ici, on pr�cise les deux param�tres : on veut ignorer un caract�re, qui sera le enter \n: newline	
	cout << "Le nombre est " << nombre << endl;

	cout << "Veuillez entrer trois nombres : ";
	cin >> nb1 >> nb2 >> nb3;
	cin.ignore(1, '\n');
	cout << "les trois nombres sont " << nb1 << ", " << nb2 << ", "<< nb3 << endl;




	cout << "Veuillez entrer votre pr�nom :";
	cin >> prenom;
	cin.ignore();
	cout << "Vous vous appelez " << prenom << endl;

	// on veut demander l'adresse de l'utilisateur
	cout << "Veuillez entrer votre adresse :";
	// cin >> adresse;     // On constate que cin >> ne convient pas pour saisir une chaine de caract�res 
						   // qui contient des espaces, ou des tabulations ou des enter

	

	// Il faut un autre outil sp�cifique aux string pour lire sur le clavier : getline
	getline(cin, adresse, '\n');		// getline : 3 param�tres : 1. o� lit-on l'information ? --> cin
										//                          2. Dans quoi on stocke l'information ? --> variable : adresse
										//							3. Jusqu'o� on lit l'information ? 
										//								--> tant qu'on ne rencontre pas le enter ('\n')
	
	cout << "Vous habitez au " << adresse << endl;

	// Si on compare des string
	if (nombre == 7)
	{
		cout << "vous avez le m�me nombre f�tiche que moi !" << endl;
	}
	else
		cout << "Bof ! votre nombre n'est pas original !!" << endl;

	if (prenom == "Karine")
	{
		cout << "Vous �tes mon amie !" << endl;
	}
	else
	{
		cout << "Je ne vous connais pas." << endl;
	}

	if (prenom >= "Arthur")
	{
		cout << prenom << " est apr�s Arthur" << endl;
	}
	else
		cout << prenom << " est avant Arthur" << endl;

	if (prenom <= "Zo�")
	{
		cout << prenom << " est avant Zo�" << endl;
	}
	else
		cout << prenom << " est apr�s Zo�" << endl;




	cout << "Veuillez entrer un po�me  et appuyez sur # pour finir: " << endl;
	getline(cin, poeme, '#');
	cout << "Votre po�me est : " << endl << poeme << endl;








	return 0;
}