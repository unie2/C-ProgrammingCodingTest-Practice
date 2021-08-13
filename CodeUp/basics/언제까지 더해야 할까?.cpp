#include <stdio.h>

int main() {
	int input, result=0;
	scanf("%d", &input);
	for(int i=1; i<=input; i++) {
		result += i;
		if(result >= input) {
			printf("%d", i);
			break;
		}
	}
}

