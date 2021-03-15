
#include<stdio.h>
int main()
{
   int a,i,j,X,Y,n=0;
   scanf("%d%d",&X,&Y);
   for(i=1;i<=Y;i++)
   {
     n++;
     if(n==X)

     printf("%d",i);
     else printf("%d ",i);
     if(n==X)
     {
         n=0;
         printf("\n");
     }
   }

 return 0;
}
