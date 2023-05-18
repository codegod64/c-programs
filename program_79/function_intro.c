#include<stdio.h>
int arr_max_min(int arr[],int size){
    int temp1,maxn,minn;
    maxn=arr[0];
    minn=arr[0];
    for(int i=0;i<size;i++){
        temp1=arr[i];
        if(temp1<minn){minn=temp1;}
        if(temp1>maxn){maxn=temp1;}
    }
    return maxn;
}
int main(){
    int size;
    scanf("%d",&size);
    int arr[size];
    for(int j=0;j<size;j++){
        scanf("%d",&arr[j]);
    }
    printf("%d%d",arr_max_min(arr[size],size));
    return 0;
}





/*#include <stdio.h>
#include<math.h>
int arr_max()




int main()
{
    int test_case,ni,temp1,maxn,minn;
    scanf("%d%d",&test_case,&ni);
    int arr[ni],arr_sol[2*test_case];
    for(int i=1;i<=test_case;i++){
        for(int j=0,j<ni;j++){
            scanf("%d",&temp1);
            arr[j]=temp1;
        }
        for(int m=0;m<=j;m++){
            maxn=arr[0];
            
        }
    }
    return 0;
}*/