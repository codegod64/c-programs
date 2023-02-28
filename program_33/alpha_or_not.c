#include<stdio.h>
int main(){
    char c;
    scanf("%c",&c);
    if((int)c>=65 && (int)c<=122){
        printf("%c is aplhabet",c);
    }
    else{
       printf("%c is not alphabet",c); 
    }
    return 0;
}