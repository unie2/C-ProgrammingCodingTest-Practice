#include <stdio.h>

int main() {
	char input;
	while(1) {
		scanf("%c ", &input);
		printf("%c\n", input);
		if(input == 'q')
			break;
	}
}

