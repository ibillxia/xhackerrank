#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int N,T,i,j,k,ii,m;
    char d[100000];
    scanf("%d%d",&N,&T);
    for(i=0;i<N;i++){
        scanf("%d",&k);
        d[i]=(char)k;
    }
    for(k=0;k<T;k++){
        scanf("%d%d",&i,&j);
        m=3;
        for(ii=i;ii<=j;ii++){
            if(d[ii]<m)m=d[ii];
            if(m==1)break;
        }
        printf("%d\n",m);
    }
    return 0;
}
