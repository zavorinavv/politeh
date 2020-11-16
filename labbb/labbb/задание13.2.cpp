#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Rus");
    int N, i;
    float p;
    printf("количество чисел:");
    scanf_s("%i", &N);
    p = 1;
    for (i = 0; i <= N; i++)

    p = p * (1 + i*0.1);

    printf("произведение = %f \n ", p);
    return 0;
}