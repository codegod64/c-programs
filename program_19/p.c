#include<stdio.h>
#include<math.h>
int main(){
    char ch;
    int a;
    scanf("%c",&ch);
    a=isalpha(ch);
    if(a=="2"){
        if(ch=="a" || ch=="e" || ch=="i" || ch=="o" || ch=="u" ||
        ch=="A" || ch=="E" || ch=="I" || ch=="O" || ch=="U"){
            printf("Vowel.");
        }else {
            printf("Consonant.");
        }
    }
    else{printf("Not an alphabet.");}
    return 0;
}