#include <stdio.h>
void main()
{
	int a,b,i,j;
	scanf("%d%d",&a,&b);
    for( i=a;i<b;i++)
    {
        for( j=a;j<i;j++)
        {
            if(i%j==0)
                break;
            else if(i==j+1)
                printf("%d\n",i);
        }
 
    }
    
}
