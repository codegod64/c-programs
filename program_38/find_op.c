#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c,sum,product,difference1,difference2,mod,divide1,divide2;
    scanf("%d %d %d",&a,&b,&c);
    sum=a+b;
    product=a*b;
    difference1=a-b;
    difference2=b-a;
    mod=a%b;
    divide1=a/b;
    divide2=b/a;
    if(sum==c){
        printf("+ ");
    }
    if(product==c){
        printf("* ");
    }
    if(difference1==c || difference2==c){
        printf("- ");
    }
    if(mod==c){
        printf("%% ");
    }
    if(divide1==c || divide2==c){
        printf("/ ");
    }
    return 0;
}