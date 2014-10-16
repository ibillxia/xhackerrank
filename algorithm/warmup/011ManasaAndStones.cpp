#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int T,n,a,b,i;
    vector<int> vc;
    scanf("%d",&T);
    while(T--){
        scanf("%d%d%d",&n,&a,&b);
        n--;
        if(a==b){
            printf("%d\n",a*n);
            continue;
        }
        if(a>b)swap(a,b);
        for(i=0;i<=n;i++)
            vc.push_back(a*(n-i)+b*i);
        for(i=0;i<vc.size();i++)
            printf("%d ",vc[i]);
        printf("\n");
        vc.clear();
    }
    return 0;
}
