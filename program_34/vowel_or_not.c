#include<stdio.h>
int main(){
    char c;
    scanf("%c",&c);
    if((int)c>=65 && (int)c<=122){
        if((int)c == 65 || (int)c == 69 || (int)c == 73 || (int)c == 79 || (int)c == 85 
       || (int)c == 97 || (int)c == 101 || (int)c == 105 || (int)c == 111 || (int)c == 117){
        printf("%c is vowel",c);
       }
       else{
        printf("%c is consonent",c);
       }
    }
    else{
       printf("%c is invalid input",c); 
    }
    return 0;
}