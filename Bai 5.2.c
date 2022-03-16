#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,b,c;
	printf ("Nhap a: ");
	scanf("%d",&a);
	printf ("Nhap b: ");
	scanf("%d",&b);
	printf ("Nhap c: ");
	scanf("%d",&c);
	printf ("d = %d",a*b+c/2);
	return 0;
}
