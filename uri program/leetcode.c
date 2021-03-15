#include<stdio.h>
int main()
{
  int a,b=0,c=0,x,temp,sum=0,num=0,y;
  scanf("%d",&a);
  {
  temp=a;
  while(temp!=0)
  {
    b=temp%10;
    c=c+b;
    temp=temp/10;
}
  num=c;
  if(num>=10)
  {
  while(num!=0)
  {
    y=num%10;
    sum=sum+y;
    num=num/10;

    }

    printf("%d\n",sum);}

    else
    {
     printf("%d\n",c);

    }}
    return 0;
}
