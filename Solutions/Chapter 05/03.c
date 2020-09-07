#include  <stdio.h>
#define SHARE_PT p_Share * n_Share
int main (void)

// TODO: add description, refactor

{
	float number_of_shares, price_per_share, comission_broker1, comission_rival_broker;
	
	printf("Enter number of shares: ");
	scanf("%f", &number_of_shares);
	printf("Enter price per share: ");
	scanf("%f", &price_per_share);
	
	if (SHARE_PT < 2500.00f)
	{
		comission_broker1 = 30.00f + SHARE_PT * .017f;
	}
	else if (SHARE_PT < 6250.00f)
	{	
		comission_broker1 = 56.00f + SHARE_PT * .0066f;
	}
	else if (SHARE_PT < 20000.00f)
	{
		comission_broker1 =  76.00f + SHARE_PT * .0034f;
	}
	else if (SHARE_PT < 50000.00f)
	{	
		comission_broker1 = 100.00f + SHARE_PT * .0022f;
	}
	else if (SHARE_PT < 500000.00f)
	{	
		comission_broker1 = 155.0 + SHARE_PT* .0011f;
	}
	else 
	{
		comission_broker1 = 255.00f + SHARE_PT * .0009f;
	}
	if (comission_broker1 < 39.00f)
		{
			comission_broker1 = 39.00f;
		}
	
	printf("Comission of our broker: $%.2f\n", comission_broker1);
	printf("Comission of rival broker: $%.2f\n", number_of_shares < 1999 ? 
	(comission_rival_broker = 33 + 0.03 * number_of_shares) : (comission_rival_broker = number_of_shares * 0.02 + 33));
	
	return 0;
}
		
		
		
		
