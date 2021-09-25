#include <stdio.h>

int main() {
	int tc, a, b;
	scanf("%d", &tc);
	while(tc-- != 0) {
		scanf("%d,%d", &a, &b);
		printf("%d\n", a+b);
	}
}
