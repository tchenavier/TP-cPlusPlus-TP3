#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char** argv)
{
    char cara[1001];
    char str[1001];
    int l, i = 0, d = 0,e=0;

    fgets(str, 1000, stdin);
    l = strlen(str);

    for (i = 0; i <= l; i++)
    {
        /*d = str[i] - 65;
        if (0 <= d && d < 25)
        {
            cara[e] = str[i];
            e++;
        }
        d = str[i] - 97;
        if (0 <= d && d < 25)
        {   
            cara[e] = str[i];
            e++; 
        }
        if (str[i] == '!' || str[i] == '?' || str[i] == '.' || str[i] == '"' || str[i] == '*')
        {
            cara[e] = str[i];
            e++;
        }
        if (str[i] == 0)
        {
            cara[e] = str[i];
            e++;
        }*/
        if (str[i] != 32)
        {
            cara[e] = str[i];
            e++;
        }
    }
    printf("%s",cara);

    return 0;
}