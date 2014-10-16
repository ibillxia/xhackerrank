#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int N,M,a,b,k;
    long long cnt;
    scanf("%d%d",&N,&M);
    cnt=0;
    while(M--){
        scanf("%d%d%d",&a,&b,&k);
        cnt+=(long long)k*(b-a+1);
    }
    printf("%lld\n",cnt/N);
    return 0;
}
