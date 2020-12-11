#include <stdio.h>
#include <math.h>
#include <locale.h>


int main()
{
    setlocale(LC_ALL, "Rus");
    int A[100], B[100];
    int n, k;
    int i, y = 1, j = 1, b, i1 = -1;
    printf("N: ");
    scanf_s("%i", &n);
    printf("K: ");
    scanf_s("%i", &k);

    
    for (i = 0; i < n; i++) 
    {
        printf("A[%i] : ", i + 1);
        scanf_s("%i", &A[i]);
    }

    int  x = k;

    for (i = 1; i < n; i++) 
    {
        if (A[i - 1] != A[i])
        {
            y++;
            if (y == k) j = i;
            b = i;
        }
        if (y == k) 
            x++;
    }

 
    for (i = 0; i < j; i++) 
        B[++i1] = A[i];

    for (i = b; i < n; i++) 
        B[++i1] = A[i];

    for (i = j + x; i < b; i++) 
        B[++i1] = A[i];

    for (i = j; i < x + j; i++) 
        B[++i1] = A[i];

    for (i = 0; i < n; i++)
        A[i] = B[i];

    printf("\n");
    for (i = 0; i < n; i++)
        printf("A  [%i] : %i\n", i + 1, A[i]);

    return 0;
}