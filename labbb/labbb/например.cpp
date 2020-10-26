
#include <stdio.h>
#include <math.h>
int main()
{
	float a;
	printf("a - ");
	scanf_s("%f", &a);
	a = abs(a);
	printf("%f", a);
	return 0; 
}