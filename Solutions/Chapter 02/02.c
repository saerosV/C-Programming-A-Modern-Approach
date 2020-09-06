#include <stdio.h>
#define PI 3.1415926535898

// Calculates the volume of a sphere of radius 10.

int main (void)
{
	float r = 10;

	printf("V = %.2f\n", 4.0f * PI * (r * r * r) / 3);
	
	return 0;
}
