#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()

{
    setlocale(LC_ALL, "Rus");
    int A[100];
    int n;
    int i;
    int min = 0;
    int max = 0;
    printf("N: ");
    scanf_s("%i", &n);

    for (i = 0; i < n; i++) 
    {
        printf("A[%i] : ", i + 1);
        scanf_s("%i", &A[i]);
    }

    for (i = n - 1; i >= 0; i--) 
    {
        if (A[i] > A[max])
            max = i;
        if (A[i] < A[min])
            min = i;
    }

    if (max < min)
    {
        max += min;
        min = max - min;
        max = max - min;
    }

    for (i = min + 1; i < min + (max - min); i++) 
        A[i] = 0;

    printf("A: \n");
    for (i = 0; i < n; i++) 
        printf("  %i: %i\n", i + 1, A[i]);

    return 0;
}