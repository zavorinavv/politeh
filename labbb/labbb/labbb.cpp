// labbb.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    float a, b, c, sum, suma_b;
    printf ("Введите a и b:");
    scanf ("%F", &a);
    scanf ("%F", &b);
    scanf ("%F", &c);
    suma_b = a + b;
    sum = c * suma_b * suma_b;
    if ((c == 0) || (suma_b == 0))
    {
        printf("Произведение чисел = 0");
    }
    else
    {
        printf("Произведение чисел a и b = %F\n", sum);
    }



    return 0;

}
