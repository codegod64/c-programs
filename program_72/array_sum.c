#include<stdio.h>
int main(){
    int m,sum=0,p;
    scanf("%d",&m);
    char arr[m];
    for(int i=0;i<m;i++){
        int k;
        scanf("%d",&k);
        arr[i]=k;
    }
    for(int j=0;j<m;j++){
        p=arr[j];
        sum+=p;
    }
    printf("%d",sum);
    return 0;
}