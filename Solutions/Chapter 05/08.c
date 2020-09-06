#include <stdio.h>

int main (void)
{
	int  uth, utm, utt;
																			
	printf("Departure time\tArrival time\n");
	printf(" 8:00 a.m\t 10:16 a.m\n 9:43 a.m\t 11:52 a.m\n");
	printf(" 11:19 a.m\t 1:31 p.m\n 12:47 p.m\t 3:00 p.m\n");
	printf(" 2:00 p.m\t 4:08 p.m\n 3:45 p.m\t 5:55 p.m\n");
	printf(" 7:00 p.m\t 9:20 p.m\n 9:45 p.m\t 11:58 p.m\n");
	
	printf("\nEnter a 24-hour time: ");
	scanf("%2d : %2d", &uth, &utm);
	
	utt = (uth * 60) + utm;
	
	if (utt <= 480 || utt > 1305) {
		printf("Closest depature time is 8:00 a.m., arriving at 10:16 a.m.\n");
	}
	else if (utt <= 583) {
		printf ("Closest depature time is 9:43 a.m., arriving at 11:52 a.m.\n"); 
	}
	else if (utt <= 679) {
		printf ("Closest depature time is 11:19 a.m., arriving at 1:31 p.m.\n"); 
	}					
	else if (utt <= 767) {
		printf ("Closest depature time is 12:47 p.m., arriving at 3:00 p.m.\n");
	}
	else if (utt <= 840) {
		printf ("Closest depature time is 2:00 p.m., arriving at 4:08 p.m.\n"); 
	}
	else if (utt <= 945) {
		printf ("Closest depature time is 3:45 p.m., arriving at 5:55 p.m.\n");
	}
	else if (utt <= 1140) {
		printf ("Closest depature time is 7:00 p.m., arriving at 9:20 p.m.\n");
	}
	else if (utt <= 1305) {
		printf ("Closest depature time is 9:45 p.m., arriving at 11:58 p.m.\n");
	}
		
	/* Previously tried taking the difference between the user           *input and the departure times, to later compare each    *difference to each other. There are 8 departure times, so *4 comparisons, then 2 , then 1. I hit a wall when i had which DT was the *closest, but couldn't trace it back to the original time. *7 if else statements at that point, without even finishing *it. Hmm.*/
	
	return 0;
	
}
