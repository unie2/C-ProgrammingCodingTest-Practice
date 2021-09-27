#include <stdio.h>

int main() {
	int down[5] = {0, };
	int up[5] = {0, };
	for(int i=0; i<4; i++) {
		scanf("%d %d", &down[i], &up[i]);
	}
	int max = 0;
	int value = 0;
	for(int i=0; i<4; i++) {
		value = value - down[i] + up[i];
		if(value > max) {
			max = value;
		}
	}
	printf("%d", max);
}
