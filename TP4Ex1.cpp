#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char** argv)
{
    int tab[41] = { 0 };
    char modifier[41];
    int chiffre = 0, i=0,y=0,n=0, min;
   
    do {
        scanf_s("%i", &chiffre);
        tab[i] = chiffre;
        i++;
    } while (i<=41 && tab[i]!=-1);

    i = 0;
    while (tab[i]!=-1)
    {
        n++;
    }
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (tab[j] > tab[j + 1]) {
                // Échange des valeurs
                int temp = tab[j];
                tab[j] = tab[j + 1];
                tab[j + 1] = temp;
            }
        }
    }



    return 0;
}
//https://fr.wikipedia.org/wiki/Tri_%C3%A0_bulles
//https://fr.wikipedia.org/wiki/Tri_par_s%C3%A9lection 