#include <stdio.h>

int main (void)
{
    int grade;

    printf("Enter numerical grade: ");
    scanf("%d", &grade);

    switch (grade)
    {
    case 0 ... 59:
        printf("Letter grade: F\n"); break;
    case 60 ... 69:
        printf("Letter grade: D\n"); break;
    case 70 ... 79: 
        printf("Letter grade: C\n"); break;
    case 80 ... 89: 
        printf("Letter grade: B\n"); break;
    case 90 ... 100: 
        printf("Letter grade: A\n"); break;
    default: 
        printf("Error: grade not valid\n");
        break;    
    }
}