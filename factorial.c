#include <stdio.h>
void main()
{
    int n, i;
    long fact = 1;
       scanf("%d",&n);
        for(i=1; i<=n; i++)
        {
           fact = fact*i;
        }
        printf("%d",fact);
}
