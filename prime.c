#include<stdio.h>
void main()
{
    int i,N,flag=1;
    scanf("%d",&N);
    if(N>1)
     {  
       for(int i=2;i<=N/2;i++)
       {   
        if(N%i==0)
         {
             flag=0;
             break;
         }

         }
    if(flag==1)
    printf("yes");
    else 
    printf("no");
    }
  } 
