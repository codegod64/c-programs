#include<stdio.h>
int main(){
    int a,b,i,j;
    int maxand,maxor,maxxor;
    maxand=maxor=maxxor=0;
    scanf("%d%d",&a,&b);
    for ( i=1; i<=a; i++){
        for (j=i+1;j<=a;j++){
            if((i&j)>maxand && (i&j)<b)maxand=i&j;
            if((i|j)> maxor && (i|j)<b)maxor=i|j;
            if((i^j)>maxxor && (i^j)<b)maxxor=i^j;
        }
    }
    printf("%d\n%d\n%d\n",maxand,maxor,maxxor);
    return 0;
}