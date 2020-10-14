#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Rus");
    float x, y, z, s;
    printf("¬ведите x, y, z:");
    scanf_s("%F", &y);
    scanf_s("%F", &x);
    scanf_s("%F", &z);
    while (x > 0)
    {
        s = log(x) * y * z;
        x--;
        if ((y != 0) || (z != 0))
        {
            printf("рассто€ние между точками = \n %F", s);
        }
        else
        {
            printf("0");
        }
    }
    return 0;

}
