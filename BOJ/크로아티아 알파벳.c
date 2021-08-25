#include <stdio.h>

int main() {
    char input[101];
    int count = 0;
    scanf("%s", input);
    for(int i=0; input[i]!='\0'; i++) {
        if(input[i] == 'c' || input[i]=='s' || input[i]=='z'){
            if(input[i+1]=='=' || input[i+1]=='-')
                continue;
        }
        if(input[i]=='l' || input[i]=='n') {
            if(input[i+1]=='j')
                continue;
        }
        if(input[i] == 'd') {
            if(input[i+1]=='z' && input[i+2]=='=')
                continue;
            if(input[i+1] == '-')
                continue;
        }
        count ++;
    }
    printf("%d", count);
}
