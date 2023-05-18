#include<stdio.h>
int main(){
    int m,temp,negative=0;
    scanf("%d",&m);
    char arr[m];
    for(int i=0;i<m;i++){
        int k;
        scanf("%d",&k);
        arr[i]=k;
    }
    for(int j=0;j<m;j++){
        temp=arr[j];
        if(temp<0){
            negative++;
        }
    }
    printf("number if negative elements:%d",negative);
    return 0;
}