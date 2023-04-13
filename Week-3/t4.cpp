#include <iostream>
using namespace std;
main()
{
int ivelocity,acc,t,fvelocity; 
cout <<"Enter initial velocity";
cin >> ivelocity;
cout <<"Enter acceleration";
cin >> acc;
cout <<"Enter time";
cin >> t;
fvelocity=acc*t+ivelocity;
cout <<"The final velocity is " <<fvelocity;
}