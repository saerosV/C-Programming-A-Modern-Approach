/**
* even_squares
*
* Purpose: Ask a user for a integer, and print all the even squares between
* 1 and the user's input.
*
* Author: saerosV
*
* Date: 05 September 2020
*
*/
#include <stdio.h>

int main (void)
{
    int i, n, square;

    printf("Enter a number: ");
    scanf("%d", &n);
    
    for (i = 0; i <= n; i += 2)
    {
        square = i * i;
        
        if (square == 0)
        {
            continue;
        }
        
        printf("%2d\n", square);    
    }
    
return 0;
}
