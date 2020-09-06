#include <stdio.h>

int main (void) 
{
    int year1, year2, month1, month2, day1, day2;

    printf("Enter first date: ");
    scanf("%d/%d/%d", &month1, &day1, &year1);

    printf("Enter second date: ");
    scanf("%d/%d/%d", &month2, &day2, &year2);

    if (year1 < year2) {
        printf("%d/%d/%d is earlier than %d/%d/%d\n", month1, day1, year1, month2, day2, year2);
    } 
    else if (year1 > year2) {
        printf("%d/%d/%d is earlier than %d/%d/%d\n", month2, day2, year2, month1, day1, year1);
    }
    if (year1 == year2 && month1 < month2) {
        printf("%d/%d/%d is earlier than %d/%d/%d\n", month1, day1, year1, month2, day2, year2);
    }
    else if (year2 == year2 && month1 > month2) {
        printf("%d/%d/%d is earlier than %d/%d/%d\n", month2, day2, year2, month1, day1, year1);
    }
    if (year1 == year2 && month1 == month2 && day1 < day2) {
        printf("%d/%d/%d is earlier than %d/%d/%d\n", month1, day1, year1, month2, day2, year2);
    }
    else if (year1 == year2 && month1 == month2 && day1 > day2) {
        printf("%d/%d/%d is earlier than %d/%d/%d\n", month2, day2, year2, month1, day1, year1);
    }
    else if (year1 == year2 && month1 == month2 & day1 == day2) {
        printf("They're the same date.\n");
    }

return 0;
}