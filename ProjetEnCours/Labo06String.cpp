// But :
// Auteur : Karine Moreau
// Date : 2020

#include <iostream>
#include <string>				// Bibliothèque contenant les fonctions spécifiques aux string
using namespace std;			// Pour alléger le code et plus mettre std:: avant les cout, cin, endl, ...


int main()
{
	setlocale(LC_ALL, "");

	// Déclaration des variables au début du programme
	// Quels sont les types de bases des variables : int, float, bool, char, double
	int nombre(10);			// type () : on appelle le constructeur des int, dans les parenthèses on peut mettre la valeur
	int entier = 15;
	int nb1, nb2, nb3;
	nb1 = 7;	
	// On ajoute un type complexe : string, une suite de char
	string prenom;
	string salutation("Bonjour à tous !"); // string est objet qui a un constructeur (sa job est de créer et initialiser une variable)
	string adresse;
	string poeme;


	// il faut donner une valeur à la variable : initialiser la variable
	entier = 15;				// Ici en utilisant l'opérateur d'affectation
	prenom = "Karine";

	// on affiche le contenu de la variable
	cout << "Le nombre est " << nombre << endl;
	cout << salutation  << " et particulièrement à " << prenom << endl;

	// On veut demander à l'utilisateur de taper la valeur
	cout << "Veuillez entrer un nombre : ";
	cin >> nombre;			// Les becs de canard laissent dans la mémoire du clavier les séparateurs comme espace, tabulation et enter
	// il faut faire le ménage après le passage de cin >>
	cin.ignore();			// cette fonction va effacer un caractère dans la mémoire du clavier
							// La fonction ignore prend deux paramètres, mais ils ne sont pas obligatoires 
							// car ils ont une valeur par défaut qui est 1 caractère et n'importe quel caractère
	//cin.ignore(1, '\n');	// ici, on précise les deux paramètres : on veut ignorer un caractère, qui sera le enter \n: newline	
	cout << "Le nombre est " << nombre << endl;

	cout << "Veuillez entrer trois nombres : ";
	cin >> nb1 >> nb2 >> nb3;
	cin.ignore(1, '\n');
	cout << "les trois nombres sont " << nb1 << ", " << nb2 << ", "<< nb3 << endl;




	cout << "Veuillez entrer votre prénom :";
	cin >> prenom;
	cin.ignore();
	cout << "Vous vous appelez " << prenom << endl;

	// on veut demander l'adresse de l'utilisateur
	cout << "Veuillez entrer votre adresse :";
	// cin >> adresse;     // On constate que cin >> ne convient pas pour saisir une chaine de caractères 
						   // qui contient des espaces, ou des tabulations ou des enter

	

	// Il faut un autre outil spécifique aux string pour lire sur le clavier : getline
	getline(cin, adresse, '\n');		// getline : 3 paramètres : 1. où lit-on l'information ? --> cin
										//                          2. Dans quoi on stocke l'information ? --> variable : adresse
										//							3. Jusqu'où on lit l'information ? 
										//								--> tant qu'on ne rencontre pas le enter ('\n')
	
	cout << "Vous habitez au " << adresse << endl;

	// Si on compare des string
	if (nombre == 7)
	{
		cout << "vous avez le même nombre fétiche que moi !" << endl;
	}
	else
		cout << "Bof ! votre nombre n'est pas original !!" << endl;

	if (prenom == "Karine")
	{
		cout << "Vous êtes mon amie !" << endl;
	}
	else
	{
		cout << "Je ne vous connais pas." << endl;
	}

	if (prenom >= "Arthur")
	{
		cout << prenom << " est après Arthur" << endl;
	}
	else
		cout << prenom << " est avant Arthur" << endl;

	if (prenom <= "Zoé")
	{
		cout << prenom << " est avant Zoé" << endl;
	}
	else
		cout << prenom << " est après Zoé" << endl;




	cout << "Veuillez entrer un poème  et appuyez sur # pour finir: " << endl;
	getline(cin, poeme, '#');
	cout << "Votre poème est : " << endl << poeme << endl;








	return 0;
}