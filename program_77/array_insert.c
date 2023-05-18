#include<stdio.h>
int main(){
    int size=0,position=0,element=0;
    scanf("%d%d%d",&size,&position,&element);
    char arr[size],arr2[size+1];
    for(int i=0;i<size;i++){
        //scan
        int k;
        scanf("%d",&k);
        arr[i]=k;
    }
    for(int j=0;j<position;j++){
        arr2[j]=arr[j];
    }
    arr2[position]=element;
    for(int k=position+1;k<size+1;k++){
        arr2[k]=arr[k-1];
    }
    for(int t=0;t<size;t++){
        printf("%d",arr2[t]);
    }
    return 0;
}
//incomplete