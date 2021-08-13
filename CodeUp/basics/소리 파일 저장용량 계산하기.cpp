#include <stdio.h>

int main() {
	double h, b, c, s;
	scanf("%lf %lf %lf %lf", &h, &b, &c, &s);
	printf("%.1lf MB", (h*b*c*s)/8388608);
}

