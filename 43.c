#include <stdio.h>
#include<string.h>
void main() 
{
	char a1[50],a2[50];
	int i,j;

	scanf("%s",a1);
	
	scanf("%s",a2);
	for(i=0;a1[i]!='\0';i++)
	{
		
	}
	for(j=0;a2[j]!='\0';j++)
	{
		a1[i]=a2[j];
		i++;
	}
	a1[i]='\0';
	printf("\n%s",a1);
	
}
