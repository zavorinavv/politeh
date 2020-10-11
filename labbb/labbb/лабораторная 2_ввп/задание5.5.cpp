#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Rus");
    float x1, x2, y1, y2, x3, y3, s, a, b, c, p;
    printf("¬ведите x1, x2, x3, y1, y2, y3:");
    scanf_s("%F", &x1);
    scanf_s("%F", &x2);
    scanf_s("%F", &y1);
    scanf_s("%F", &y2);
    scanf_s("%F", &x3);
    scanf_s("%F", &y3);
    a = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
    b = sqrt((x2 - x3) * (x2 - x3) + (y2 - y3) * (y2 - y3));
    c = sqrt((x3 - x1) * (x3 - x1) + (y3 - y1) * (y3 - y1));
    p = (a + b + c) / 2;
    s = sqrt(p * (p - a) * (p - b) * (p - c));
    printf("площадь треугольника = \n %F", s);
    printf("периметр пр€моугольника = \n %F", a + b + c);
    return 0;

}