#include <stdio.h>

int n[1001];

int dp(int x) {
	if(x == 1) return 1;
	if(x == 2) return 3;
	if(n[x] != 0) return n[x];
	return n[x] = (dp(x-1) + 2*dp(x-2)) % 10007;
}

int main() {
	int x;
	scanf("%d", &x);
	printf("%d", dp(x));
}
