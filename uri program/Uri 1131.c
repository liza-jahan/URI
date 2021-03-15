#include<stdio.h>
int main()
{ int a,b=0,x=0,y=0;

 while(1)
 { scanf("%d",&a);

     if(a==4)
 break;

 else
 { if(a==1) b++;


  else if(a==2) x++;
  else if(a==3) y++;
  else continue;
  }}
  printf("MUITO OBRIGADO\n");
   printf("Alcool: %d\n",b);
     printf("Gasolina: %d\n",x);
   printf("Diesel: %d",y);

 return 0;








}
