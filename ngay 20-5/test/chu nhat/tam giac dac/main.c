#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,b,height;
	printf("enter height:");
	scanf("%d",&height);
	
	for(a=0;a<=height;a++)
	{
		for(b=0;b<=a;b++){
		printf("*");
		}
	printf("\n");}
	}


