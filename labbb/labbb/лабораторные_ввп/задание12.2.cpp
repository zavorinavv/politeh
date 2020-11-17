#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Rus");
    int N, S;
    printf(":");
    scanf_s("%d", &N);
    S = 'Ç';
    switch (N) {
    case 1:  switch (S) {
    case 'Ñ':  printf("Ç"); break;
    case 'Þ':  printf("Â"); break;
    case 'Ç':  printf("Þ"); break;
    case 'Â':  printf("Ñ"); break;
    } break;

    case -1:  switch (S) {
    case 'Ñ':  printf("Â"); break;
    case 'Þ':  printf("Ç"); break;
    case 'Ç':  printf("Ñ"); break;
    case 'Â':  printf("Þ"); break;
    } break;

    case 0:  switch (S) {
    case 'Ñ':  printf("Ñ"); break;
    case 'Þ':  printf("Þ"); break;
    case 'Ç':  printf("Ç"); break;
    case 'Â':  printf("È"); break;
    } break;
    }

    return 0;

}