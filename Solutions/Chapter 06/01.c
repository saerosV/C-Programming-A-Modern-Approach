#include <stdio.h>

int main (void) 
{
    float number_1st, number_comp = 0;

    do {

        printf("Enter a number: ");
        scanf(" %f", &number_1st);
        
        if (number_1st > number_comp) 
            number_comp = number_1st;                 
    }
    
    while (number_1st > 0);
    
    printf("The largest number entered was: %.2f\n", number_comp);     
    
    return 0;
}