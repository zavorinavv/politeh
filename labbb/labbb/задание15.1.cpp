#include <stdio.h>
#include <math.h>
#include <locale.h>

void lab15(float A, float *B)
{
    *B = A * A * A;
}
int main(void)
{
    setlocale(LC_ALL, "Rus");
    int i;
    float A, B;
    for (i = 1; i <= 5; i++)
    {
        printf("введите A:");
        scanf_s("%f", &A);
        lab15(A, &B);
        printf("%0.2f \n", B);
    }
    
    return 0;
}