#include <stdio.h>
#include <math.h>
#include <locale.h>


int main()
{
    setlocale(LC_ALL, "Rus");
    int A[100], B[100];
    int n, l;
    printf("N: ");
    scanf_s("%i", &n);
    printf("L: ");
    scanf_s("%i", &l);

    int i;
    for (i = 0; i < n; i++)
    {
        printf("A[%i] : ", i + 1);
        scanf_s("%i", &A[i]);
    }

    int j = -1, x = 1, i3, y = n;

    for (i = 1; i < n; i++) 
    {
        if (A[i - 1] != A[i])
        {
            if (x > l) 
            {
                B[++j] = 0;
                y -= x - 1;
            }
            else 
            {
                for (i3 = 0; i3 < x; ++i3) 
                    B[++j] = A[i - 1];
            }             x = 0;
        }         
        ++x;
    }      
    if (x > l) 
    {
        B[++j] = 0;
        y -= x - 1;
    }
    else
    {
        for (i3 = 0; i3 < x; ++i3) 
            B[++j] = A[i - 1];
    }

    for (i = 0; i < y; i++)
        A[i] = B[i];

    printf("\n");
    for (i = 0; i < y; i++)
        printf("A[%i] : %i\n", i + 1, A[i]);

    return 0;
}