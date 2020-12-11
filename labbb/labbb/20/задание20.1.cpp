#include <stdio.h>
#include <math.h>
#include <locale.h>


int main()
{
    setlocale(LC_ALL, "Rus");
    int A[100], B[100], C[100];
    int n;
    int k = 0;
    int i;
    printf("введите количество элементов массива n:  ");
    scanf_s("%i", &n);

    
    for (i = 0; i < n; i++) 
    {
        printf("A[%i] : ", i + 1);
        scanf_s("%i", &A[i]);
    }

    
    B[k] = 1;
    C[k] = A[k];

    for (i = 1; i < n; ++i) 
    {
        if (A[i - 1] == A[i]) 
            B[k]++;
        else 
        {
            k++;
            B[k] = 1;
            C[k] = A[i];
        }
    }

    for (i = 0; i <= k; i++)
    {
     printf("  %i:%i\n", i + 1, B[i]);
     printf(" %i:%i\n", i + 1, C[i]);
    }
       

    return 0;
}