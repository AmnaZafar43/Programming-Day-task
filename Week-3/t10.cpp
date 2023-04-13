#include <iostream>
using namespace std;
int main()
{
int n,a,b,c,d,e,f;
cout <<"Enter a four digit number";
cin >> n;
a=n/10;
b=n%10;
c=a/10;
d=a%10;
e=c/10;
f=c%10;
cout <<"Reverse of number is " <<b <<d <<f <<e;
}