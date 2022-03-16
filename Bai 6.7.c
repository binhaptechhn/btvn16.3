#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int tuoi;
	float cao;
	char gt[10], name[80];
	printf("Nhap du lieu: \nNhap ten\n");
	scanf ("%s",&name);
	printf("Gioi tinh: \n");
	scanf ("%s",&gt);
	printf("Nhap tuoi : \n");
	scanf ("%d",&tuoi);
	printf("Nhap chieu cao: \n");
	scanf ("%f",&cao);  
	printf("Thong tin duoc nhap la :\nName: %s,\nGioi tinh %s,\nTuoi: %d,\nChieu cao:%0.2fm",name,gt,tuoi,cao);

	return 0;
}
