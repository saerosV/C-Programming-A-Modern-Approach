#include <stdio.h>

int main (void)
{
	int m, d, y;
	printf("Enter a date (mm/dd/yyyy): ");
	scanf("%d/%d/%d", &m, &d, &y);
	
	printf("You entered the date %02d%02d%02d", y, m, d);
	
	return 0;
}
