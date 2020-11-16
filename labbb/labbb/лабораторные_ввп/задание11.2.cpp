#include <stdio.h>
#include <math.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "Rus");
	int A, B, C;
	printf("¬ведите A и B и C:", &A, &B, &C);
	scanf_s("%i", &A);
	scanf_s("%i", &B);
    scanf_s("%i", &C);
    if ((A >= B) & (A >= C)) //1
    {
        if (B >= C) 
        {
            printf("%i \n", A + B);
        }
        else printf("%i \n", A + C);
    }
    else if ((B >= A) & (B >= C)) //2
    {
        if (A >= C)
        {
            printf("%i \n", A + B);
        }
        else printf("%i \n", B + C);
    }

    else  //3
     
        if (A >= B)
        {
            printf("%i \n", A + C);
        }
        else printf("%i \n", B + C);
    
	return 0;
}