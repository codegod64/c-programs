#include<stdio.h>
#include<string.h>
int main(){
    long a,b=0;
    int count=0,original_number,new_number,c;
    scanf("%ld",&a);
    b=a;
    do{
        a/=10;
        count++;
    }while(a!=0);
    int i=count-1;
    printf("%d",i);
    do{
        c=b%10;
        b/=10;
        new_number=(pow(10,i))*c;
        i--;
    }while(i==0);
    printf("%ld",new_number);
}