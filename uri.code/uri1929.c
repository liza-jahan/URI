

#include<stdio.h>

//using namespace std;
int main()
{
  int a[4],x,y,b,i,temp,j;

      for(i=0;i<4;i++)

          scanf("%d",&a[i]);

     for(i=0;i<4;i++)
    {
        for(j=i+1;j<4;i++)
        {

        if(a[j]<a[i])
        {
          temp = a[i] ;
          a[i] =a[j];
          a[j]=temp;

            }}}
            b = a[1]+a[2];
            x = a[0]+a[1];

            if(a[3]<b || a[2]<x)

                printf("N\n");

                else

        printf("s\n");

    }
