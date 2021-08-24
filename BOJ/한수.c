#include <stdio.h>

void set(int input) {
    if(input < 100)
        printf("%d", input);
    else {
        int a, b, c, count=99;
        for(int i=100; i<=input; i++) {
            a = i%10;
            b = i/10 %10;
            c = i/100;
            if((a-b) == (b-c))
                count ++;
        }
        printf("%d", count);
    }
}

int main() {
    int input;
    scanf("%d", &input);
    set(input);
}
