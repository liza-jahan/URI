#include<stdio.h>
int main()
{
 int a,b,c=0,d;
 scanf("%d",&a);
 while(a--)
 {
   scanf("%d",&b);{
   c=0;
   for(d=1;d<b;d++)

    if(b%d==0){
   c+=d;
   }}
   if(c==1)
    printf("%d eh primo\n",b);
    else
    printf("%d nao eh primo\n",b);


 }
 return 0;

}
