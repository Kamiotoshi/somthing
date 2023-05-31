#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num,A;
	printf("nhap num\n");
	scanf("%d",&num);
	A=num%2;
	if(A==0)
	printf("So chan");
	else
	printf("So le");
	return 0;
}
