#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void draw_g(int s);
int main(int argc, char *argv[]) {
	int i,j,k;
	printf("enter num\n");
	scanf("%d",&j);
	draw_g(3);
	draw_g(j);
	printf("\n\n Code khac");
	draw_g(5);
	return 0;
}
void draw_g(int s){
	int i;
	printf("Ve hinh chu nhat\n");
	for( i=0;i<s;i++)
	{
		int k;
		for( k=0;k<s;k++)
		{
			printf("*");
		}
		printf("\n");
	}
}
