#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Rus");
    float l, d, pi;
    printf("������� d:");
    scanf_s ("%F", &d);
    pi = 3.14;
    l = d * pi;
    printf(" ����� ����������  = %F\n", l);




    return 0;

}