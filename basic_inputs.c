/*basic inputs*/
#include<stdio.h>
void main(){
    int a;
    char b;
    float c;
    double d;
    printf("enter number");
    scanf(" %d",&a);
    printf("enter character");
    scanf(" %c",&b);
    printf("enter float");
    scanf(" %f",&c);
    printf("enter double");
    scanf(" %lf",&d);
    printf("this is int %d\n",a);
    printf("this is int %c\n",b);
    printf("this is int %f\n",c);
    printf("this is int %lf\n",d);
}