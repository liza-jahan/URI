#include<stdio.h>
int main()
{


int t,n;
int in=0; int out=0;
scanf("%d",&t);
while(t--)
{  scanf("%d",&n);
  if(n>=10 && n<=20)
  {
     in++;
  }
  else
  {
    out++;
  }}
  printf("%d in\n",in);
  printf("%d out\n",out);

 return 0;

}
