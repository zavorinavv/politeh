#include <stdio.h>
#include <math.h>
#include <locale.h>

int lab(float* x, float* y) {
    *x += *y;
    *y = *x - *y;
    *x = *x - *y;
    return 0;
}

int main(void)
{
    float A[100];
    int n;
    printf("введите количество элементов массива N:  ");
    scanf_s("%i", &n);

    int i;
    for (i = 0; i < n; i++) 
    {
        printf("A[%i] : ", i + 1);
        scanf_s("%f", &A[i]);
    }

    for (i = 1; i < n; i++) 
    {
        if (A[i - 1] > A[i]) 
        {
            lab(&A[i - 1], &A[i]);
        }
        else 
            break;
    }
    printf("A: \n");
    for (i = 0; i < n; i++) 
        printf("  %i: %0.2f\n", i + 1, A[i]);

    return 0;
}