#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Rus");
    int A, p, K;
    printf("������� p:");
    scanf_s("%i", &p);
    A = 1000;
    K = 0;
    while (A <= 1100)
    {
        A = A + (A * p)/100;
        K++;

    }
    
    printf("���������� ������� K = %i \n", K);
    printf("�������� ������ ������ = %i", A);
    return 0;
}