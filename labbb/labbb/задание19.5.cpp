#include <stdio.h>
#include <math.h>
#include <locale.h>


int main()
{
    setlocale(LC_ALL, "Rus");
    int A[100];
    int n;
    int j;
    int i;
    printf("введите количество элементов массива n: ");
    scanf_s("%i", &n);

    for (i = 0; i < n; ++i)
    {
        printf("a[%i] : ", i + 1);
        scanf_s("%i", &A[i]);
    }

    for (i = n - 1; i >= 0; i--)
    {
        if (A[i] > 0)
        {
            n++;
            for (j = n - 1; j > i; j--)
                A[j] = A[j - 1];
            A[i] = 0;
        }
    }

    for (i = 0; i < n; i++)
        printf("  %i: %i\n", i + 1, A[i]);

    return 0;
}

