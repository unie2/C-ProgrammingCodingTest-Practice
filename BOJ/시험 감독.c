#include <stdio.h>

int arr[1000001];

int main() {
	int n, a, b;
	int temp, temp1, temp2;
	long long result = 0;
	scanf("%d", &n);
	
	for(int i=0; i<n; i++) {
		scanf("%d", &arr[i]);
	}	
	scanf("%d %d", &a, &b);
	
	result = n;
	for(int i=0; i<n; i++) {
		temp = arr[i] - a;
		
		if(temp > 0) {
			temp1 = temp/b;
			temp2 = temp%b;
			
			if(temp2 > 0) {
				temp2 = 1;
			}
			result += temp1 + temp2;
		}
	}
	printf("%lld\n", result);
}
