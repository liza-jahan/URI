#include<stdio.h>
int main()
 {
   int a,b=0,c=0,temp=0;
   scanf("%d",&a);{
   if(a<0 || a!=0 && a%10==0)
    printf("false");}

   temp=a;
   while(temp!=0)
   {

  c=temp%10;
   b=c+b*10;
  temp =temp/10;

   }
   else if(b==a && b>0)
       printf("ture\n");


return 0;
}
