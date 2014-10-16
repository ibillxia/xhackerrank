#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int T,i;
    long long d[52],N,f0=1,f1=1;
    d[0]=d[1]=i=1;
    while(1){
        d[i+1]=d[i]+d[i-1];
        if(d[i]>1e10)break;
        i++;
    }

    scanf("%d",&T);
    while(T--){
        scanf("%lld",&N);
        for(i=0;i<50;i++){
            if(d[i]==N){printf("IsFibo\n");break;}
            else if(d[i]>N){printf("IsNotFibo\n");break;}
        }
    }
    return 0;
}
