#include<iostream>
#include<string>
using namespace std;
int main()
{ int t;
long long int a,b,add=0;
cin >>t;
 while(t--)
  {
   string  x[4];
   cin>>x[0]>>x[1]>>x[2]>>x[3];
   cin>>a>>b;

   add =a+b;
    if(x[1]=="PAR")
      { if(add%2==1)
          {
              cout<<x[2]<<"\n";
          }
        else
        {
          cout<<x[0]<<"\n";

        }
          }
      else{
        if(add%2==1)
          {
              cout<<x[2]<<"\n";
          }
        else
        {
          cout<<x[0]<<"\n";

        }

      }

  }

    return 0;
}
