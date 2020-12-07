#include <stdio.h>
#include <math.h>
#include <locale.h>


int main()
{
    setlocale(LC_ALL, "Rus");
    int A[100];
    int n;
    int i;
    int min = 0, max = 0;
    printf("введите количество элементов массива n: ");
    scanf_s("%i", &n);


    for (i = 0; i < n; i++)
    {
        printf("A[%i] : ", i + 1);
        scanf_s("%i", &A[i]);
    }


    for (i = 0; i < n; i++)
    {
        if (A[min] > A[i])
        {
            min = i;
        }
        if (A[max] < A[i])
        {
            max = i;
        }
    }
    if (max > min)
        max++;

    n++;
    for (i = n - 1; i >= min; i--)
        A[i] = A[i - 1];
    A[min] = 0;

    n++;
    for (i = n - 1; i > max + 1; i--)
        A[i] = A[i - 1];
    A[max + 1] = 0;

    for (i = 0; i < n; i++)
        printf("  %i: %i\n", i + 1, A[i]);

    return 0;
}

