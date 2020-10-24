#include<stdio.h>

int main() {
	int a_b[1000];
	int a, b,i=0;
	while (scanf("%d %d",&a,&b) != EOF) {
		a_b[i] = a + b;
		i++;
	}
	for (int n = 0; n < i; n++) {
		printf("%d\n", a_b[n]);
	}

	return 0;
}