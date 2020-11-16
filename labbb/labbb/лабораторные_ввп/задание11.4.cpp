#include <stdio.h>
#include <math.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Rus");
    int X, Y;
    printf("Введите координаты:", &X, &Y);
    scanf_s("%i", &X);
    scanf_s("%i", &Y);

    if ((X > 0) & (Y > 0))
    {
        printf("1 четверть");
    }
    else if ((X < 0) & (Y > 0))
    {
        printf("2 четверть");
    }
    else if ((X < 0) & (Y < 0))
    {
        printf("3 четверть");
    }
    else
    {
        printf("4 четверть");
    }
    return 0;
}