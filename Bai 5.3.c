#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a = 5, b = 6, c = 7;
	printf ("int a = 5, b = 6, c = 7\n",a,b,c);
	printf("gia tri cua a > b la \t%i\n\n", a > b);
	printf("gia tri cua b < c la \t%i\n\n", b < c);
	printf("gia tri cua a + b >= c la \t%i\n\n", a + b >= c);
	printf("gia tri cua a - b <= b - c la \t%i\n\n", a-b<=b-c);
	printf("gia tri cua b-a =b - c la \t%i\n\n", b - a == b - c);
	printf("gia tri cua a*b!= c * c la \t%i\n\n", a * b < c * c);
	printf("Ket qua cua a>10 && b <5 la %d \n\n", a>10 && b<5);
	printf("Ket qua cua a>100 || b<50 la %d \n\n", a>100 || b<50);
	return 0;
}
