#include <stdio.h>

int main() {
	int n, result=1;
	scanf("%d", &n);
	
	for(int i=n; i>0; i--) {
		result *= i;
	}
	
	printf("%d", result);
}
