#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()

{
    setlocale(LC_ALL, "Rus");
    float A[10], B[10];
    int n;
    int k;
    int i;
    printf("N: ");
    scanf_s("%i", &n);

    
    for (k = 0; k < n; k++) 
    {
        printf("A[%i] : ", k + 1);
        scanf_s("%f", &A[k]);
    }

    
    for (k = 0; k < n; k++) 
    {
        B[k] = 0; 
        for (i = k; i < n; i++)
        {
            B[k] += A[i];
        }
        B[k] /= (n - k);
    }

    printf("B: \n");
    for (k = 0; k < n; k++) 
        printf("  %i: %0.2f\n", k + 1, B[k]);

    return 0;
}