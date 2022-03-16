#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char item[20];
	int partno;
	float cost;
	printf ("nhap item: "); 
	gets(item); 
	printf ("Vui long nhap so luong %s /1c \n",item); 
	scanf("%d",&partno);
	printf ("gia nhap: /VND "); 
	scanf("%f",&cost);
	printf("so tien can tra: %0.0f VND",partno*cost);
	return 0;
}
