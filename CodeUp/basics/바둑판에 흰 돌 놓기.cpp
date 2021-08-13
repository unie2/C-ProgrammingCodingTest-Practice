#include <stdio.h>

int main() {
	int p[20][20] = {0,};
	int a, b;
	int n;
	scanf("%d", &n);
	for(int i=1; i<=n; i++) {
		scanf("%d %d", &a, &b);
		p[a][b] = 1;
	}
	for(int i=1; i<=19; i++) {
		for(int j=1; j<=19; j++) {
			printf("%d ", p[i][j]);
		}
		printf("\n");
	}
}

