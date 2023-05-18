#include <stdio.h>

int main()
{
    int row,col;
    scanf("%d%d",&row,&col);
    int arr[row][col];
    for(int i=1;i<=row;i++){
        for(int j=1;j<=col;j++){
            int m;
        scanf("%d",&m);
        arr[i][j]=m;
        }
    }
    printf("entering 2nd matrix\n");
    int arr2[row][col];
    for(int i=1;i<=row;i++){
        for(int j=1;j<=col;j++){
            int m;
        scanf("%d",&m);
        arr2[i][j]=m;
        }
    }
    int arr3[row][col];
    for(int i=1;i<=row;i++){
        for(int j=1;j<=col;j++){
            arr3[i][j]=arr[i][j]-arr2[i][j];
        }
    }
    for(int i=1;i<=row;i++){
        for(int j=1;j<=col;j++){
            printf("%d",arr3[i][j]);
        }
        printf("\n");
    }
    return 0;
}