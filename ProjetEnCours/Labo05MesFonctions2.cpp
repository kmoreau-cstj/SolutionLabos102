#include "Labo05MesFonctions2.h"

int calculerCarre(int entier)
{
    return entier*entier;
}

int calculerCube(int nb)
{
    return nb*nb*nb;
}

double calculerCube(double nb)
{
    return nb*nb*nb;
}

double calculerFactorielle(int valeur)
{
    double factorielle = 1; // 0! = 1

    for (int i = 2; i <= valeur; i++)
    {
        factorielle = factorielle * i;  // 1*2 = 2,  1*2*3 = 6. 6*4=24, 24*5=120, 
    }
    
    return factorielle;
}

int validerNombrePositif(int nb)
{
    // Tant que le nombre n'est pas positif on le redemande
    while (true)
    {

    }

    return 0;
}
