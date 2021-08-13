#include <stdio.h>
#include <string.h>

int main() {
    char input[21];
    scanf("%s", input);
    for(int i=0; i<strlen(input); i++) {
        printf("\'%c\'\n", input[i]);
    }
}

