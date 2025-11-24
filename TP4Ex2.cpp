#include <stdio.h>
#include <ctype.h>
#include <chrono>
#include <stdlib.h>
#include <time.h>
#include <iostream>

#define NB_VAL 300000

void echanger(int *tableau, int i1, int i2)
{
    int tmp = tableau[i1]; //sauvegarde i1 tmp est une variable temporaire
    tableau[i1] = tableau[i2]; // Ecrase i1 par i2
    tableau[i2] = tmp; // Ecase i2 par i1 sauvegarder dans tmp
}

int partition(int* tableau, int deb, int fin)
{
    int compt = deb;
    int pivot = tableau[deb];
    int i;

    for (i = deb + 1; i <= fin; i++)
    {
        if (tableau[i] < pivot)
        {
            compt++;
            echanger(tableau, compt, i);
        }
    }
    echanger(tableau, compt, deb);
    return(compt);
}

void tri_rapide_bis(int * tableau, int debut, int fin)
{
    if (debut < fin)
    {
        int pivot = partition(tableau, debut, fin);
        tri_rapide_bis(tableau, debut, pivot - 1);// tri la partie plus petite
        tri_rapide_bis(tableau, pivot + 1, fin);// tris la partie plus grande
    }
}

void tri_rapide(int *tableau, int longueur)
{
    tri_rapide_bis(tableau, 0, longueur - 1);
}

int main(int argc, char** argv)
{
    int * tab = new int[NB_VAL];//Remplacer 3000 par 300000
    int chiffre, j, i = 0, index = 0, n = 0, min;

    srand(time(NULL));//horloge

    using clock_type = std::chrono::high_resolution_clock;//horloge
    auto start = clock_type::now();//horloge

    for (; i < NB_VAL; i++) {// Remplacer 3000 par 300000

        tab[i] = rand() % 300000;

    }
    n = i;
    chiffre = i;

    tri_rapide(tab, i);

    auto last = clock_type::now();//horloge
    auto interval = last - start;//horloge

    std::cout << std::chrono::duration_cast<std::chrono::milliseconds>(interval).count() << "ms" << std::endl; //horloge

    /*for (i = 0; i < chiffre; i++) {//affichage
             printf("%ld \n",tab[i]);
    }*/
    return 0;
}