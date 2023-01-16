#include <iostream>
#include<iomanip>

using namespace std;

int main()
{
   int t,b=0,c=0,d=0,e=0;
   cin>>t;
    while(t--){
    int x;
    cin>>x;
    if(x%2 == 0){
        b++;
    }
      if(x%3 == 0){
        c++;
    }
      if(x%4 == 0){
        d++;
    }
      if(x%5 == 0){
        e++;
    }
   }
   cout<<b<<" Multiplo(s) de "<<2<<endl;
   cout<<c<<" Multiplo(s) de "<<3<<endl;
   cout<<d<<" Multiplo(s) de "<<4<<endl;
   cout<<e<<" Multiplo(s) de "<<5<<endl;
}
