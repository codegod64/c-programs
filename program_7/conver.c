/*conversion*/
#include<stdio.h>
void main(){
    float a,b,c;
    printf("enter the lenght in cm\n");
    scanf("%f",&a);
    b=(a*0.01);
    c=a*0.00001;
    printf("lenght in meters%f\n",b);
    printf("lenght in kilometers%f\n",c);
}