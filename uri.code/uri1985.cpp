#include<iostream>
 using namespace std;
 int main()
 { int t,i,a,b,k;
  double sum=0.0;
  cin>>t;
  while(t--)
     {
     cin>>a>>b;
     if(a==1001)
      {
          sum = sum +(b*1.50);
      }

       if(a==1002)
      {
          sum = sum +(b*2.50);
      }
      if(a==1003)
      {
          sum = sum +(b*3.50);
      }
        if(a==1004)
      {
          sum = sum +(b*4.50);
      }

       if(a==1005)
      {
          sum = sum +(b*5.50);
      }}

printf("%.2lf\n",sum);

 return 0;

 }
