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
    for (i = 0; i < n; i++) //ввод точек
    {
        printf("A[%i]:\n", i + 1);
        printf("  x : ");
        scanf_s("%f", &A[i][0]);
        printf("  y : ");
        scanf_s("%f", &A[i][1]);
    }

    int max = 0;
    float r, max1=0;
    for (i = 0; i < n; i++) 
    {
        if (A[i][0] < 0 && A[i][1]>0)
        {
            r = sqrt(pow(A[i][0], 2) + pow(A[i][1], 2));//функция pow возводит в степень
            if (r > max1 || i == 0) 
            {
                max1 = r;
                max = i;
            }
        }
    }

    printf("A  %i :\n x: %f\n y: %f\n", max + 1, A[max][0], A[max][1]);
    return 0;
}