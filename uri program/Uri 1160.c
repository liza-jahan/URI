#include<stdio.h>
int main()
{
   int a,b,c,t;
   double ab,bc;
    scanf("%d",&t);
    while(t--)
    {
      c=0;
      scanf("%d%d%lf%lf",&a,&b,&ab,&bc);
      while(a<=b)
      {
        a *=(ab/100.0)+1.00;
        b *=(bc/100.0)+1.00;
        c++;
            if(c>100)
      {
          printf("Mais de 1 seculo.\n");
          break;
      }
      }

        if(c<=100)
        {
            printf("%d anos.\n",c);
        }
    }

      return 0;
      }











