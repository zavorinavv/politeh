#include <stdio.h>
#include <math.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Rus");
    int X, Y;
    printf("������� ����������:", &X, &Y);
    scanf_s("%i", &X);
    scanf_s("%i", &Y);

    if ((X > 0) & (Y > 0))
    {
        printf("1 ��������");
    }
    else if ((X < 0) & (Y > 0))
    {
        printf("2 ��������");
    }
    else if ((X < 0) & (Y < 0))
    {
        printf("3 ��������");
    }
    else
    {
        printf("4 ��������");
    }
    return 0;
}