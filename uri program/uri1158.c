#include<stdio.h>
int main()
{ int a,b,c=0,d,t,x,y;
scanf("%d",&t);
while(t--)
{
  scanf("%d %d",&x,&y);
  if(x%2==1)
  {
        c=0;

    for(b=1;b<=y;b++)

  {

     c = c+x;
     x = x+2;
      }
      printf("%d\n",c);}
    else{

        x++;
        c=0;
        for(b=1;b<=y;b++)
        {
           c=c+x;
           x=x+2;

        }
        printf("%d\n",c);
    }

}
return 0;
}




