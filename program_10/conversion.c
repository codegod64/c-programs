//weeks,months,years
#include<stdio.h>
void main(){
    int a,b,c,d;
    printf("enter number of days");
    scanf(" %d",&a);
    b=a/7;
    c=a/30;
    d=a/365;
    printf("number of weeks %d\n",b);
    printf("number of months %d\n",c);
    printf("number of years %d\n",d);
}