#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Rus");
    float a, b, c, AC, BC, s;
    printf("¬ведите a, b, c:");
    scanf_s("%F", &a);
    scanf_s("%F", &b);
    scanf_s("%F", &c);
    AC = abs(a - c);
    BC = abs(b - c);
    s = AC + BC;
    printf("AC = \n %F", AC);
    printf("BC = \n %F", BC);
    printf("сумма отрезков = \n %F",s);
    return 0;

}
