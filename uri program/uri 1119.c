#include<stdio.h>
int main()
{ int x,y,i,b,sum=0;
scanf("%d%d",&x,&y);
if(x<y)
for(i=x;i<=y;i++)
{

    if(i%13!=0)
{
    b++;
 sum=sum+i;
}}
 else
 {
  for(i=y ; i<=x; i++)
    if(i%13 !=0)
  {
    b++;
    sum=sum+i;
  }}

   printf("%d\n",sum);



return 0;
}
