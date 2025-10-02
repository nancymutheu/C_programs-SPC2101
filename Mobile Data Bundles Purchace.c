//NAME:NANCY MUTHEU
//REG NO:PA106/G/29212/25
/*a program that displays data bundle offer and requests user to enter their choice and uses switch 
statement to display bundles fselected and its cost*/

#include <stdint.h>

int main()
{
	int offer;
	printf("Enter your choice\n");
	printf("1. 100MB @ 50KES\n");
	printf("2. 500MB @ 200KES\n");
	printf("3. 1GB @ 350KES\n");
	printf("4. 2GB @ 600KES\n");
	
	printf("enter your choice(1-4):");
	scanf("%d ,&offer");
	
	switch(offer)
	{
	case 1:
		    printf("\n you selected 100MB @ 50KES");
		    break;
	case 2:
	        printf("\n you selected 500MB @ 200KES");
	        break;
    case 3:
            printf("\n you selected 1GB @ 350KES");
            break;
    case 4:
    	    printf("\n you selected 2GB @ 600KES");
    	    break;
	default:
            printf("\n invalid choice.please pick a number between 1-4.");
		    break;
	}
		return 0;
}