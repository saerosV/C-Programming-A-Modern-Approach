#include <stdio.h>

// Asks user to enter a value of x, then displays the value of the following polynomial:
// 3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6

int main (void)
{
	int x, polynomial;
	
	printf("Enter a value for x: ");
	scanf("%d", &x);
	
	polynomial = (3 * (x * x * x * x *x))
              + (2 * (x * x * x * x)) 
              - (5 * (x * x * x)) 
              - (x * x) 
              + (7 * x) 
              - 6;

	printf("Result: %d", polynomial);
	
	return 0;
}
