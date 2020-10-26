#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Rus");
    float  a, b, p, s, r, k;
   
    printf("Введите a и b:");
    scanf_s("%F", &a);
    scanf_s("%F", &b);
    a = abs(a);
    b = abs(b);
    k = a / b;
    s = a + b;
    r = a - b;
    p = a * b;

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