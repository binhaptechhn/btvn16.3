#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char letter;
	printf("\nNhap bat ki ky tu nao : ");
	letter = getchar();
	printf("\nKy tu ban da nhap la :  %c ", letter);
	return 0;
}
