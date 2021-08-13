#include <stdio.h>

int main() {
	int n;
	int input[10001] = {0,};
	scanf("%d", &n);
	for(int i=1; i<=n; i++) {
		scanf("%d", &input[i]);
	}
	for(int i=n; i>=1; i--) {
		printf("%d ", input[i]);
	}
}

