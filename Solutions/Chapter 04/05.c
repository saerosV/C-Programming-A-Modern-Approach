#include <stdio.h>

// Calculates the check digit of an UPC code.

int main (void)
{
	int d, i1, i2, i3, i4, i5, j1, j2, j3, j4, j5, first_sum, 
				second_sum, sum_total;
		
		if (
				
		printf("Enter the first 11 digits of an upc: ");
		scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", 
        &d, &i1, &i2, &i3, &i4, &i5, &j1, &j2, &j3, &j4, &j5);
		
		first_sum = d + i2 + i4 + j1 + j3 + j5;
		second_sum = i1 + i3 + i5 + j2 + j4;
		
		sum_total = (9 - ((((first_sum * 3) + second_sum) - 1) % 10));
		
		printf("Check digit:%d\n", sum_total);
		
		return 0;
	}  
		
		
