#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int z,a,b;
	printf("Nhap 2 so:\n");
	scanf("%d %d",&a,&b);
	z=a%b;
	if(z==0)
	printf("a chia het cho b");
	else
	printf("Khong chia het");
	
}
