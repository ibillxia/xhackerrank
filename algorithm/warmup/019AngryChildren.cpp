#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


// It is NOT mandatory to use the provided template. You can handle the IO section differently.

int main() {
    /* The code required to enter n,k, candies is provided*/

    int N, K, unfairness,i;
    scanf("%d%d",&N,&K);
    int d[N];
    for (int i=0; i<N; i++)
        scanf("%d",d+i);

    /** Write the solution code here. Compute the result, store in  the variable unfairness --
    and output it**/
    sort(d,d+N);
    unfairness=d[K-1]-d[0];
    for(i=1;i<N-K;i++)
        if(d[i+K-1]-d[i]<unfairness)unfairness=d[i+K-1]-d[i];
    printf("%d\n",unfairness);
    return 0;
}
