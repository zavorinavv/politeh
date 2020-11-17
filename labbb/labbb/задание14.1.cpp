#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Rus");
    int j, i, A, B;
    printf("числа A и B:");
    scanf_s("%i", &A);
    scanf_s("%i", &B);
    for (i = A; i <= B; i++)
    {
        for (j = 1; j <= i; j++)
            printf(" %i\n", i);

    }
    return 0;
}