#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Rus");
    int A, B;
    printf("числа A и B:");
    scanf_s("%i", &A);
    scanf_s("%i", &B);
    while (A >= B)
    {
        A = A - B;

    }
    printf("%i", A);
    return 0;
}