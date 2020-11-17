#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Rus");
    int d;
    printf("");
    scanf_s("%d", &d);

    switch (d / 100) {
    case 1: printf("Сто "); break;
    case 2: printf("Двести "); break;
    case 3: printf("Триста "); break;
    case 4: printf("Четыреста "); break;
    case 5: printf("Пятьсот "); break;
    case 6: printf("Шестьсот "); break;
    case 7: printf("Семьсот "); break;
    case 8: printf("Восемьсот "); break;
    case 9: printf("Девятьсот "); break;
    }
    switch ((d % 100) / 10) {
    case 0: break;
    case 2: printf("двадцать "); break;
    case 3: printf("тридцать "); break;
    case 4: printf("сорок "); break;
    case 5: printf("пятьдесят "); break;
    case 6: printf("шестьдесят "); break;
    case 7: printf("семьдесят "); break;
    case 8: printf("восемьдесят "); break;
    case 9: printf("девяносто "); break;
    case 1: switch (d % 100) {
    case 11: printf("одиннадцать "); break;
    case 12: printf("двенадцать "); break;
    case 13: printf("тринадцать "); break;
    case 14: printf("четырнадцать "); break;
    case 15: printf("пятнадцать "); break;
    case 16: printf("шестнадцать "); break;
    case 17: printf("семнадцать "); break;
    case 18: printf("восемнадцать "); break;
    case 19: printf("девятнадцать "); break;
    case 10: printf("десять "); break;
    }
    }
    if ((d % 100 / 10) != 1) {
        switch (d % 10) {
        case 0: break;
        case 1: printf("один "); break;
        case 2: printf("два "); break;
        case 3: printf("три "); break;
        case 4: printf("четыре "); break;
        case 5: printf("пять "); break;
        case 6: printf("шесть "); break;
        case 7: printf("семь "); break;
        case 8: printf("восемь "); break;
        case 9: printf("девять "); break;
        }
    }
    return 0;
}
