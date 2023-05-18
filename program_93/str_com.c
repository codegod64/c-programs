#include<stdio.h>
#include<string.h>
int main(){
    char a[100],b[100];
    scanf("%s",a);
    scanf("%s",b);
    int k=strlen(a),flag=0;
    int l=strlen(b);
    if(k!=l){
        printf("not equal1");
    }else{
        for(int i=0;i<k;i++){
            if(a[i]!=b[i]){
                flag=1;
                break;
            }
        }
    }
    if(flag==0){
        printf("equal");
    }else{
        printf("not equal");
    }
    return 0;
}