#include <stdio.h>
#include <math.h>

int main()
{
    int low, high, i, t1, t2, rem, n = 0, result = 0;

   
    scanf("%d %d", &low, &high);


    for(i = low + 1; i < high; ++i)
    {
        t2 = i;
        t1 = i;

  
        while (t1 != 0)
        {
            t1 /= 10;
            ++n;
        }

       
        while (t2 != 0)
        {
            rem= t2 % 10;
            result += pow(rem, n);
            t2 /= 10;
        }

       
        if (result == i) {
            printf("%d ", i);
        }

        
        n = 0;
        result = 0;

    }
    
}
