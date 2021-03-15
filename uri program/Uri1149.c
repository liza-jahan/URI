#include<stdio.h>
int main()
{
  int x,y,a,b=0;
  scanf("%d %d",&x,&y);
  while(y<=0)
    scanf("%d",&y);
  for(a=1;a<=y;a++)
  {
    b +=x;
    x++;

    }
    printf("%d\n",b);
    return 0;

}

