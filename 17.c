#include<stdio.h>  
 void main()    
{    
int n,r,sum=0,t;    
printf("enter the number");    
scanf("%d",&n);    
t=n;    
while(n>0)    
{    
r=n%10;    
sum=sum+(r*r*r);    
n=n/10;    
}    
if(t==sum)    
printf("yes ");    
else    
printf("no");    
}   
