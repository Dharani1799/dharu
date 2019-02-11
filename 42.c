#include <stdio.h>
#include<string.h>
void main()
{
	int i;
	char a1[10],a2[10];
	gets(a1);
	gets(a2);
	for(i=0;a1[i]!='\0';i++)
	{
		if(a1[i]>a2[i])
		{
			printf("%s is greater",a1);
		
		}
		else if(a1[i]<a2[i])
		{
			printf("%s is greater",a2);
		}
		else
		{
			printf("both are equal");
		
		}
	}
	
}
