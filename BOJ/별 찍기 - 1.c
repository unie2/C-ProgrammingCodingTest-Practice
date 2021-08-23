#include <stdio.h>
int main() {
    int i=0;
    scanf("%d", &i);
    for(int j=0; j<i; j++) {
        for(int z=0; z<=j; z++) {
            printf("*");
        }
        printf("\n");
    }
}
