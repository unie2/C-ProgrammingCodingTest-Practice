#include <stdio.h>

int main() {
	long long int a, r, n;
	scanf("%lld %lld %lld", &a, &r, &n);
	while(1) {
		a *= r;
		if(--n == 1) {
			printf("%lld", a);
			break;
		}
	}
}

