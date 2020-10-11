#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Rus");
    float x1, y1, x2, y2, p;
    printf("¬ведите x1, y1, x2, y2:");
    scanf_s("%F", &x1);
    scanf_s("%F", &y1);
    scanf_s("%F", &x2);
    scanf_s("%F", &y2);

    p =((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
    printf("рассто€ние между точками = \n %F", p);
    return 0;

}
