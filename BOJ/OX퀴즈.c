#include <stdio.h>
#include <string.h>

int main() {
    char ox[80];
    int num=0;
    scanf("%d", &num);
    for(int i=0; i<num; i++) {
        int result=0, count=1;
        scanf("%s", ox);
        for(int j=0; j<strlen(ox); j++) {
            if(ox[j] == 'O') {
                result += count;
                count++;
            }
            if(ox[j] == 'X') {
                count = 1;
            }
        }
        printf("%d\n", result);
    }
}
