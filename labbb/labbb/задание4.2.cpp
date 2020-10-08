#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Rus");
    float l, d, pi;
    printf("¬ведите d:");
    scanf_s ("%F", &d);
    pi = 3.14;
    l = d * pi;
    printf(" ƒлина окружности  = %F\n", l);




    return 0;

}