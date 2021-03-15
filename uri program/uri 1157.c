#include<stdio.h>
int main()
{ int a,sum=0;
double b,c=0;
while(1)
{
 scanf("%d",&a);
  if(a<0)
    break;
else
    {

  sum=sum+a;
 c++;
    }}
    b=sum/c;
 printf("%.2lf\n",b);


return 0;
}
