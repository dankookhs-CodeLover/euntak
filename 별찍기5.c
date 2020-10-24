#include<stdio.h>


int main() {

	int num;
	scanf("%d", &num);
	for (int i = 0; i < num; i++) {
		for (int n = 0; n < num - (1+i); n++) {
			printf(" ");
		}
		for (int c = 0; c < 1+(2*i); c++) {
			printf("*");
		}

		printf("\n");
	}

	return 0;
}