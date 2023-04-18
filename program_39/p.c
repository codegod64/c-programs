#include<stdio.h>
int main(){
    char a,b[10],c[20];
    gets(a);
    gets(b);
    scanf("%[^\n]%*c", c);
    puts(a);
    puts(b);
    puts(c);
    return 0;
}