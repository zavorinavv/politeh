#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Rus");
    float  a, b, p, s, r, k;
    printf("Введите:");
    scanf_s ("%F", &a);
    scanf_s ("%F", &b);
    k = (a * a) / (b * b);
    s = a * a + b * b;
    r = a * a - b * b;
    p = a * a * b * b;

    if ((a == 0) && (b == 0))
    {
        printf("Произведение чисел = 0");
    }
    else
    {
        printf("= %F\n", p);
    }
    if ((a == 0) && (b == 0))
    {
        printf("Произведение чисел = 0");
    }
    else
    {
        printf("= %F\n", r);
    }
    if ((a == 0) && (b == 0))
    {
        printf("Произведение чисел = 0");
    }
    else
    {
        printf("= %F\n", s);
    }
    if ((a == 0) && (b == 0))
    {
        printf("Произведение чисел = 0");
    }
    else
    {
        printf("= %F\n", k);
    }



    return 0;

}