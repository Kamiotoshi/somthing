#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float a,b,c;
	printf("nhap 2 so:\n");
	scanf("%f %f",&a,&b);
	c=a*b;
	if(c>1000)
	printf("Tich a,b lon hon 1000");
	else if(c==1000)
	printf("Tich bang 1000");
	else
	printf("tich nho hon 1000");
	
}
