//NAME:NANCY MUTHEU
//REG NO:PA106/G/290212/25
/*a program that prompt the user to enter the number of water units consumed,calculates the total bill 
depending on the charges, and displays the total bill in 2 decimal places*/

#include <stdio.h>

int main()
{
	int water_units;
	float total_water_bills;
	
	printf("enter water units consumed; ",water_units);
	scanf("%d",&water_units);
	
	
	if(water_units>60)
	{
		total_water_bills =30*water_units;
	}
	else if(water_units>30)
	{
		total_water_bills =25*water_units;
	}
	else
	{
		total_water_bills =20*water_units;
	}
	printf("\n total water bills:%.2f",total_water_bills);
	
	return 0;
}