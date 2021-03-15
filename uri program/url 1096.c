#include<stdio.h>
int main()
{
  double  a,b,t1,t2,t3;
 scanf("%lf",&a);
 if(a<=2000)
 {
     printf("Isento\n");
 }
else if(a>2000 && a<=3000)
{
   t1 = a-2000;
   t1 = ((t1*8)/100);
   b = t1;
} else if(a>3000 && a<=4500)
{
    t1 = a-2000;
    t2 = t1-1000;
    t1 = t1-t2;
    t1 = ((t1*8)/100);
   t2 = ((t2*18)/100);
    b = t1+t2;
}else
 {
    t1 = a-2000;
    t2 = t1-1000;
    t3 = t2-1500;
     t1 = t1-t2;
     t2 = t2-t3;
     t1 =((t1*8)/100);
     t2 = ((t2*18)/100);
     t3 = ((t3*28)/100);
     b = t1+t2+t3;


 }
printf("R$ %.2lf\n",b);
return 0;

}
