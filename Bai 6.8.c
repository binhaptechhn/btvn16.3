#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int tuoi;
	float cao;
	char gt;
 	printf ("Nhap thong tin: (tuoi-chieu cao-gioi tinh)");  
	scanf("%3d %5f %s",&tuoi,&cao,&gt);
	printf("du lieu:\n%d tuoi,\n%0.2fm,\nGioi tinh: %s"2,tuoi,cao,gt);  
	return 0;
}
