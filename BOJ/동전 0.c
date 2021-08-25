#include <stdio.h>

int main() {
	int n, k, result=0;
	int stat[11];
	scanf("%d %d", &n, &k);
	for(int i=n-1; i>=0; i--) {
		scanf("%d", &stat[i]);
	}
	
	for(int i=0; i<n; i++) {
		result += k / stat[i];
		k %= stat[i];
	}
	printf("%d", result);
}
