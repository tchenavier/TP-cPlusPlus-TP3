#include <stdio.h>
#include <ctype.h>
#include <chrono>
#include <stdlib.h>
#include <time.h>
#include <iostream>

/*
#define NB_VAL 300000

int main(int argc, char** argv)
{
    long int tab[NB_VAL];//Remplacer 3000 par 300000
    int chiffre,j, i=0,index=0,n=0,min;
   
    srand(time(NULL));//horloge

    using clock_type = std::chrono::high_resolution_clock;//horloge
    auto start = clock_type::now();//horloge

    for (; i < NB_VAL;i++) {// Remplacer 3000 par 300000
        
        tab[i] = rand() % 300000;
        
    }
    n = i;
    chiffre= i;
        for (i = 0; i < n - 1; i++) {//tris par selection passer au tris rapide (complexiter logaritmique moins d'opération)
            index = i;
            for (j = i + 1; j < n ; j++) { // utilisation de j pour avoir deux avancement
                if (tab[index] > tab[j]) {
                    index = j;
                }
            }
            if (index != i) {
                min = tab[i];
                tab[i] = tab[index];
                tab[index] = min;
            }
        }

        auto last = clock_type::now();//horloge
        auto interval = last - start;//horloge

        std::cout << std::chrono::duration_cast<std::chrono::milliseconds>(interval).count() << "ms" << std::endl; //horloge

       
    return 0;
}
//https://fr.wikipedia.org/wiki/Tri_%C3%A0_bulles
//https://fr.wikipedia.org/wiki/Tri_par_s%C3%A9lection 
*/