#include <stdio.h>
#include <math.h>
#include <locale.h>
int main()

{
	setlocale(LC_ALL, "Rus");
	int A, x, y, z;
	printf("¬ведите A:", &A);
	scanf_s("%i", &A);
	A = abs(A);
	x = A % 10;
	y = A / 10 % 10;
	z = A / 100;
	if (((x<y)&(y<z))||((x>y)&(y>z)))
	{
		printf("истина");
	}
	else
	{
		printf("ложь");
	}
	return 0;
}