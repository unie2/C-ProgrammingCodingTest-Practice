#include <stdio.h>

int main() {
	int i, j;
	scanf("%d %d", &i, &j);
	printf("%d\n", i+j);
	printf("%d\n", i-j);
	printf("%d\n", i*j);
	printf("%d\n", i/j);
	printf("%d\n", i%j);
	printf("%.2f", (float)i/j);
}

