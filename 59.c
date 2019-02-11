#include <stdio.h>
 void main() {
    int a[10];
    int i;
    int m;
    printf("Enter ten values:");

    for (i = 0; i < 10; i++) {
    scanf("%d", &a[i]);
    }
    
    m = a[0];
    for (i = 0; i < 10; i++) {
if (a[i] > m) {
m= a[i];
    }
    }
    printf(" %d", m);
    
}
