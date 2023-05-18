#include<stdio.h>
void min(int a,int b){
    if(a>b){printf("%d is greater",a);}
    if(a<b){printf("%d is greater",b);}
}
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    min(a,b);
    return 0;
}