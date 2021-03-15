#include<stdio.h>
int main()

{
   int i, n,a,b=0,po=0,sum=0,ne=0;
   for(i=0;i<5;i++)
   {
       scanf("%d",&n);
         if(n>0)
        {
          po++;
        }
        else{
                if(n !=0)
              {
                  ne++;}}

       if(n%2==0)
       {
          sum++;
       }
       else
       {
           b++;
       }}


        printf("%d valor(es) par(es)\n",sum);
        printf("%d valor(es) impar(es)\n",b);
        printf("%d valor(es) positivo(s)\n",po);
        printf("%d valor(es) negativo(s)\n",ne);
        return 0;

   }





