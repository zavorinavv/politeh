#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Rus");
    float a, b, c, p, summa;
    printf("������� ����� a, b � �:");
    scanf_s("%F", &a);
    scanf_s("%F", &b);
    scanf_s("%F", &c);
    summa = a + b;
    p = c * summa * summa;
    if ((c == 0) || (summa == 0))
    {
        printf("������������ ����� = 0");
    }
    else
    {
        printf("������������ ����� = %F\n", p);
    }



    return 0;

}
