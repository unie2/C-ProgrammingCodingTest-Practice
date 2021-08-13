#include <stdio.h>

int main() {
	char input, target='a';
	scanf("%c", &input);
	while((int)target <= (int)input) {
		printf("%c ", target);
		target++ ;
	}
}

