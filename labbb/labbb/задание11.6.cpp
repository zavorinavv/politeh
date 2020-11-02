#include <stdio.h>
#include <math.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Rus");
    int A;
    printf("Введите число:", &A);
    scanf_s("%d", &A);

    if ((A>9)&(A<100))
    {
        if (A % 2 == 0)
        {
            printf("число двузначное четное");
        }
        else
        {
            printf("число двузначное нечетное");
        }

    }
    else if ((A > 99) & (A < 1000))
    {
        if (A % 2 == 0)
        {
            printf("число трехзначное четное");
        }
        else
        {
            printf("число трехзначное нечетное");
        }
    }
    else 
    {
        if (A % 2 == 0)
        {
            printf("число однозначное четное");
        }
        else
        {
            printf("число однозначное нечетное");
        }
    }
    return 0;
}