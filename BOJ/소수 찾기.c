#include <stdio.h>

int main() {
	int n, input, count=0;
	scanf("%d", &n);
	for(int i=0; i<n; i++) {
		scanf("%d", &input);
		int check = 0;
		if(input == 1)
			continue;
		for(int j=2; j<input; j++) {
			if(input%j == 0)
				check = 1;
		}
		if(check == 0)
			count ++;
	}
	printf("%d", count);
}
