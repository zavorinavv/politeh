#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Rus");
    int N, S;
    printf(":");
    scanf_s("%d", &N);
    S = '�';
    switch (N) {
    case 1:  switch (S) {
    case '�':  printf("�"); break;
    case '�':  printf("�"); break;
    case '�':  printf("�"); break;
    case '�':  printf("�"); break;
    } break;

    case -1:  switch (S) {
    case '�':  printf("�"); break;
    case '�':  printf("�"); break;
    case '�':  printf("�"); break;
    case '�':  printf("�"); break;
    } break;

    case 0:  switch (S) {
    case '�':  printf("�"); break;
    case '�':  printf("�"); break;
    case '�':  printf("�"); break;
    case '�':  printf("�"); break;
    } break;
    }

    return 0;

}