#include <stdio.h>

long long d[91];

long long fibo(int x) {
	if (x == 1) 
		return 1;
	if (x == 2)
		return 1;
	if (d[x] != 0)
		return d[x];
	return d[x] = fibo(x - 1) + fibo(x - 2);
}

int main() {
	int num;
	scanf("%d", &num);
	printf("%lld", fibo(num));
}
