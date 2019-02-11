#include <stdio.h>
int main()
{
   int n;
    int c = 0;

    printf("Enter an integer: ");
    scanf("%d", &n);

    while(n != 0)
    {
       
        n /= 10;
        ++c;
    }

    printf(" %d", c);
}
