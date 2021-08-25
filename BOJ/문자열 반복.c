#include <stdio.h>
#include <string.h>

int main() {
    char input[20];
    int num = 0;
    scanf("%d", &num);
    for(int i=0; i<num; i++) {
        int r = 0;
        scanf("%d", &r);
        scanf("%s", input);
        for(int j=0; j<strlen(input); j++) {
            for(int z=0; z<r; z++){
                printf("%c", input[j]);
            }
        }
        printf("\n");
    }
}
