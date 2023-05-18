#include<stdio.h>
int main(){
    int m,temp1,maxn,minn;
    scanf("%d",&m);
    char arr[m];
    for(int i=0;i<m;i++){
        int k;
        scanf("%d",&k);
        arr[i]=k;
    }
    minn=arr[0];
    maxn=minn;
    for(int j=0;j<m;j++){
        temp1=arr[j];
        if(temp1<minn){minn=temp1;}
        if(temp1>maxn){maxn=temp1;}
    }
    printf("max is %d\nmin is %d",maxn,minn);
    return 0;
}