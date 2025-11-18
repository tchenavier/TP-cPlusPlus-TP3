#include <stdio.h>
#include <ctype.h>

int main(int argc, char** argv)
{
    int tab[41];
    int chiffre,j, i=0,index=0,n=0,min;
   
    //printf("salut");
    for (; i < 40;i++) {
        scanf_s("%d", &chiffre);
        tab[i] = chiffre;
        if (chiffre == -1)
        {
            break;
        }
    }

    n = i;

    chiffre= n;
    for (int e = 0; e < 4; e++) {
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
        }
    }
        for (i = 0; i < chiffre;i++) {//affichage

            if (i != 0 && i != chiffre && i != chiffre-1)
            {
                printf("%d, ",tab[i]);
            }
            else if (i == 0)
            {
                printf("%d, ", tab[i]);            
            }
            else
            {
                printf("%d", tab[i]);
            }
        }    

    return 0;
}
//https://fr.wikipedia.org/wiki/Tri_%C3%A0_bulles
//https://fr.wikipedia.org/wiki/Tri_par_s%C3%A9lection 