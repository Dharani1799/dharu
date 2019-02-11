#include <stdio.h>

void main() {
	int n,s=0,i,av;
	scanf("%d",&n);
	int a[1000];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);	
	}
	for(i=0;i<n;i++)
	{
		s=s+a[i];
	}
	av=s/n;
	printf("%d",av);
	
}
