#include<stdio.h>
void main(){
    int a,b;
    float c;
    printf("enter a,b");
    scanf(" %d%d",&a,&b);
    printf("this is sum %d\n",a+b);
    printf("this is difference %d\n",a-b);
    printf("this is product %d\n",a*b);
    c=(float)a/b;
    printf("this is division %f\n",c);
}