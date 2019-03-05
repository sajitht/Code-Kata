#include <conio.h>

int main()

{

int r,x,s,n1,n2,i;
scanf("%d %d",&n1,&n2);
for(i=n1+1;i<n2;++i)
{


 x=i;

 s=0;

  while(x!=0)
  {

   r=x%10;

   s=s+(r*r*r);

   x=x/10;

  }

   if(s==i)
   {
    printf("%d ",i);
    }
 }

return 0;

}
