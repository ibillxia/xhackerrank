#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int T;
    long long N,i,m;
    scanf("%d",&T);
    for(i=0;i<T;i++){
        scanf("%lld",&N);
        m = (N>>1)*(N-(N>>1));
        printf("%lld\n",m);
    }
    return 0;
}
