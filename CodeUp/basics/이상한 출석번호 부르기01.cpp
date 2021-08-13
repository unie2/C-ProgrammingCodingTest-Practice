#include <stdio.h>

int main() {
	int n, t;
	int input[24] = {0,};
	scanf("%d", &n);
	for(int i=1; i<=n; i++) {
		scanf("%d", &t);
		input[t] ++;
	}
	for(int i=1; i<=23; i++) {
		printf("%d ", input[i]);
	}
}

