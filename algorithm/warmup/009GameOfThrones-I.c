#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int findPalind(char *arr)
{

    int flag = 0;
    // Find the required answer here. Print Yes or No at the end of this function depending on your inspection of the string
    int cnt[26],len,i;
    len = strlen(arr);
    for(i=0;i<26;i++)cnt[i]=0;
    for(i=0;i<len;i++)cnt[arr[i]-'a']++;
    for(i=0;i<26;i++){
        if(cnt[i]%2){
            if(!flag)flag=1;
            else {
                flag=2;
                break;
            }
        }
    }
    if(flag==1)flag=0;
    if (flag==0)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
int main() {

    char arr[100001];
    scanf("%s",arr);
    findPalind(arr);
    return 0;
}
