#include <stdio.h>
#include <math.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Rus");
    int A;
    printf("������� �����:", &A);
    scanf_s("%d", &A);

    if ((A>9)&(A<100))
    {
        if (A % 2 == 0)
        {
            printf("����� ���������� ������");
        }
        else
        {
            printf("����� ���������� ��������");
        }

    }
    else if ((A > 99) & (A < 1000))
    {
        if (A % 2 == 0)
        {
            printf("����� ����������� ������");
        }
        else
        {
            printf("����� ����������� ��������");
        }
    }
    else 
    {
        if (A % 2 == 0)
        {
            printf("����� ����������� ������");
        }
        else
        {
            printf("����� ����������� ��������");
        }
    }
    return 0;
}