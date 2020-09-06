#include <stdio.h>
#include <stdbool.h>

int main (void) 
{
	int n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, s1, s2, Sum;
	
	printf("Enter UPC code (check digit not necessary): ");
	scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", 
				&n1, &n2, &n3, &n4, &n5, &n6, &n7, &n8, &n9, &n10);

	s1 = n1 + n3 + n5 + n7 + n9;
	n2 = n2 * 2;
	n4 = n4 * 2;
	n6 = n6 * 2;
	n8 = n8 * 2;
	n10 = n10 * 2;
	
	if (n2 > 9 || n4 > 9 || n6 > 9 || n8 > 9 ||n10 > 9) {
		n2 = n2 - 9;
		n4 = n4 - 9;
		n6 = n6 - 9;
		n8 = n8 - 9;
		n10 = n10 - 9;
	}
	s2 = n2 + n4 + n6 + n8 + n10;
	Sum = ((s1 + s2) % 10);
	
	if (Sum == 0) {
		printf("VALID");
	}
	else {
		printf("INVALID");
	} 
	
	return 0;
}
	
	
	
	
