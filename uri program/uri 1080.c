#include <stdio.h>
 int main()
 { int n,i,c=0,r=0,s=0,total=0,a;
   char t;
    scanf("%d",&n);
 for(i=0;i<n;i++)
   {
     scanf("%d %c",&a,&t);
      total+=a;
      if(t=='C')
      {
          c +=a;
      }
       else if(t=='R')
       {
           r +=a;
       }
       else if(t=='S')
       {
           s +=a;
       }}


        printf("Total: %d cobaias\n",total);
         printf("Total de coelhos: %d\n",c);
         printf("Total de ratos: %d\n",r);
         printf("Total de sapos: %d\n",s);
         printf("Percentual de coelhos: %.2lf %%\n",(double)c*100.0/total);
         printf("Percentual de ratos: %.2lf %%\n",(double) r*100.0/total);

       printf("Percentual de sapos: %.2lf %%\n",(double)s*100.0/total);
       return 0;
   }






