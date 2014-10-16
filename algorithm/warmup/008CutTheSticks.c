#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int N,d[1000],i,m,n;
    scanf("%d",&N);
    for(i=0;i<N;i++)scanf("%d",d+i);
    while(1){
        m=1000;
        for(i=0;i<N;i++)
            if(d[i]&&d[i]<m)m=d[i];
        n=0;
        for(i=0;i<N;i++)
            if(d[i]) d[i]-=m,n++;
        if(!n)break;
        printf("%d\n",n);
    }
    return 0;
}
