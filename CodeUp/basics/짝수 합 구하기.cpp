#include <stdio.h>

int main() {
	int input, result = 0;
	scanf("%d", &input);
	for(int i=1; i<=input; i++) {
		if(i%2 == 0)
			result += i;
	}
	printf("%d", result);
}

