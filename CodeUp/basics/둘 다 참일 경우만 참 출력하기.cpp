''' Case 1 '''
#include <stdio.h>

int main() {
	int i, j;
	scanf("%d %d", &i, &j);
	if(i == j && i == 1)
		printf("1");
	else
		printf("0");
}


''' Case 2 '''
#include <stdio.h>

int main() {
	int i, j;
	scanf("%d %d", &i, &j);
	printf("%d", i&&j);
}

