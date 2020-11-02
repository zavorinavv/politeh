#include <stdio.h>
#include <math.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Rus");
    int A, B, C;
    printf("¬ведите A и B и C:", &A, &B, &C);
    scanf_s("%i", &A);
    scanf_s("%i", &B);
    scanf_s("%i", &C);
    if (abs(A - C) > abs(A - B))
    {
        printf("B = %i \n", abs(A - B));
    }
    else
    {
        printf("C = %i \n", abs(A - C));
    }
    return 0;
}