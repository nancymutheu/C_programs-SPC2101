//NAME:NANCY MUTHEU
//REG NO:PA106/G/29212/25
/*a program that checks if student is eligible for final exams*/

#include <stdint.h>

int main()
{
	int attendance;
	int average_marks;
	
	printf("enter attendance:");
	scanf("%d",&attendance);
	
	printf("\n enter average _marks:");
	scanf("%d",&average_marks);
	
	if(attendance >= 75 & average_marks >= 40)
	{
        printf("\n eligible to take final exams");
	}
	else
	{
		printf("\n not eligible");
	}
		return 0;
}