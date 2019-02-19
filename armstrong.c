#include<stdio.h>
void main()
{
    int n,n1,rem=0,ans=0;
    scanf("%d",&n);
    n1=n;
    while(n!=0)
    {
       rem=n%10;
       ans=ans+(rem*rem*rem);
       n=n/10;
    }
    if(ans==n1)
    printf("yes");
    else
    printf("no");
        
}
