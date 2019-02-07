#include<stdio.h>
void main()
{
    int i,N1,N2;
    scanf("%d %d",&N1,&N2);
    for(i=N1+1;i<N2;i++)
    {
        if(i%2==0)
        {
            printf("%d\t",i);
        }
    }
}
 
