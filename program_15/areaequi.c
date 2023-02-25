//area of equivalent triangle
#include<stdio.h>
void main(){
    float a,b;
    printf("enter the side of equivalent triangle\n");
    scanf(" %f",&a);
    b=1.732*(a*a/4);
    printf("area of equivalent triangle of side %f is %f",a,b);
}