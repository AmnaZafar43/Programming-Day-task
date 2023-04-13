#include <iostream>
using namespace std;
main()
{
  int a,b,c;
  cout <<"Enter first number ";
  cin >> a;
  cout <<"Enter second number ";
  cin >> b;
  cout <<"Enter third number ";
  cin >> c;
  if(a==b && b==c && a==c)
  {
   cout <<"3";
  }
  else if(a==b || a==c || b==c)
  {
   cout <<"2";
  }
  else
  {
   cout <<"0";
  }
} 