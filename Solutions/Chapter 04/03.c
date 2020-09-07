#include <stdio.h>

// Reverts a three digit number entered by the user, without using arithmetic.

int main (void)
{
	int i, j, k;
	
	printf("Enter three digits: ");
	scanf("%1d%1d%1d", &i, &j, &k);
	
	printf("The reversal is: %d%d%d", k, i, j);
	
	return 0;
}
