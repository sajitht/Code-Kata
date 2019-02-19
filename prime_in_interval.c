#include<stdio.h>
void main()
{
    int i,j,N1,N2,flag;
    scanf("%d %d",&N1,&N2);
    while(N1<N2)
    {
            flag=1;
         for(int i=2;i<=N1/2;i++)
          {   
          if(N1%i==0)
           {
             flag=0;
             break;
           }
          }
          if(flag==1)
          {
              printf("%d\t",N1);
          }
          N1++;
    }
}
      
