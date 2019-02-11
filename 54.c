#include <stdio.h>
 
void main() 
{
	int n,even;
	
	scanf("%d",&n);
	if(n%2==0)
	{
		even=n-2;	
	}
	else
	{
		even=n-1;
	}
	printf("\n%d",even);
}
