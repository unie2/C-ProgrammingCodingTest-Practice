#include <stdio.h>

int main() {
	int i, j, k;
	scanf("%d %d %d", &i, &j, &k);
	printf("%d\n%.1f", i+j+k, (float)(i+j+k)/3);
}

