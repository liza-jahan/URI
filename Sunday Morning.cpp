#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
  int a,b,c,d,e;

 while(scanf("%d:%d",&a,&b)==2){
     c=a*60+b;
  if(c<420)
    {
      cout<<"Atraso maximo: 0"<<"\n";
    }

   else
   {


       d=c-420;
      cout<<"Atraso maximo: "<<d<<"\n";
   }
  }
return 0;


}
