#include<iostream>
using namespace std;
int main()
{
 int N,a,b,c,d,x,y,z;

 cin>>N;

 if(a=N/500)
  {

cout<<"D";
   a=a%500;}
   else if(b=a/100)
   {cout<<"C";
    b=a%100;}
    else if(c=b/50)
    {cout<<"L";
    c=b%50;}
    else if(d=c/10)
       {
           cout<<"X";
    d=c%10;}
    else if(x=d/5)
    {cout<<"V";
    x=d%5;}
    else if(y=x/1)
        cout<<"I";

}
