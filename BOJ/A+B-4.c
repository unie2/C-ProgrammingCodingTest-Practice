#include <stdio.h>
int main() {
    int A=0, B=0, n=5;
    char ch;
    while(scanf("%d %d", &A, &B) != EOF) {
        printf("%d\n", A+B);
    }
}
