#include <stdio.h>
#include <math.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "Rus");
	int k, n, z;
	printf("¬ведите целое число k, лежащее в диапазоне 1 - 365:", &k);
	scanf_s("%d", &k);
	printf("¬ведите целое число n, лежащее в диапазоне 1Ц7:", &n);
	scanf_s("%d", &n);
	z = ((k + n - 2) % 7) + 1;
	printf("номер дн€ недели \n %d ", z);
	return 0;
}