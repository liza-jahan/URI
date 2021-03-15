#include<stdio.h>
int main()
{
 int n,X;
 scanf("%d",&n);
 while(n--)
 { scanf("%d",&X);
 if(X==0)

   {printf("Null\n");}

 else if(X %2 == 0)   {
        if(X>0)
   {
       printf("EVEN POSITIVE\n");}
  else
  {printf("EVEN NEGATIVE\n");}}

  else {    if(X>0)

   {printf("ODD POSITIVE\n");}

  else
  {printf("ODD NEGATIVE\n");}

 }
 }
  return 0;

 }







