#include<stdio.h>
#include<conio.h>
void main()
{
int sum=0,i,N,K,arr[100];
scanf("%d %d",&N,&K);
for( i=1;i<=N;i++)
{
scanf("%d",&arr[i]);
}
for( i=1;i<=K;i++)
{
    sum=sum+arr[i];
}
printf("%d",sum);
}
