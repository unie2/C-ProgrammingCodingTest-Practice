#include <stdio.h>

int main() {
    int A=0, B=0, C=0, D[10]={0}, num=0;
    scanf("%d %d %d", &A, &B, &C);
    num = A*B*C;
    while(num>0) {
        int a = num%10;
        D[a] ++;
        num /= 10;
    }
    for(int i=0; i<10; i++) {
        printf("%d\n", D[i]);
    }
}
