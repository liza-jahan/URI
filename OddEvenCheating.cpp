
#include<iostream>
using namespace std;
int main()
{
  int p,j1,j2,r,a,sum,win;
  cin>>p>>j1>>j2>>r>>a;
  sum=j1+j2;

  if(r==0 && a==0)
  {


  if((p==0 && sum%2==1)||(p==1 && sum%2==0))
  {
      win=1;
  }

else{
    win=2;
}
   }
   else{

else if((r==1 && a==0) || (r==0 && a==1))
    {
                   win=1;


    }
     else
    {
               win =2;

    }
     }


        cout<<"Jogador "<<win<<" ganha!"<<"\n";

    return 0;
}
