#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,k,power=1;
scanf("%d %d",&n,&k);
for(i=1;i<=k;i++)
{
power=power*n;
}
printf("%d",power);
}
