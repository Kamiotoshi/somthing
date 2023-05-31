#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int w,h;
	printf("Enter the width of the retangle is ",w);
	scanf("%d",&w);
	printf("Enter the height of the retangle is ",h);
	scanf("%d",&h);
	int i,j;
	for(i=0;i<h;i++){
		for (j=0;j<w;j++){
			if(i>0&&i<h-1&&j>0&&j<w-1)
			{
				printf(" ");}
				else
				{
				printf("*");}
				}
				printf("\n");

}
}

