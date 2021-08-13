#include <stdio.h>

int main() {
	int i;
	scanf("%d", &i);
	if(i>=90 && i<=100) {
		printf("%s", "A");
	} else if(i>=70 && i<=89) {
		printf("%s", "B");
	} else if(i>=40 && i<=69) {
		printf("%s", "C");
	} else {
		printf("%s", "D");
	}
}
