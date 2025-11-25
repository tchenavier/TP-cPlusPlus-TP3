#include <stdio.h>
#include <ctype.h>

int valeurAbsolue(int valeur)
{
    if (valeur < 0)
    {
        valeur = -1 * (valeur);
    }
    else
    {

    }
    return valeur;
}//pour l'exercise 1 on na besoin que de sa


int main(int argc, char** argv)
{
    int val;

    scanf_s("%d", &val);
    val = valeurAbsolue(val);

    printf("%d",val);

    return 0;
}