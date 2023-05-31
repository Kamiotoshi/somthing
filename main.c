#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x=1,pin,option,rut_tien,gui_tien,sodu=20000;
	printf("Nhap ma pin ");
	scanf("%d",&pin);
	if(pin == 124567)
	{
		printf("Ma pin chinh xac");
	do 
	{
		printf("Chao mung den voi app\n");
		printf("Ban muon lam gi\n");
		printf("1-Xem so tien tai khoan\n");
		printf("2-Rut tien\n");
		printf("3-Gui tien\n");
		printf("4-Thoat\n");
		printf("Nhap yeu cau cua ban\n");
		scanf("%d",&option);
		switch(option)
		{
			case 1:{
			
				printf(" So tien ban hien co:\n");
				break;
				}
			case 2:{
				printf("So tien ban muon rut:\n");
				scanf("%d",&rut_tien);
				if(rut_tien>sodu)
				{
					printf("Tai khoan ko du tien");
	
				}else{
					sodu -= rut_tien;
					printf("Ban rut thanh cong:%d\n\n",sodu);
		
				}
				break;
			}
			case 3:
				{
					printf("Nhap so tien muon gui:\n");
					scanf("%d",&gui_tien);
					sodu+=gui_tien;
					printf("Nap tien thanh cong.So tien tk hien tai nay la %d\n",sodu);
					break;
				}
				case 4:{
					x=0;
					printf("Hen gap lai sau");
					break;
				}
				default:{
					printf("Nhap sai vui long nhap lai\n");					
					break;
				}
		
		}	
		
	}while(x);
	}else {
		printf("Sai ma pin");
	}
}
