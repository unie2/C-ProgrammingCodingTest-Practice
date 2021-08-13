#include <stdio.h>

int main() {
	int p[20][20] = {0,};
	int n, a, b;
	for(int i=1; i<=19; i++) {
		for(int j=1; j<=19; j++) {
			scanf("%d", &p[i][j]);
		}
	}
	scanf("%d", &n);
	for(int i=1; i<=n; i++) {
		scanf("%d %d", &a, &b);
		for(int j=1; j<=19; j++) {
			p[a][j] = !p[a][j];
			p[j][b] = !p[j][b];
		}	 
	}
	for(int i=1; i<=19; i++) {
		for(int j=1; j<=19; j++) {
			printf("%d ", p[i][j]);
		}
		printf("\n");
	}
}

