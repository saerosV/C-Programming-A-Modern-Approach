#include <stdio.h>

// Asks the user to enter an amount, then displays the amount with 5% added.

int main (void)
{
	float dol_amount, dol_tax;

	printf("Enter an amount: $");
	scanf("%f", &dol_amount);
	
	dol_tax = dol_amount * 1.05;
	
	printf("With tax added: $%.2f\n", dol_tax);
	
	return 0;
}
