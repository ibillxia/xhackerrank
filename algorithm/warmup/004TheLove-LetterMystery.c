#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int T,i,j,len,m,t;
    char str[10001];
    scanf("%d",&T);
    for(i=0;i<T;i++){
        scanf("%s",str);
        len = strlen(str);
        m=0;
        for(j=0;j<len/2;j++){
            t = str[j]-str[len-j-1];
            m += t>0 ? t: -t;
        }
        printf("%d\n",m);
    }
    return 0;
}
