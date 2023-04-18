#include<stdio.h>
int main(){
    int a,n,size;
    scanf("%d",&n);
    size=(2*n)-1;
    for(int columnvalue=1;columnvalue<size;columnvalue++){
        a=n;
        for(int rowvalue=1;rowvalue<size;rowvalue++){
            printf("%d ",a);
        if(rowvalue>columnvalue){
            a--;
        }
        if(rowvalue<=(2*n)-columnvalue){
            a++;
        }
    }
    printf("\n");
    }
    return 0;
}