#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Rus");
    float a, b, s, p;
    printf("������� a � b:");
    scanf_s ("%F", &a);
    scanf_s ("%F", &b);
    s = a * b;
    p = 2 * (a + b);
    printf("������� = %F\n", s);
    printf("�������� = %F\n", p);




    return 0;

}