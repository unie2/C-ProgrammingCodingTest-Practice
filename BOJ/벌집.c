#include <stdio.h>

int main() {
    int input, min=2, diff=5, count=2;
    scanf("%d", &input);
    if(input == 1){
        printf("%d", input);
        return 0;
    }
    while(1){
        if(input>=min && input<=min+diff) {
            printf("%d", count);
            return 0;
        }
        min = min + diff + 1;
        diff += 6;
        count ++;
    }
}
