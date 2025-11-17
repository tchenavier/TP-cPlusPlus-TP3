#include <stdio.h>
#include <string.h>

/*int main(int argc, char** argv)
{
    char str[1001];
    char lettre = 'a';
    int i = 0;
    int l;
    int n;

    fgets(str, 1000, stdin);
    l = strlen(str);
    n = l;
    n = n - 1;
    do
    {
        scanf_s("%c", &lettre);

    } while (lettre == ' '|| lettre == '<' || lettre == '>');
    
    while (str[n] != '\0'){
        i++;
        n--;
        if(n<0)
        {
            break;
        }
        else
        {
            if (str[n] != lettre)
            {
                //cette ligne ne ser a rien, hormie écrire sa
            }
            else
            {
                break;
            }
        }
    } 

    if (i != l || i< l)
    {
        printf("Le caractere %c se trouve a la position %d a partir de la droite", lettre, i);
    }
    else if (i == l)
    {
        printf("Le caractere %c n'a pas ete trouve dans la chaine", lettre);
    }
    return 0;
}*/