#include <stdio.h>

int main() {
	int arr[6] = {0,};
	for(int i=0; i<5; i++) {
		scanf("%d", &arr[i]);
	}
	int min = 2000;
	for(int i=0; i<3; i++) {
		if(min > arr[i]) {
			min = arr[i];
		}
	}
	int drink = arr[3] < arr[4] ? arr[3] : arr[4];
	printf("%d", min + drink - 50);
}
