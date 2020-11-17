#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Rus");
    int N, i, p;
    printf("число:");
    scanf_s("%i", &N);
    p = 0;
    for (i = 1; i <= N; i++)

        p = p + 2 * i - 1;

    printf("квадрат целого числа = %i \n ", p);
    return 0;
}