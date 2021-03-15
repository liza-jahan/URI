#include<stdio.h>

int main()
{ int t;
  double  a,b,c,x=0,y=0;
  scanf("%d",&t);
  while(t--)
  {
  scanf("%lf%lf%lf",&a,&b,&c);
   x=a*2+b*3+c*5;
   y = x/(2+3+5);
    printf("%.1lf\n",y);

  }
  return 0;
}
