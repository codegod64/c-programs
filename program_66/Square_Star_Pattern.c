#include<stdio.h>
int main(){
    int rows;
    scanf("%d",&rows);
    printf("\n*****\n");
    for (int i = 0; i < (rows-2); i++)
    {
        printf("*   *\n");
    }
    printf("*****");
    return 0;
}