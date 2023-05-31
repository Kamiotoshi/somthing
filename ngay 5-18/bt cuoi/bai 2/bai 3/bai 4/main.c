#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int Salary;
	char Grade;
	int Last;
	printf("Enter Salary and grade:");
	scanf("%d %c",&Salary,&Grade);
	Last=Salary+Grade;
	switch (Grade)
	{
		case 'a':
			 Grade=300;
			 
			 printf("Last salary = %d",Last);
			 break;
		case 'b':
			Grade=200;
			
			 printf("Last salary = %d",Last);
			 break;
		default:
			 Grade=100;
			 
			 printf("Last salary = %d",Last);
			 break;
		
	}
	
}
