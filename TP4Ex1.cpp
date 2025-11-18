#include <stdio.h>
#include <ctype.h>

int main(int argc, char** argv)
{

    long int tab[3000];//Remplacer 3000 par 300000
    int chiffre,j, i=0,index=0,n=0,min;
   
    //printf("salut");
    for (; i < 3000;i++) {// Remplacer 3000 par 300000
        scanf_s("%d", &chiffre);
        tab[i] = chiffre;
        if (chiffre == -1)
        {
            break;
        }
    }
    n = i;
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
        }
        for (i = 0; i < chiffre;i++) {//affichage
                printf("%ld \n",tab[i]);
        }    

    return 0;
}
//https://fr.wikipedia.org/wiki/Tri_%C3%A0_bulles
//https://fr.wikipedia.org/wiki/Tri_par_s%C3%A9lection 