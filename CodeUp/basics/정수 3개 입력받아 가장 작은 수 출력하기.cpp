#include <stdio.h>

int main() {
	int i, j, k;
	scanf("%d %d %d", &i, &j, &k);
	printf("%d",(i>j ? j : i) > k ? k : (i>j ? j : i));
}

