''' Case 1 '''
#include <stdio.h>

int main() {
    char input[2001];
    fgets(input, 2000, stdin);
    printf("%s", input);
}


''' Case 2 '''
#include <stdio.h>

int main() {
    char input[2001];
    scanf("%[^\n]", input);
    printf("%s", input);
}

