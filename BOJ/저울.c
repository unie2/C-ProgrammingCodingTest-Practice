#include <stdio.h>

int main() {
	int n, temp, target=1;
	int input[1001];
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
	for(int i=0; i<n; i++) {
		if(target < input[i])
			break;
		target += input[i];
	}
	printf("%d", target);
}
