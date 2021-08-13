#include <stdio.h>

int main() {
	int h,w,n, l, d, x, y; //세로, 가로, 막대수, 막대길이, 방향, 좌표  
	scanf("%d %d", &h, &w);
	int p[101][101] = {0, };
	
	scanf("%d", &n);
	for(int i=1; i<=n; i++) {
		scanf("%d %d %d %d", &l, &d, &x, &y);
		int count = 0;
		for(int j=1; j<=l; j++) {
			if(d == 0) { //가로 
				p[x][y+count] = 1;
				count++;
			} else {
				p[x+count][y] = 1;
				count++;
			}
		}
	}
	for(int i=1; i<=h; i++) {
		for(int j=1; j<=w; j++) {
			printf("%d ", p[i][j]);
		}
		printf("\n");
	}
}

