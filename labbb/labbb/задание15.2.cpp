#include <stdio.h>
#include <math.h>
#include <locale.h>

int Sign(float X)
{
    if (X < 0)
    {
        return -1;
    }

    else if (X = 0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

int main(void)
{
    setlocale(LC_ALL, "Rus");
    int i;
    float A, B, s;
    
        printf("введите A, B:");
        scanf_s("%f", &A);
        scanf_s("%f", &B);
        s = Sign(A) + Sign(B);
        printf("%0.2f \n", s);
    

    return 0;
}