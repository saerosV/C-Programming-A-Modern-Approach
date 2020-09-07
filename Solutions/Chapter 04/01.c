#include <stdio.h>

// Reverts a two digit number entered by the user.

int main (void)
{
	int i;
	
	printf("Enter a two digit number: ");
	scanf("%d", &i);
	
	printf("The reversal is: %d%d", i % 10, i /  10);
	
	return 0;
}
