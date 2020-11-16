#include <stdio.h>
#include <math.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Rus");
    int A;
    printf("Введите число:", &A);
    scanf_s("%d", &A);

    if (A > 0)
    {
        if (A % 2 == 0)
        {
            printf("число положительное четное");
        }
        else 
        {
            printf("число положительное нечетное");
        }

    }
    else if (A < 0)
    {
        if (A % 2 == 0)
        {
            printf("число отрицательное четное");
        }
        else
        {
            printf("число отрицательное нечетное");
        }
    }
    else
    {
        printf("нулевое число");
    }
    return 0;
}