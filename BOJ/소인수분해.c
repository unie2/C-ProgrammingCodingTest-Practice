#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	if(n == 1)
		return 0;
	int number = 2;
	while(n > 1) {
		if(n % number == 0) {
			printf("%d\n", number);
			n /= number;
		} else {
			number ++;
		}
	}
}
