#include <stdio.h>
int main() {
    int T=0;
    scanf("%d", &T);
    for(int i=1; i<=T; i++) {
        int A=0, B=0;
        scanf("%d", &A);
        scanf("%d", &B);
        printf("Case #%d: %d + %d = %d\n", i, A, B, A+B);
    }
}
