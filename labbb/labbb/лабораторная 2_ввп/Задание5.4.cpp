#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Rus");
    float x1, x2, y1, y2, p, s;
    printf("Введите x1, x2, y1, y2:");
    scanf_s("%F", &x1);
    scanf_s("%F", &x2);
    scanf_s("%F", &y1);
    scanf_s("%F", &y2);
    p = 2 * (abs(x1 - x2) + abs(y1 - y2));
    s = abs(x1 - x2) * abs(y1 - y2);
    printf("периметр прямоугольника = \n %F", p);
    printf("площадь прямоугольника = \n %F", s);
    return 0;

}