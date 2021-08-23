#include <stdio.h>
int main() {
    int n=0, x=0;
    scanf("%d", &n);
    scanf("%d", &x);
    for(int j=1; j<=n; j++){
        int num=0;
        scanf("%d", &num);
        if(num<x) {
            printf("%d ", num);
        }
    }
}
