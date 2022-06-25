#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t,a[5],i,x=0;
  cin>>t;
  for(i=0;i<5;i++)
    {

       cin>>a[i];

       if(a[i]==t)
         {
            x++;

        }


   }

   cout<<x<<"\n";


    return 0;
}
