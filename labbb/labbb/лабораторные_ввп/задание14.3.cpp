#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Rus");
    int N, K, s;
    printf("������� N:");
    scanf_s("%i", &N);
    s = 0;
    K = 0;
    while (s <= N)
    {
        K++;
        s = s + K;

    }
    printf(" ����� = %i \n", s);
    printf("���������� K = %i", K);
    return 0;
}