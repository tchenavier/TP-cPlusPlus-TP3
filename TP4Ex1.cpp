#include <stdio.h>
#include <ctype.h>

int main(int argc, char** argv)
{
    int tab[41];
    int modifier[41];
    int chiffre,j, i=0,index=0,n=0,min;
   
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
    for (i = 0; i < n - 1; i++) {//tris par selection
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

        i = 0;//reinitialisation de i
        for (; i < chiffre; i++) {//affichage
            printf("%d, ", tab[i]);
        }
    }

    return 0;
}
//https://fr.wikipedia.org/wiki/Tri_%C3%A0_bulles
//https://fr.wikipedia.org/wiki/Tri_par_s%C3%A9lection 