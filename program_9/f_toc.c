#include<stdio.h>
void main(){
    float a,b;
    printf("enter the temperature in fahrenheit\n");
    scanf("%f",&a);
    b=(a-32)*.5556;
    printf("the temperature in celcius is %f",b);
}