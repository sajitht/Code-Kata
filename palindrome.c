#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,N,rem,rev=0;;
scanf("%d",&n);
N=n;
while(n!=0)
{
    rem=n%10;
    rev=(rev*10)+rem;
    n=n/10;
}
if(N==rev)
printf("yes");
else
printf("no");
}
