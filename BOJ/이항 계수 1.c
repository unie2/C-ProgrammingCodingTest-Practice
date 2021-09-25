#include <stdio.h>

int main() {
	int n, k, a1 = 1, a2 = 1, b = 1;
	scanf("%d %d", &n, &k);
	for(int i=n-k; i>=2; i--) {
		a1 *= i;
	}
	for(int i=k; i>=2; i--) {
		a2 *= i;
	}
	for(int i=n; i>=2; i--) {
		b *= i;
	}
	printf("%d\n", b/(a1*a2));
}
