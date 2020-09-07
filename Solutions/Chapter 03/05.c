#include <stdio.h>

/* Asks user to enter numbers from 1 to 16 (any order), and then displays
   the numbers in a 4 by 4 arrangement, followed by the sums of the rows,
   columns and diagonals. 
   P.S: I know this is currently horrendous code, but i'll refactor to an
   array based version in the coming weeks, so... 
   Ignore the (un)practicality.
 */ 

int main (void)
{
	int a1, a2, a3, a4, b1, b2, b3, b4, c1, c2, c3, c4, d1, d2, d3, d4,
							row1_sum, row2_sum, row3_sum, row4_sum,  
                            col1_sum, col2_sum, col3_sum, col4_sum, 
                            diag1_sum, diag2_sum;
															
	printf("Enter the numbers from 1 to 16 in any order: ");
	scanf("%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d", &a1, &a2, &a3, &a4, 
                                              &b1, &b2, &b3, &b4, 
                                              &c1, &c2, &c3, &c4,
                                              &d1, &d2, &d3, &d4);
										
	row1_sum = a1 + a2 + a3 + a4;
	row2_sum = b1 + b2 + b3 + b4;
	row3_sum = c1 + c2 + c3 + c4;
	row4_sum = d1 + d2 + d3 +d4;

	col1_sum = a1 + b1 + c1 + d1;
	col2_sum = a2 + b2 + c2 + d2;
	col3_sum = a3 + b3 + c3 + d3;
	col4_sum = a4 + b4 + c4 + d4;

	diag1_sum = a1 + b2 + c3 + d4;
	diag2_sum = a4 + b3 + c2 + d1;

	printf("%d\t%d\t%d\t%d\n", a1, a2, a3, a4);
	printf("%d\t%d\t%d\t%d\n", b1, b2, b3, b4);
	printf("%d\t%d\t%d\t%d\n", c1, c2, c3, c4);
	printf("%d\t%d\t%d\t%d\n", d1, d2, d3, d4);
	
	printf("Row sums: %d %d %d %d\n", row1_sum, row2_sum,
																				row3_sum, row4_sum);
	printf("Column sums: %d %d %d %d\n", col1_sum, col2_sum,
																						col3_sum, col4_sum);
	printf("Diagonal sums: %d %d\n", diag1_sum, diag2_sum);
	
	return 0;
}
															
	
