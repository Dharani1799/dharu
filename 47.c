#include <stdio.h>

void main() 
{
	int b[100];
	int i,n;
	
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		scanf("%d",&b[i]);
	}
	int max=b[0];
	int min=b[0];
	for(i=1;i<n;i++)
	{
		if(b[i]>max)
		{
			max=b[i];
		}
		if(b[i]<min)
		{
			min=b[i];
		}
	}
	printf("\n%d",min);
	printf("\n%d",max);
}
