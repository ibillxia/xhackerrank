#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int T,N,A[100],i,j,flag,x,y,t;
    scanf("%d",&T);
    while(T--){
        flag=0;
        scanf("%d",&N);
        for(i=0;i<N;i++){
            scanf("%d",A+i);
            if(A[i]==1)flag=1;
        }
        if(flag==1){
            printf("YES\n");
            continue;
        }
        for(i=0;i<N;i++){
            for(j=i+1;j<N;j++){
                x=A[i],y=A[j];
                while(y){
                    t=y;
                    y=x%y;
                    x=t;
                }
                if(x<2){
                    flag=1;
                    break;
                }
            }
            if(flag)break;
        }
        if(flag)printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
