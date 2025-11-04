#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char** argv)
{
    char str[1001];
    int l, i = 0, d = 0;

    fgets(str, 1000, stdin);
    l = strlen(str);

    for (i = 0; i < l; i++)
    {
        d = str[i] - 65;
        if (0 <= d && d < 25)
        {
            str[i] = d + 97;
        }
    }
    printf("%s",str);
}