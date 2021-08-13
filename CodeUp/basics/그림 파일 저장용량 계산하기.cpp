#include <stdio.h>

int main() {
	double h, b, c, s;
	scanf("%lf %lf %lf", &h, &b, &c);
	printf("%.2lf MB", (h*b*c)/8388608);
}

