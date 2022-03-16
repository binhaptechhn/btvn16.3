#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float  von,nam,lai;
	printf ("nhap so tien muon gui: \n");
	scanf ("%f",&von) ;
	printf ("nhap so nam muon gui: \n");
	scanf ("%f",&nam) ;
	printf ("nhap lai suat hien tai /%%\n");
	scanf ("%f",&lai) ;
	
	printf("so tien lai sau khi gui la: %0.2f", von*nam*lai/100); 
	
	return 0;
}
