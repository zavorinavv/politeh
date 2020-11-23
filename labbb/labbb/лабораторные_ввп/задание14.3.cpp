#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Rus");
    int N, K, s;
    printf("введите N:");
    scanf_s("%i", &N);
    s = 0;
    K = 0;
    while (s <= N)
    {
        K++;
        s = s + K;

    }
    printf(" сумма = %i \n", s);
    printf("наименьшее K = %i", K);
    return 0;
}