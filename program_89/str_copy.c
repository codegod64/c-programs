#include<stdio.h>
int main (){
    char a[100];
    int i=0;
    scanf("%s",a);
    char b[100];
    for(i=0;a[i];i++){
        b[i]=a[i];
    }
    b[i]='\0';
    printf("%s",b);
    return 0;
}