#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char** argv)
{
    int cara[27] = {0};
    char str[1001];
    int l, i = 0, d = 0;

    fgets(str, 1000, stdin);
    l = strlen(str);

    for (i = 0; i < l; i++)
    {
        d = str[i] - 65;
        if (d<=0 && d<25)
        {
            cara[d]++;
        }
        d = str[i] - 97;
        if (d <= 0 && d < 25)
        {
            cara[d]++;
        }
        if (str[i] == ' ')
        {
            cara[26]++;
        }
    }
    for (i = 0; i <= 25; i++)
    {
        d = i + 65;
        printf("%c : ", d);
        printf("%d\n", cara[i]);
    }
    return 0;
}