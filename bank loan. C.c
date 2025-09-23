/*
NAME:
REG NO:
DESCRIPTION:
*/

#include <stdio.h>

int main()
{
	int age;
	float annual_income;
	
	printf("Enter your age:");
	scanf("%d", &age);
	
	printf("\nEnter your annual_income: ");
	scanf("%f", &annual_income);
	
	if (age >= 21 && annual_income >= 21000){
		printf("\ncongratulations you qualify for a loan");

	}
	else{
		printf("\nUnfortunately, we are unable to offer you a loan at this time");
	}
	
	return 0;
}