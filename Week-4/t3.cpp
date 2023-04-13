#include <iostream>
using namespace std;
main()
{
float t1,t2,d;
cout <<"Enter temperature of city one";
cin >> t1;
cout <<"Enter temperature of city two";
cin >> t2;
d=t1-t2;
if(d>10)
{
cout <<"Difference is to big";
}
else
{
cout <<"Program Ends";
}
}