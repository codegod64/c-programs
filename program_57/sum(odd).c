#include<stdio.h>
int main(){
    int a,b=0;
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
        if(i%2!=0){
            b=b+i;
    }}
    printf("%d",b);
    return 0;
}