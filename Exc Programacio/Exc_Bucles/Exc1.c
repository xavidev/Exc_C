
#include <stdio.h>
int main(void) {
    int a, b, i, j;
    scanf ("%d", &a);
    scanf ("%d", &b);
    i = a;
    j = 1;
    
    while (i <= b) {
      printf ("%d %d\n", i, j);
      j *= 2;
      i += 1;
    }
    
    printf ("%d\n", j);
    return 0;
}
