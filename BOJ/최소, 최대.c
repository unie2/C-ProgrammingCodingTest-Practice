#include <stdio.h>
int main() {
    int n, num, min = 1000000, max = -1000000;
    scanf("%d", &n);
    for(int i=1; i<=n; i++) {
        scanf("%d", &num);
        if(num > max)
            max = num;
        if(num < min)
            min = num;
    }
    printf("%d %d", min, max);
}
