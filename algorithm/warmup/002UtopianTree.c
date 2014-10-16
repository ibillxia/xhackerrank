#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int T,N,i,j;
    long long h;
    scanf("%d",&T);
    for(i=0;i<T;i++){
        scanf("%d",&N);
        h=1;
        for(j=1;j<=N;j++){
            if(j%2)h=h<<1;
            else h++;
        }
        printf("%lld\n",h);
    }
    return 0;
}

