#include <stdio.h>

int main() {
    char input[100] = {0};
    scanf("%s", input);
    for(int i=97; i<=122; i++) {
        int num = 0;
        while(input[num] != 0) {
            if(input[num] == (char)i)
                break;
            num++;
        }
        if(input[num] == (char)i)
            printf("%d ", num);
        else
            printf("-1 ");
    }
}
