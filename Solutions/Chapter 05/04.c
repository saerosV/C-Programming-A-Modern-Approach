#include <stdio.h>

// Asks the user to enter a wind speed (in knots), then displays the
// corresponding description, according to the Beaufort scale (used to
// estimate wind force).

int main(void)
{
	float WindSpeed;
	
	printf("Enter wind speed (in knots): ");
	scanf("%f", &WindSpeed);
	
	if (WindSpeed < 1) {
		printf("%.1f knots? It's calm out there.\n", WindSpeed);
}	
	else if (WindSpeed <= 3) {
		printf("%.1f knots? That's just light air...\n", WindSpeed);
}
	else if (WindSpeed <= 27) {
		printf("%.1f knots? Just a breeze.\n", WindSpeed);
}
	else if (WindSpeed <= 47) {
		printf("%.1f knots? It's a gale.\n", WindSpeed);
}
	else if  (WindSpeed <= 63) {
		printf("%.1f knots? Get beneath a roof, it's a storm!\n", 
                                                      WindSpeed);
}
	else	printf("%.1f KNOTS!? FUCKING HIDE, DATS A HURRICANE!\n",
                                                      WindSpeed);
													
	return 0;
}													
