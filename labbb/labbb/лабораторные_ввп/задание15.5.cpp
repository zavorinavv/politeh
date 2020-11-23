#include <stdio.h>
#include <math.h>
#include <locale.h>

float Fact2(int N)
{
    int v = 1;
    for (; N > 1; N -= 2)
        v = v * N;
    return v;
}

int main(void)
{
    setlocale(LC_ALL, "Rus");
    int i, N;
    
    for (i = 1; i <= 5; i++)

    {
        printf("введите N:");
        scanf_s("%i", &N);
        

        printf("%f\n", Fact2(N));
    }
    return 0;
}