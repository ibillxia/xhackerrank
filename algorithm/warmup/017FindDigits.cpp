#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int T,k,cnt;
    long long N,tmp;
    scanf("%d",&T);
    while(T--){
        scanf("%lld",&N);
        cnt=0,tmp=N;
        while(tmp){
            k=tmp%10;
            tmp/=10;
            if(k && N%k==0)cnt++;
        }
        printf("%d\n",cnt);
    }
    return 0;
}
