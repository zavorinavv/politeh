#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Rus");
    float a, b, c, p, summa;
    printf("Введите числа a, b и с:");
    scanf_s("%F", &a);
    scanf_s("%F", &b);
    scanf_s("%F", &c);
    summa = a + b;
    p = c * summa * summa;
    if ((c == 0) || (summa == 0))
    {
        printf("Произведение чисел = 0");
    }
    else
    {
        printf("Произведение чисел = %F\n", p);
    }



    return 0;

}
