#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int N,n,i,j,k,len;
    char str[101],cnt[26],used[26];
    for(i=0;i<26;i++)cnt[i]=used[i]=0;
    scanf("%d",&N);
    for(i=0;i<N;i++){
        scanf("%s",str);
        len = strlen(str);
        for(j=0;j<len;j++){
            k=str[j]-'a';
            if(!used[k]){
                cnt[k]++;
                used[k]=1;
            }
        }
        for(j=0;j<26;j++)used[j]=0;
    }
    n=0;
    for(i=0;i<26;i++)
        if(cnt[i]==N)n++;
    printf("%d\n",n);
    return 0;
}
