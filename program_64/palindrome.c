#include<stdio.h>  
int main()    
{    
int inp,remainder,newn=0,ogn;    
printf("enter the number=");    
scanf("%d",&inp);    
ogn=inp;    
while(inp>0)    
{    
remainder=inp%10;    
newn=(newn*10)+remainder;    
inp=inp/10;    
}    
if(ogn==newn)    
printf("palindrome number ");    
else    
printf("not palindrome");   
return 0;  
} 