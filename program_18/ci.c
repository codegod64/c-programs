#include<stdio.h>
#include<math.h>
void main(){
    float a,b,c,d,e,f,g,h;
    printf("enter enter principal,rate,\ntime-period");
    scanf(" %f%f%f",&a,&b,&c);
    d = a * ((pow((1 + b / 100), c)));
    h=d-a;
    printf("interest is %f",h);
}