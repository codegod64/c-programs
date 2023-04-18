// taking input 5 digit and adding them(approach 1)
#include<stdio.h>
int main(){
    int a,t,i,r;
    scanf("%d",&a);
    r=0;
    for(i=0;i<5;i++){
        t=a%10;
        r=r+t;
        a=a/10;     
    }
    printf("%d",r);
    return 0;
}