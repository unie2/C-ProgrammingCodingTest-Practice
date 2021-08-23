#include <stdio.h>
int main() {
    int i = 0;
    scanf("%d", &i);
    for(int j=1; j<=i; j++) {
        for(int z=1; z<=i-j; z++) {
            printf(" ");
        }
        for(int k=1; k<=j; k++) {
            printf("*");
        }
        printf("\n");
    }
}
