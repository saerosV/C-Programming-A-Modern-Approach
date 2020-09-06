#include  <stdio.h>
#define SHARE_PT price_Shares * number_Shares

int main (void)
{
	float number_Shares, price_Shares, com1, com2;
	
	do
	{
	
	printf("Enter number of shares: ");
	scanf("%f", &number_Shares);
	printf("Enter price per share: ");
	scanf("%f", &price_Shares);
	
	if (SHARE_PT < 2500.00f)
	{
		com1 = 30.00f + SHARE_PT * .017f;
	}
	else if (SHARE_PT < 6250.00f)
	{	
		com1 = 56.00f + SHARE_PT * .0066f;
	}
	else if (SHARE_PT < 20000.00f)
	{
		com1 =  76.00f + SHARE_PT * .0034f;
	}
	else if (SHARE_PT < 50000.00f)
	{	
		com1 = 100.00f + SHARE_PT * .0022f;
	}
	else if (SHARE_PT < 500000.00f)
	{	
		com1 = 155.0 + SHARE_PT* .0011f;
	}
	else 
	{
		com1 = 255.00f + SHARE_PT * .0009f;
	}
	if (com1 < 39.00f)
		{
			com1 = 39.00f;
		}
	
	printf("Comission of our bloke:$%.2f\n", com1);
	printf("Comission of rival bloke:$%.2f\n", number_Shares < 1999 ? 
	(com2 = 33 + 0.03 * number_Shares) : (com2 = number_Shares * 0.02 + 33));
	} 
	while (number_Shares > 0);
	
	
	
	return 0;
}
		
		
		
		
