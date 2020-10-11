#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Rus");
    float s, a, b;
    printf("Введите a и b :");
    scanf_s ("%F", &a);
    scanf_s ("%F", &b);
    s = (a + b) / 2;
    printf("Среднее арифметическое = %F\n", s);



    return 0;

}