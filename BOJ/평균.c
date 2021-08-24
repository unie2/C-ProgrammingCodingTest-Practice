#include <stdio.h>

int main() {
    int num=0;
    double score[1000] = {0};
    double max=0, avg = 0, result=0;
    scanf("%d", &num);
    for(int i=0; i<num; i++) {
        scanf("%lf", &score[i]);
        if(score[i] > max)
            max = score[i];
    }
    for(int j=0; j<num; j++) {
        score[j] = score[j]/max*100;
        avg += score[j];
        result = avg/(double)num;
    }
    printf("%lf", result);
}
