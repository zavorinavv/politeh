#include <stdio.h>
#include <math.h>
#include <locale.h>


int main()
{
    setlocale(LC_ALL, "Rus");
    int A[10];
    int n;
    int i;
    int b, j, k, x;
    printf("введите количество элементов массива n: ");
    scanf_s("%i", &n);


    for (i = 0; i < n; i++)
    {
        printf("A[%i] : ", i + 1);
        scanf_s("%i", &A[i]);
    }


    for (i = 0; i < n; i++)
    {
        x = 0;
        for (j = 0; j < n; j++)
            if (A[i] == A[j])
                x++; //считает количество одинаковых элементов

        if (x == 2)
        {
            k = i - 1;
            b = A[i];
            for (j = i; j < n; j++)
                if (A[j] != b)
                {
                    k++;
                    A[k] = A[j];
                }
            n = k + 1;
            i--;
        }
    }

    printf("A - %i\n", n);
    for (i = 0; i < n; i++)
        printf("  %i: %i\n", i + 1, A[i]);

    return 0;
}
