#include <stdio.h>
int main() {
    int i=0;
    scanf("%d", &i);
    for(int j=1; j<=i; j++) {
        int a=0, b=0;
        scanf("%d", &a);
        scanf("%d", &b);
        printf("%d\n", a+b);
    }
}
