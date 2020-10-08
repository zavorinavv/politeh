#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Rus");
    float  a, b, p, s, r, k;
    printf("¬ведите a и b:");
    scanf_s("%F", &a);
    a = abs(a);
    scanf_s ("%F", &b);
    b = abs(b);
    k = a / b;
    s = a + b ;
    r = a - b;
    p = a * b;


        printf("= %F\n", p);
        printf("= %F\n", r);
        printf("= %F\n", s);
        printf("= %F\n", k);

	return 0;
}