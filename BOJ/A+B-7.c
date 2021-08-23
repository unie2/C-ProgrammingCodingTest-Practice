#include <stdio.h>
int main() {
    int T;
    scanf("%d", &T);
    for(int j=1; j<=T; j++) {
        int A=0, B=0;
        scanf("%d", &A);
        scanf("%d", &B);
        printf("Case #%d: ", j);
        printf("%d\n", A+B);
    }
}
