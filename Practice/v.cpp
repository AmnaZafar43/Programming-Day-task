#include <iostream>
using namespace std;
bool equal();
main()
{
int r;
r=equal();
cout <<r;
}
bool equal()
{
int age;
string present;
cout <<"Enter your age ";
cin >> age;
cout <<"Enter bartender presence ";
cin >> present ;
if(age>18 && present=="false")
 {
   return true;
 }
else
 {
  return false;
 }
}