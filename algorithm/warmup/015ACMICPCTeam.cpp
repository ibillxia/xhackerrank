#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int N,M,i,j,k,m,n,t;
    char s[500][500];
    scanf("%d%d",&N,&M);
    for(i=0;i<N;i++)scanf("%s",s[i]);
    m=n=0;
    for(i=0;i<N;i++){
        for(j=i+1;j<N;j++){
            t=0;
            for(k=0;k<M;k++){
                if(s[i][k]=='1'||s[j][k]=='1')t++;
            }
            if(t>m){m=t;n=0;}
            if(t==m)n++;
        }
    }
    printf("%d\n%d\n",m,n);
    return 0;
}
