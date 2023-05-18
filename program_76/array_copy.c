#include<stdio.h>
int main(){
    int m;
    scanf("%d",&m);
    char arr[m];
    char arr2[m];
    for(int i=0;i<m;i++){
        int k;
        scanf("%d",&k);
        arr[i]=k;
    }
    printf("copying array to arr2,and printing\n");
    for(int j=0;j<m;j++){
        arr2[j]=arr[j];
    }
    for(int p=0;p<m;p++){
        printf("%d",arr2[p]);
    }
    return 0;
}