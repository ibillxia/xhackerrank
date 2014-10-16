#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int T,A,B,cnt,i;
    scanf("%d",&T);
    while(T--){
        scanf("%d%d",&A,&B);
        cnt=0;i=1;
        while(i*i<=B){
            if(i*i>=A)cnt++;
            i++;
        }
        printf("%d\n",cnt);
    }
    return 0;
}
