#include "Labo07Fonctions.h"
#include <iostream>
#include <ctime>
using namespace std;

int genererAlea(int min, int max)
{
    // srand(time(NULL));   JAMAIS mettre srand dans une fonction qui calcule un nombre alea
    return rand()% (max - min + 1) + min;
}
