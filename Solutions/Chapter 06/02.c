#include <stdio.h>

int main (void)
{
    int a, b, x;

    printf("Enter two integers: ");
    scanf(" %d%d", &a, &b);

    while (b > 0) 
    {
        x = b;
        b = a % b;
        a = x;
    }

    printf("Greatest common divisor: %d\n", a);
}