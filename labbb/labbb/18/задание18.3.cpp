#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()

{
    setlocale(LC_ALL, "Rus");
    int A[100];
    int n;
    int i;
    int x = 0;
    printf("введите количество элементов массива N: ");
    scanf_s("%i", &n);
 
    for (i = 0; i < n; i++)
    {
        printf("A[%i] : ", i + 1);
        scanf_s("%i", &A[i]);
    }

    for (i = n - 1; i >= 0; i--)
    {
        if (A[i] % 2 != 0) 
        {
            x = A[i];
            break;
        }
    }

    for (; i >= 0; i--) 
    {
        if (A[i] % 2 != 0)
        {
            A[i] += x;
        }
    }

    printf("A: \n");
    for (i = 0; i < n; i++) 
        printf("  %i: %i\n", i + 1, A[i]);

    return 0;
}