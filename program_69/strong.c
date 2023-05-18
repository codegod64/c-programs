#include <math.h>
#include <stdio.h>

int main() {
    int a,sum=1,n;
    n=a;
    scanf("%d",&a);
    while(a!=0){
        sum=sum*a;
        a=a-1;
    }
    if (n==sum)
    {
        printf("strong number");
    }else{
        printf("not strong number");
    }
    return 0;
}