#include <stdio.h>

int n[21];

int fibo(int x) {
	if(x == 0)
		return 0;
	if(x == 1)
		return 1;
	if(n[x] != 0)
		return n[x];
	return n[x] = fibo(x - 1) + fibo(x - 2);
}

int main() {
	int input;
	scanf("%d", &input);
	printf("%d", fibo(input));
}
