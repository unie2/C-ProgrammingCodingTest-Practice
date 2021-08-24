#include <stdio.h>
int main() {
    int count=0, num=0;
    scanf("%d", &num);
    int num2 = num, a, b, c;
    while(1){
        a = num / 10;
        b = num % 10;
        c = (a+b) % 10;
        num = (b*10)+c;
        count++;
        if(num == num2) {
            break;
        }
    }
    printf("%d", count);
}
