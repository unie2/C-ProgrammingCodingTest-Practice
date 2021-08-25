#include <stdio.h>

int main() {
    int input[1001];
    int num, min, index, temp;
    scanf("%d", &num);
    for(int i=0; i<num; i++ ){
        scanf("%d", &input[i]);
    }
    for(int j=0; j<num; j++) {
        min = 1001;
        for(int k=j; k<num; k++) {
            if(input[k] < min) {
                min = input[k];
                index = k;
            }
        }
        temp = input[j];
        input[j] = input[index];
        input[index] = temp;
    }
    for(int i=0; i<num; i++) {
        printf("%d\n", input[i]);
    }
}
