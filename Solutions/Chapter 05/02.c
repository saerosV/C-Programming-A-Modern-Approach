#include <stdio.h>

// Prompts user for a 24h time, then displays the time in 12h form.

int main (void)
{
	int hour, minute;
	
	printf("Enter a 24-hour time: ");
	scanf("%d : %d", &hour, &minute);
	
	if (hour == 0) {
		hour = 12;
		printf("Equivalent 12-hour time: %d:%02d AM", hour, minute);
	}
	else if (hour >= 1 && hour <= 11) { 
		printf("Equivalent 12-hour time: %d:%02d AM", hour, minute);
	}
	else if (hour == 12) {
		printf("Equivalent 12-hour time: %d:%02d PM", hour, minute);
	}	
	else if (hour >= 13 && hour<= 23) {
		hour = hour - 12;
		printf("Equivalent 12-hour time: %d:%02d PM", hour, minute);
	}
	
	return 0;
}
