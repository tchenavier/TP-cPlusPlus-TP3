#include <stdio.h>
#include <ctype.h>
#include <cmath>

int xPuissY(int x, int y)
{
    int result = 0;
    result = pow(x, y);

    return result;
}//pour l'exercise 1 on na besoin que de sa

int divise(int Un, int Deux)
{
    int resulta;

    if (Deux == 0)
    {
        return -1;
    }
    else
    {
        resulta = Un / Deux;
        return resulta;
    }
}//pour l'exercise 10 on na besoin que de sa

int main(int argc, char** argv)
{
    int val;
    int val2;
    int retour;

    scanf_s("%d", &val);
    scanf_s("%d", &val2);

    //val = xPuissY(val,val2);
    retour = divise(val, val2);

    printf("%d",val);

    return 0;
}