#include <stdio.h>

int main() {
	int p[11][11] = {0, };
	for(int i=1; i<=10; i++) {
		for(int j=1; j<=10; j++) {
			scanf("%d", &p[i][j]);
		}
	}
	
	int x = 2;
	int y = 2;
	while(1) {
		if(p[x][y] == 0) {
			p[x][y] = 9;
			y++ ;
		}
		if(p[x][y] == 1) {
			y-- ;
			x++ ;
		}
		if(p[x][y] == 2) {
			p[x][y] = 9;
			break;
		} else if (p[x][y+1] == 1 && p[x+1][y] == 1) {
			if(p[x][y] == 0)
				p[x][y] = 9;
			break;
		}
	}
	
	for(int i=1; i<=10; i++) {
		for(int j=1; j<=10; j++) {
			printf("%d ", p[i][j]);
		}
		printf("\n");
	}
}

