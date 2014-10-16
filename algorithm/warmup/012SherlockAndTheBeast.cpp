#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int T,N,n3,n5,i;
    scanf("%d",&T);
    while(T--){
        scanf("%d",&N);
        n3=0,n5=N;
        while(n5>0 && n5%3){
            n5-=5;
            n3+=5;
        }
        if(n5<0)printf("-1\n");
        else{
            for(i=0;i<n5;i++)printf("5");
            for(i=0;i<n3;i++)printf("3");
            printf("\n");
        }
    }
    return 0;
}
