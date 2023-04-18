#include<stdio.h>
int main(){
    int n,size;
   // scanf("%d",&n);
    n = 2;
    size=(2*n)-1;
for (int i = size; i >= 1; i--){
    for (int j = size; j >= 1; j--)
    {
        printf("%d", n);  
    }

    printf("\n");
   
}

    return 0;
}