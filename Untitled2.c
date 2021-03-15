#include<stdio.h>
int main()
{
 int a,b,c,d,x,y,z,w,v,sum1=0,sum2=0,e,f,h,s;
 scanf("%d%d%d%d",&a,&b,&c,&d);

if(a==c && b==d)

{

    printf("O JOGO DUROU 24 HORA(S)  E 0 MINUTO(S)\n");


}
 else if(a<c && b<d)
 {

     x=c-a;
     y=d-b;


         printf("O JOGO DUROU %d HORA(S)  E %d MINUTO(S)\n",x,y);


 }
else


  {
printf("O JOGO DUROU 0 HORA(s) E 59 MINUTO(S)\n");}


 return 0;

}
