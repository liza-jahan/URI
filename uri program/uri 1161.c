#include<stdio.h>
int main()
{ int a,t,i,b,c=0;;
scanf("%d",&t);
 while(t--)
 {
    scanf("%d",&a);

    b=a/2;
 c=0;
    for(i=1;i<=b;i++)
    {

     if(a%i==0)
    c=c+i;

    }
    if(c==a)

   printf("%d eh perfeito\n",a) ;
   else
    printf("%d nao eh perfeito\n",a);

 }
 return 0;
 }








