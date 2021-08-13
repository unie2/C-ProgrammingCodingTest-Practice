#include <stdio.h>

int main() {
	int i;
	scanf("%d", &i);
	if(i<0) {
		printf("%s\n", "minus");
		if(i%2 == 0) {
			printf("%s\n", "even");
		} else {
			printf("%s\n", "odd");
		}
	} else {
		printf("%s\n", "plus");
		if(i%2 == 0) {
			printf("%s\n", "even");
		} else {
			printf("%s\n", "odd");
		}
	}
}

