#include <stdio.h>

// Calculates the amount of loan left after the first, second and third monthly payments.

int main (void)
{
	float loan, inRate, monPay;
	
	printf("Enter amount of loan: ");
	scanf("%f", &loan);
	
	printf("Enter interest rate: ");
	scanf("%f", &inRate);
	
	printf("Enter monthly payment: ");
	scanf("%f", &monPay);
	
	inRate = (inRate / 100) / 12;
	
				loan = (loan + (loan * inRate)) - monPay;
	printf("\nBalance remaining after first payment: %.2f\n", loan);					
				loan = (loan + (loan * inRate)) - monPay;				
	printf("Balance remaining after second payment: %.2f\n", loan) ;
				loan = (loan + (loan * inRate)) - monPay;
	printf("Balance remaining after second payment: %.2f\n", loan);
						
						
return 0;
}	
	
	
	
	
