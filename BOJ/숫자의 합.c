#include <stdio.h>

int main() {
    int num=0, result=0;
    char n[100];
    scanf("%d", &num);
    for(int i=0; i<num; i++) {
        scanf("%s", n);
    }
    for(int j=0; j<num; j++) {
        result = result + (int)(n[j] - '0');
    }
    printf("%d", result);
}
