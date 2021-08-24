#include <stdio.h>

int main() {
    int num[42] = {0};
    int s = 0, count = 0;
    for(int i=0; i<10; i++) {
        scanf("%d", &s);
        num[s%42] ++;
    }
    for(int j=0; j<42; j++) {
        if(num[j] != 0)
            count ++;
    }
    printf("%d", count);
}
