#include <iostream>
#include <cmath>
using namespace std;
void generation(int a,string b);
void generation1(int c,string d);
void generation2(int e,string f);
main()
{
int n;
string ch;
cout <<"Enter a number ";
cin >> n;
cout <<"Enter gender ";
cin >> ch;
r1=generation(n,ch);
cout <<"The related desendent is " <<r1;
r2=generation(n,ch);
cout <<"The related ancestor is " <<r2;
r3=generation(n,ch);
cout <<"The generation is " <<r3;
}
void generation(int a, string b)
{
if(a==-3)
{
if(b=="female")
{
cout <<"greatgrandmother";
}
else
{
cout <<"greatgrandfther";
}
if(a==3)
{
if(b=="female")
{
cout <<"Greatgrandaughter";
}
else
{
cout <<"Greatgrandson";
}
void generation1(int c, string d)
{
if(a==-2)
{
if(b=="male")
{
cout <<"grandfather";
}
else
{
cout <<"Grandmother";
}
if(a==2)
{
if(b=="male")
{
cout <<"grandson";
}
else
{
cout <<"grandaughter";
}
void generation2(int d, string e)
{
if(d==0)
{
if(e=="Female")
{
cout <<"Me";
}
else
{
cout <<"Me";
}