#include <stdio.h>
#include <math.h>
#include <locale.h>

int Quarter(int x, int y)
{
    
    if (x > 0)
    {
        if (y > 0)
            return 1;
        else
            return 4;
    }
    if (x < 0)
    {
        if (y > 0)
            return 2;
        else
            return 3;
    }
     
}

int main(void)
{
    setlocale(LC_ALL, "Rus");
    int i;
    float x, y;
    for (i = 1; i <= 3; i++)

    {
        printf("введите R1, R2:");
        scanf_s("%f", &x);
        scanf_s("%f", &y);

        printf("%i \n", Quarter(x, y));
    }
    return 0;
}