# include <stdio.h> 

void main() 
{ 
 int i, n, a ; 

 scanf("%d", &n) ; 
  
 scanf("%d", &a) ; 
 printf("\nThe numbers divisible by %d are :\n\n", a) ; 
 for(i = 1 ; i <= n ; i++) 
  if(i % a == 0) 
   printf("%d\t", i) ; 
}
