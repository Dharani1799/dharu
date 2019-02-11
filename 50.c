#include <stdio.h>
 void main()
{
    unsigned int num;
    int a[32] = {0}, j = 0, n, i, c = 0;
 

    scanf("%d", &num);
    while (num != 0)
    {
        n = num % 2;
        if (n == 1)
            c++;        
        num = num / 2;
    }
    if (c == 1)
        printf("YES\n");
    else
        printf("NO\n");

}
