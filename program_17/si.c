#include<stdio.h>
void main(){
    float a,b,c,d;
    printf("enter principal,rate,time-period");
    scanf(" %f%f%f",&a,&b,&c);
    d=(a*b*c)/100;
    printf("interest on principal of %f,rate %f \nand time-period %f is %f",a,b,c,d);
}