#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Rus");
    float s, a, b;
    printf("������� a � b :");
    scanf_s ("%F", &a);
    scanf_s ("%F", &b);
    s = (a + b) / 2;
    printf("������� �������������� = %F\n", s);



    return 0;

}