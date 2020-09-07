#include <stdio.h>

// Prompts the user for a telephone number in the form "(xxx) xxx-xxxx"
// and then displays in this format: "xxx.xxx.xxxx"

int main (void)
{
	int n1, n2, n3;
	
	printf("Enter phone number [(xxx) xxx-xxxx]: ");
	scanf("(%d)%d-%d", &n1, &n2, &n3);
	
	printf("You entered %d.%d.%d", n1, n2, n3);
	
	return 0;
}
