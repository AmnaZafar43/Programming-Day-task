#include <iostream>
using namespace std;
int main()
{
string figure;
float A,n,l,w,r,b,h;
cout <<"Enter figure";
cin >> figure;
if(figure=="Square")
{
cout <<"Enter length of side ";
cin >> n;
A=n*n;
cout <<"Area of square is " <<A;
}
if(figure=="Rectangle")
{
cout <<"Enter length";
cin >> l;
cout <<"Enter width";
cin >> w;
A=l*w;
cout <<"Area of rectangle is" <<A;
}
if(figure=="Circle")
{
cout <<"Enter radius";
cin >> r;
A=3.14*r*r;
cout <<"Area of circle is" <<A;
}
if(figure=="Triangle")
{
cout <<"Enter base";
cin >> b;
cout <<"Enter length of it's height";
cin >> h;
A=0.5*b*h;
cout <<"Area of triangle is" <<A;
}
}