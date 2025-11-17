#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char** argv)
{
    int tab[41];
    int modifier[41];
    int chiffre, i=0,index=0,n=0,min;
   
    //printf("salut");
    for (; i < 40;i++) {
        scanf_s("%i", &chiffre);
        tab[i] = chiffre;
        if (chiffre == -1)
        {
            break;
        }
    }

    n = i - 1;

    chiffre= n;
    for (int i = 0; i < n - 1; i++) {//tris par selection
        index = i;
        for (int j = 0; j < n - i - 1; j++) { // utilisation de j pour avoir deux avancement
            if (tab[index] > tab[j]) {
                index = j;
            }
        }
        if (index != i) {
            min = tab[i];
            tab[i] = tab[index];
            tab[index] = min;
        }
        i = 0;
        for (; i < chiffre; i++) {
            printf("%d", tab[i]);
        }
    }

    return 0;
}
//https://fr.wikipedia.org/wiki/Tri_%C3%A0_bulles
//https://fr.wikipedia.org/wiki/Tri_par_s%C3%A9lection 