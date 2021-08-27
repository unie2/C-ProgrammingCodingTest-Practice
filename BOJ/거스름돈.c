#include <stdio.h>

int main() {
	int input, money, result=0;
	scanf("%d", &input);
	money = 1000 - input;
	result += money / 500;
	money %= 500;
	result += money / 100;
	money %= 100;
	result += money / 50;
	money %= 50;
	result += money / 10;
	money %= 10;
	result += money / 5;
	money %= 5;
	result += money / 1;
	
	printf("%d", result);
} 
