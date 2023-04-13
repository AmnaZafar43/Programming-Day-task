#include <iostream>
using namespace std;
float pyramid(int a,int b,int c,string unit);
float pyramid1(int d,int e,int f,string unit);
float pyramid2(int g,int h,int i,string unit);
main()
{
int l,w,h;
string unit;
float volume,r1,r2,r3;
cout <<"Enter length";
cin >> l;
cout <<"Enter width";
cin >> w;
cout <<"Enter height";
cin >> h;
cout <<"Enter units";
cin >> u;
r1=pyramid(volume);
cout <<"Volume of pyramid is " <<r1;
r2=pyramid1(volume);
cout <<"Volume of pyramid is " <<r2;
r3=pyramid2(volume);
cout <<"Volume of pyramid is " <<r3;
}
float pyramid(int a,int b,int c,string unit)
{
if(unit=="centimeter")
{
a=a*0.01;
b=b*0.01;
c=c*0.01;
float v=a*b*c/3.0;
return v;
}
}
float pyramid1(int d,int e,int f,string unit)
{
if(unit=="kilometers")
{
d=d*1000;
e=e*1000;
f=f*1000;
floatv1=e*f*g/3.0;
return v1;
}
}
float pyramid2(int g,int h,int i,string unit)
{
if(unit=="millimeter")
{
g=g*0.001;
h=h*0.001;
i=i*0.001;
floatv2=g*h*i/3.0;
return v2;
}
}

