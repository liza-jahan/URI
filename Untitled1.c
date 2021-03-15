#include<stdio.h>
int main()
{
  int i,x,y,min,max,temp=0;
  scanf("%d%d",&x,&y);
  if(x<y)
  {
    max=y;
    min=x;
      }
  else
  { max=x;
    min=y;
  }
for(i=(min+1);i<max;i++)
{
 if(i%2==1 || i%2==-1)
 {
   temp=temp+i;
 }
 }
 printf("%d\n",temp);

 return 0;
}
