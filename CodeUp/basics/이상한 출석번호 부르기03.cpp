''' Case 1 '''
#include <stdio.h>

int main() {
	int n, min=23;
	int input[10001] = {0,};
	scanf("%d", &n);
	for(int i=1; i<=n; i++) {
		scanf("%d", &input[i]);
	}
	for(int i=1; i<=n; i++) {
		if(input[i] < min) {
			min = input[i];
		} 
	}
	printf("%d", min);
}


''' Case 2 '''
#include <stdio.h>

int main() {
	int n, temp;
	int input[10001] = {0,};
	scanf("%d", &n);
	for(int i=0; i<n; i++) {
		scanf("%d", &input[i]);
	}
	for(int i=0; i<n; i++) {
		for(int j=0; j<n-(i+1); j++) {
			if(input[j] > input[j+1]) {
				temp = input[j];
				input[j] = input[j+1];
				input[j+1] = temp;
			} 
		}
	}
	printf("%d", input[0]);
}

