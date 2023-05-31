#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x;
	x=0;
	printf("Nhap diem cua hoc sinh:\n");
	scanf("%d",&x);
	if (x>=75)
	{
	printf("Loai A");}

	else if(60<=x&&x<75){

	 printf("Loai B");}
	else if(45<=x&&x<60)
	 {
	 printf("Loai C");}
	else if(35<=x&&x<45)
	 {
	 printf("Loai D");}
	else
	 {
	 printf("Loai E");}
}
	

