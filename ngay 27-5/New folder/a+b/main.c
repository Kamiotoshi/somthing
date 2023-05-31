#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int sum(int a,int b);
int main(int argc, char *argv[]) {
	sum(3,4);
	printf("%d",sum(3,4));
}
int sum(int a,int b){
	int c=a+b;

	return c;
}

