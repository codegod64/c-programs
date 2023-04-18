// taking input 5 digit and adding them(approach 2)
#include<stdio.h>
#include<stdlib.h>
int main(){
    char d1,d2,d3,d4,d5;
    int i1,i2,i3,i4,i5;
    scanf("%c%c%c%c%c",&d1,&d2,&d3,&d4,&d5);
    i1=d1-'0';
    i2=d2-'0';
    i3=d3-'0';
    i4=d4-'0';
    i5=d5-'0';
    printf("%d",i1+i2+i3+i4+i5);
    return 0;
}