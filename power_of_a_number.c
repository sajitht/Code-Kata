#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,k,power=1;
scanf("%d %d",&n,&k);
if(k>0)
{
 for(i=1;i<=k;i++)
 {
  power=power*n;
 }
}
else if(k<0)
{
power=0;
}
printf("%d",power);
}
