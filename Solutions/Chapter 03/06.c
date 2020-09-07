#include <stdio.h>
int main (void)

// Sums two fractions.

{
	int num1, den1, num2, den2, sum1, sum2;
	
	printf("Enter two fractions, separated by a plus sign: ");
	scanf("%d/%d +%d/%d", &num1, &den1, &num2, &den2);
	
	sum1 = num1 * den2 + num2 * den1;
	sum2 = den1 * den2;
	
	printf("Equals to: %d/%d", sum1, sum2);
	
	return 0;
}
