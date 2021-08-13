#include <stdio.h>

int main() {
	int input;
x:	scanf("%d", &input);
	while(1) {
		if(input != 0) {
		printf("%d\n", input);
		goto x;
		} else {
			break;
		}
	}
	
}

