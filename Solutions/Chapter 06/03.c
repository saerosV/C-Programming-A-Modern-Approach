#include <stdio.h>

int main (void)
{
    int num1, den1, x, num2, den2;

    printf("Enter a fraction: ");
    scanf(" %d/%d", &num1, &den1);

    num2 = num1;
    den2 = den1;

    while (den2 > 0) 
    {
        x = den2;
        den2 = num2 % den2;
        num2 = x;
    }

    num1 = num1 / num2;
    den1 = den1 / num2;

    printf("In lowest terms: %d/%d\n", num1, den1);

    return 0;
}