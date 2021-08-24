#include <stdio.h>

int main() {
    int n = 0, p=0;
    double score[1001] = {0}, per=0;
    scanf("%d", &n);
    for(int i=0; i<n; i++) {
        int count = 0;
        double avg = 0, result=0;
        scanf("%d", &p);
        for(int j=0; j<p; j++) {
            scanf("%lf", &score[j]);
            avg = avg + score[j];
        }
        result = avg / p;
        for(int z=0; z<p; z++) {
            if(score[z] > result)
                count++;
        }
        per = ((double)count/(double)p) * 100;
        printf("%.3lf%%\n", per);
    }
}
