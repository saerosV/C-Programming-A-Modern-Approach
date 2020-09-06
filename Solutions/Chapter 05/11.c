#include <stdio.h>

int main (void)
{
    int i, j;

    printf("Enter a two-digit number: ");
    scanf("%1d%1d", &i, &j);

    if (i == 1 && j > 0 && j < 10) {
        
        printf("You entered the number ");
        switch (j)
        { 
            case 1: 
                printf("eleven.\n"); break;
            case 2:
                printf("twelve.\n"); break;
            case 3: 
                printf("thirteen.\n"); break;
            case 4: 
                printf("fourteen.\n"); break;
            case 5: 
                printf("fifteen.\n"); break;
            case 6: 
                printf("sixteen.\n"); break;
            case 7: 
                printf("seventeen.\n"); break;
            case 8: 
                printf("eighteen.\n"); break;
            case 9:
                printf("nineteen.\n"); break;
            default: 
                break;
        }
    }
    else
    {
        printf("You entered the number ");
        switch (i)
        {
            case 1:
                printf("ten"); break;
            case 2: 
                printf("twenty"); break;
            case 3: 
                printf("thirty"); break;
            case 4: 
                printf("forty"); break;
            case 5: 
                printf("fifty"); break;
            case 6: 
                printf("sixty"); break;
            case 7: 
                printf("seventy"); break;
            case 8:
                printf("eighty"); break;
            case 9:
                printf("ninety"); break;
            default: 
				break;
            }

        switch (j)
        {
            case 1: 
                printf("-one.\n"); break;
            case 2: 
                printf("-two.\n"); break;
            case 3:
                printf("-three.\n"); break;
            case 4: 
                printf("-four.\n"); break;
            case 5: 
                printf("-five.\n"); break;
            case 6:
                printf("-six.\n"); break;
            case 7:
                printf("-seven.\n"); break;
            case 8:
                printf("-eight.\n"); break;
            case 9:
                printf("-nine.\n"); break;
            default: 
                printf(".\n"); break;
            }
    
    }
    
    
return 0;
}
