#include<stdio.h>
#include<conio.h>
void main()
{
int COUNT,N;
scanf("%d",&N);
while(N!=0)
{
    N=N/10;
    COUNT++;
}
printf("%d",COUNT);
}
