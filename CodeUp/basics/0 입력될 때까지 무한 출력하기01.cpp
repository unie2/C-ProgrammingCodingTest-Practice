#include <stdio.h>

int main() {
	int input;
x:	scanf("%d", &input);
	
	if(input != 0) {
		printf("%d\n", input);
		goto x;
	}
}

