#include <stdio.h>
#include<string.h>
int main()
{
    char ch1[100],ch2[100];
    scanf("%s",ch1);
    printf("second string\n");
    scanf("%s",ch2);
    int l1=strlen(ch1);
    int l2=strlen(ch2);
    if(l1>l2){
        printf("%s",ch1);
    }else{
        printf("%s",ch2);
    }
    return 0;
}
