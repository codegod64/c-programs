#include<stdio.h>
#include<string.h>
int main(){
    long long a;
    int count=0;
    scanf("%lld",&a);
    do{
        a/=10;
        count++;
    }while(a!=0);
    printf("%d",count);
}