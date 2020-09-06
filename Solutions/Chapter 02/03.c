#include <stdio.h>
#define PI 3.1415926535898

// Calculates the volume of a sphere of X radius (given by the user). 

int main (void)
{
	float r;
	
	printf("Insert radius: ");
	scanf("%f", &r);
	
	printf("V = %.2f", 4.0f * PI * (r * r * r) / 3);
	
	return 0;
}
