#include <stdio.h>

int main() {
	int i, j, k;
	scanf("%d %d %d", &i, &j, &k);
	int day = 1;
	while(day%i!=0 || day%j!=0 || day%k!=0)
		day ++;
	printf("%d", day);
}

