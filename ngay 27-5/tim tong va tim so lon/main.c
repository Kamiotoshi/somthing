#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main(int argc, char *argv[]) {
	float expenses[7]={1200.5,800.25,950.75,1100.00,750.5,900.119995,1300.339966};
	float  total=0;
	int i;
	float budget,highest=expenses[0];
	printf("Please enter budget\n");
	scanf("%f",&budget);
	for(i=0;i<7;i++)
	{
		total+=expenses[i];
		if(expenses[i]>highest)
		{
			highest=expenses[i];
		}
		printf("Day %d: %f\n",i+2,expenses[i]);
	}
	printf("\n----Summary----");
	printf("\nTotal monthly expenses: %f",total);
	if(total<=budget)
	{
		printf("\nExpenses within the budget");
	}
	else
	{
		printf("\nExpenses exceed budget");
	}
	printf("\nHighest expenses:%f",highest);

}
