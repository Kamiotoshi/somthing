#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,b,height,c,d=1;
	printf("enter height:");
	scanf("%d",&height);
	c=height-1;
	
	for(a=0;a<height;a++)
	{
		for(b=0;b<c;b++){
		printf(" ");
		}
		for(b=0;b<d;b++)
		{
		printf("*");
		}
		printf("\n");
		c--;
		d+=2;
		}
		}

	

