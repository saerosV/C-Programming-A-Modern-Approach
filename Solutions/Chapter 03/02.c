#include <stdio.h>

// Formats product information given by the user.

int main (void)
{
	int item_number, m, d, y;
	float unit_price;
	
	printf("Enter item number: ");
	scanf("%d", &item_number);
	
	printf("Enter unit price: ");
	scanf("%f", &unit_price);
	
	printf("Enter purchase date (mm/dd/yyyy): ");
	scanf("%d/%d/%d", &m, &d, &y);
	
	printf("Item\t\tUnit\t\tPurchase\n");
	printf("\t\tPrice\t\tDate\n"); 
	printf("%d\t\t$%6.2f\t\t%.2d/%.2d/%4.d", item_number, unit_price, m, d, y);
 
	return 0;
}
