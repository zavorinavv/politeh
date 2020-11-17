#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Rus");
    int A, B, C, k, N;
    printf("введите N:");
    scanf_s("%i", &N);
    A = 1;
    B = 1;
    k = 2;
    while (N > B)
    {
        C = B;
        B = A + B;
        A = C;
        k++;
    }

    printf("порядковый номер числа Фибоначчи N = %i \n", k);

    return 0;
}