#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,b,c;
	printf("nhap 2 so:\n");
	scanf("%d %d",&a,&b);
	c=a-b;
	if(c==b)
	printf("hieu bang b");
	else if(c==a)
	printf("hieu bang a");
	else
	printf("hieu khong bat cu gia tri nhap");

}
