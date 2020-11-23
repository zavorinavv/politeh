#include <stdio.h>
#include <math.h>
#include <locale.h>

double RingS(double R1, double R2)
{
    double S1, S2, pi = 3.14;
    return pi * (R1 * R1 - R2 * R2);
}

int main(void)
{
    setlocale(LC_ALL, "Rus");
    int i;
    double R1, R2;
    for (i = 1; i <= 3; i++)
    {
        printf("введите R1, R2:");
        scanf_s("%lf", &R1);
        scanf_s("%lf", &R2);

      
        printf("%f \n", RingS(R1, R2));
    }
    return 0;
}