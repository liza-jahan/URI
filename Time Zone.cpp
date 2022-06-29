#include<iostream>
using namespace std;
int main()
{
  int a,b,c,d,total,result;
  cin>>a>>b>>c;


  if(a==0||b==0||c==0)
 {

   if(24+a+b+c>24)
   {
       d=(24+a+b+c)-24;
       cout<<d<<endl;
   }
    else
    {

        d=a+b+c+24;
        cout<<d;
    }

 }
 else
 {
     if(a+b+c>24)
   {
       d=(a+b+c)-24;
       cout<<d<<endl;
   }
    else
    {

        d=a+b+c;
        cout<<d;
    }
 }
return 0;

}
