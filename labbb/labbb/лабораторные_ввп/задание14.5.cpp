#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Rus");
    int A, B, s;
    printf("введите A, B:");
    scanf_s("%i", &A);
    scanf_s("%i", &B);
    while ((A != 0) && (B != 0))
    {
        if (A > B)
            A = A % B;
        else
            B = B % A;
    }
    s = A + B;
    printf("нод = %i \n", s);
 
    return 0;
}