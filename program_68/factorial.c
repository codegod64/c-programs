#include <math.h>
#include <stdio.h>

int main() {
    int a,sum=1;
    scanf("%d",&a);
    while(a!=0){
        sum=sum*a;
        a=a-1;
    }
    printf("%d",sum);
    return 0;
}