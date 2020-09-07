#include <stdio.h>

// Breaks down the ISBN (International Standard Book Number) entered by the user

int main (void)
{
	int gs1_prefix, group_id, publ_code, item_nmbr, check_digit;
	
	printf("Enter ISBN: ");
	scanf("%d-%d-%d-%d-%d", &gs1_prefix, &group_id, &publ_code, &item_nmbr, &check_digit);
	
	printf("GS1 prefix: %3d\nGroup identifier: %d\n", gs1_prefix, group_id);
	printf("Publisher code: %d\nItem number: %d\n", publ_code, item_nmbr);
	printf("Check digit: %d", check_digit);
	
	return 0;
}
	
