//pow using loop
#include<stdio.h>
void main(){
    int a,b,c;
    printf("enter a,b");
    scanf(" %d%d",&a,&b);
    c=1;
    while(b>0){
        c=c*a;
        b=b-1;
    }
    printf("this is %d raised to %d equals %d",a,b,c);
}