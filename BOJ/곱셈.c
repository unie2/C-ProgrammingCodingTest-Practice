#include <stdio.h>
int main(){
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);
    int one = b%10;
    int two = (b%100)/10;
    int three = b/100;
    printf("%d\n", a*one);
    printf("%d\n", a*two);
    printf("%d\n", a*three);
    printf("%d\n", a*b);
}
