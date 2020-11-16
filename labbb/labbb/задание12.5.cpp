#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Rus");
	int d;
	printf("");
	scanf_s("%d", &d);
	printf("год ");
	switch (d % 10)
	{
	case 0:
		if (d % 12 == 6 || d % 12 == 7 || d % 12 == 8)
			printf("белого ");
		else
			printf("белой ");
		break;
	case 1:
		if (d % 12 == 6 || d % 12 == 7 || d % 12 == 8)
			printf("белого ");
		else
			printf("белой ");
		break;
	case 2:
		if (d % 12 == 6 || d % 12 == 7 || d % 12 == 8)
			printf("черного ");
		else
			printf("черной ");
		break;
	case 3:
		if (d % 12 == 6 || d % 12 == 7 || d % 12 == 8)
			printf("черного ");
		else
			printf("черной ");
		break;
	case 4:
		if (d % 12 == 6 || d % 12 == 7 || d % 12 == 8)
			printf("зеленого ");
		else
			printf("зеленой ");
		break;
	case 5:
		if (d % 12 == 6 || d % 12 == 7 || d % 12 == 8)
			printf("зеленого ");
		else
			printf("зеленой ");
		break;
	case 6:
		if (d % 12 == 6 || d % 12 == 7 || d % 12 == 8)
			printf("красного ");
		else
			printf("красной ");
		break;
	case 7:
		if (d % 12 == 6 || d % 12 == 7 || d % 12 == 8)
			printf("красного ");
		else
			printf("красной ");
		break;
	case 8:
		if (d % 12 == 6 || d % 12 == 7 || d % 12 == 8)
			printf("желтого ");
		else
			printf("желтой ");
		break;
	case 9:
		if (d % 12 == 6 || d % 12 == 7 || d % 12 == 8)
			printf("желтого ");
		else
			printf("желтой ");
		break;
	default:
		break;
	}

	switch (d % 12)
	{
	case 0:
		printf("обезьяны");break;
	case 1:
		printf("курицы");break;
	case 2:
		printf("собаки");break;
	case 3:
		printf("свиньи");break;
	case 4:
		printf("крысы");break;
	case 5:
		printf("коровы");break;
	case 6:
		printf("тигра");break;
	case 7:
		printf("зайца");break;
	case 8:
		printf("дракона");break;
	case 9:
		printf("змеи");break;
	case 10:
		printf("лошади");break;
	case 11:
		printf("овцы");break;
	default:
		break;
	}


	return 0;
}

