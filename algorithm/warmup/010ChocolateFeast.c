#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int t, n, c, m;
    scanf("%d", &t);
    while ( t-- )
    {
        scanf("%d%d%d",&n,&c,&m);
        int answer = 0;
        /** Write the code to compute the answer here. **/
        int N=n/c;
        answer+=N;
        while(N>=m){
            answer+=N/m;
            N=N%m+N/m;
        }
        printf("%d\n",answer);
    }
    return 0;
}
