#include<stdio.h>
int main(){
    char a[100];
    int i=0,len=0;
    scanf("%s",a);
    while(a[i]){
        i++;
        len++;
    }
    printf("%d",len);
    return 0;
}