#include <stdio.h>

int main (void)
{
	int n, a;
	
	printf("Enter a number: ");
	scanf("%d", &n);
	
	if (n  >= -9 && n <= 9)
	a = 1;
	else if (n <= 99)
	a = 2;
	else if (n <= 999)
	a = 3;
	else if (n <= 9999)
	a = 4;
	
	printf("The number %d has %d character(s).", n, a);
	
	return 0;
}	
	
	
		
