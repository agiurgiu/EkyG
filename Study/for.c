#include <stdio.h>

void main (void)
{
    int i,n=10, suma=0;
    i=1;
    for(i=1;i<=n;)
    {
        i=i+1;
        suma=suma+i;
    }
    printf("suma este %d\n", suma);
}
