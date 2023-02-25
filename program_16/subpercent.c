#include<stdio.h>
void main(){
    float a,b,c,d,e,f,g,h;
    printf("enter  the marks of all subjects\n");
    scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);
    printf("enter total marks \n");
    scanf("%f",&f);
    /**/
    g=((a+b+c+d+e)/f);
    h=g*100;
    printf("the percentage is %f",h);
}