#include <stdio.h>
int main() {
    int i=0;
    scanf("%d", &i);
    for(int j=i; j>=1; j--) {
        printf("%d\n", j);
    }
}
