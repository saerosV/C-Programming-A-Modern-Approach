#include <stdio.h>

// Asks the user to enter a dollar amount, and then shows  
// how to pay the amount with $20, $10, $5, and $1 bills.

int main (void)
{
	int amount;
	
	printf("Enter dollar amount: ");
	scanf("%d", &amount);
	
	printf("$20 bills: %d\n", amount / 20);
		amount -= 20 * (amount  / 20);
	printf("$10 bills: %d\n", amount / 10);
		amount -= 10 * (amount  / 10);
	printf("$5 bills: %d\n", amount / 5);
		amount -= 5 * (amount / 5);
	printf("$1 bills: %d\n", amount);
	
	return 0;
}
