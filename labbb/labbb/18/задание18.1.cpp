#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()

{
	setlocale(LC_ALL, "Rus");
    int A[100];
    int B[100];
    int n, i;

    printf("введите количество элементов массива N ");
    scanf_s("%i", &n);

    
    for (i = 0; i < n; ++i)  //ввод элементов
    {
        printf("A[%i] : ", i + 1);
        scanf_s("%i", &A[i]);
    }
    for (i = 0; i < n; ++i) 
    {
        printf("B[%i] : ", i + 1);
        scanf_s("%i", &B[i]);
    }

    for (i = 0; i < n; ++i) 
    {
        A[i] += B[i];
        B[i] = A[i] - B[i];
        A[i] = A[i] - B[i];
    }
    printf("A: \n");
    for (i = 0; i < n; ++i) 
        printf("  %i: %i\n", i + 1, A[i]);

    printf("B: \n");
    for (i = 0; i < n; ++i) 
        printf("  %i: %i\n", i + 1, B[i]);

    return 0;
}
