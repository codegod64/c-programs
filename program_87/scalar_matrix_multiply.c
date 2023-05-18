#include <stdio.h>
int main()
{
    int row1,col1,k=0,sum=0;
    scanf("%d%d",&row1,&col1);
    int arr[row1][col1];
    for(int i=0;i<row1;i++){
        for(int j=0;j<col1;j++){
            int m;
        scanf("%d",&m);
        arr[i][j]=m;
        }
    }
    printf("entering 2nd matrix\n");
    int row2,col2;
    scanf("%d%d",&row2,&col2);
    int arr2[row2][col2];
    for(int i=0;i<row2;i++){
        for(int j=0;j<col2;j++){
            int m;
        scanf("%d",&m);
        arr2[i][j]=m;
        }
    }
    if(row1==col2){
    int arr3[row1][col2];
    for(int i=0;i<row1;i++){
        for(int j=0;j<col2;j++){
            for(int e=0;e<col1;e++){
                k=arr[i][e]*arr2[e][j];
                sum=sum+k;
            }
            arr3[i][j]=sum;
            sum=0;
        }
    }
    for(int i=0;i<row1;i++){
        for(int j=0;j<col2;j++){
            printf("%d  ",arr3[i][j]);
        }
        printf("\n");
    }
    }
    return 0;
}