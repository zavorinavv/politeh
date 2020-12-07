#include <stdio.h>
#include <math.h>
#include <locale.h>


int main()
{
    setlocale(LC_ALL, "Rus");
    int A[100];
    int n;
    int i;
    int k = 0;
    printf("введите количество элементов массива n: ");
    scanf_s("%i", &n);

    for (i = 0; i < n; i++)
    {
        printf("A[%i] : ", i + 1);
        scanf_s("%i", &A[i]);
    }


    for (i = 1; i < n; i++)
    {
        if (A[k] != A[i])
        {
            k++;
            A[k] = A[i];
        }
    }

    k++;

    printf("новый массив:\n");
    for (i = 0; i < k; i++)
        printf("  A[%i]: %i\n", i + 1, A[i]);

    return 0;
}
