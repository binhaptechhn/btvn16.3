#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	printf("A string in various forms :\n");
	printf("Without any format command :\n");
	printf("Ngay tot Le Thanh Binh \n");
	printf("With format command but without any modifier:\n");
	printf("[%s]\n","Ngay tot Le Thanh Binh.");
	printf("With digit string 4 as modifier :\n");
	printf("[%4s]\n","Ngay tot Le Thanh Binh.");
	printf("With digit string 19 as modifier: \n");
	printf("[%19s]\n","Ngay tot Le Thanh Binh.");
	printf("With digit string 23 as modifier: \n");
	printf("[%23s]\n","Ngay tot Le Thanh Binh.");
	printf("With digit string 25 as modifier: \n");
	printf("[%25s]\n","Ngay tot Le Thanh Binh.");
	printf("With – and digit string 25 as modifiers :\n");
	printf("[%-25s]\n","Ngay tot Le Thanh Binh.");
	return 0;
}
