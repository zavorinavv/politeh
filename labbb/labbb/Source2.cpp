#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Rus");
    int a, b;
    float i;
    printf("������� ����� a, b:");
    scanf_s ("%F", &a);
    scanf_s ("%F", &b);
    i = (float) 2*(a - b);
    
        printf("������������ ����� = %F\n", i);



    return 0;

}