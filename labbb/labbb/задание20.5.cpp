#include <stdio.h>
#include <math.h>
#include <locale.h>


int main()
{
    setlocale(LC_ALL, "Rus");
    float A[10][2];
    int n;

    printf("N: ");
    scanf_s("%i", &n);

    int i;
    for (i = 0; i < n; ++i) 
    {
        printf("A[%i]:\n", i + 1);
        printf("  x : ");
        scanf_s("%f", &A[i][0]);
        printf("  y : ");
        scanf_s("%f", &A[i][1]);
    }

    int p1, p2, p3, j, k;
    float p, max = 0;

    for (i = 0; i < n; i++)
        for (j = i + 1; j < n; j++)
            for (k = j + 1; k < n; k++) 
            {
                p = 0; 
                p += sqrt(pow(A[i][0] - A[j][0], 2) + pow(A[i][1] - A[j][1], 2)); 
                p += sqrt(pow(A[i][0] - A[k][0], 2) + pow(A[i][1] - A[k][1], 2)); 
                p += sqrt(pow(A[j][0] - A[k][0], 2) + pow(A[j][1] - A[k][1], 2));
                if (p > max) 
                {
                    p1 = i;
                    p2 = j;
                    p3 = k;
                    max = p;
                }
            }


    printf("P: %f\n", max);
    printf("\n");
    printf("A %i :\n x: %0.2f\n y: %0.2f\n", p1 + 1, A[p1][0], A[p1][1]);
    printf("A %i :\n x: %0.2f\n y: %0.2f\n", p2 + 1, A[p2][0], A[p2][1]);
    printf("A %i :\n x: %0.2f\n y: %0.2f\n", p3 + 1, A[p3][0], A[p3][1]);
    return 0;
}